## Direct-CI Integration

CV-X-IF protocol, asynchronous execution, rollback, and Phase 1 implementation 

AUTOISA TARGET 

## AutoISA replaces instruction choreography with one explicit CI

NOVIA BASELINE 

![image](https://cdn-mineru.openxlab.org.cn/result/2026-07-21/6fe77a52-91ca-41c0-b156-94122ee33ad7/cb40dd4e1b8857de17706dae2ff038ab5424977b57abe42628130ceb2b6f364d.jpg)


Inputs and outputs move through explicit NFU state-transfer instructions. 

![image](https://cdn-mineru.openxlab.org.cn/result/2026-07-21/6fe77a52-91ca-41c0-b156-94122ee33ad7/bdb36295dc02b6c72f2861597448caba26f95251745973aaf27442f6ae82a830.jpg)


ci.cdfg rd, rs1, rs2, rs3 

One instruction identifies the subgraph and all live-in registers; completion is asynchronous. 

NFU is reserved for NOVIA. AutoISA uses a CI coprocessor with a CDFG execution engine. 

## Hardware separates CPU tracking from coprocessor execution

Issue / register read 

![image](https://cdn-mineru.openxlab.org.cn/result/2026-07-21/6fe77a52-91ca-41c0-b156-94122ee33ad7/7a545215e335131486d0296a66f15235c6eb4175fb7088e040fc132eea182bd6.jpg)


## Acceptance and execution are deliberately decoupled

CPU presents instruction + id + operands 

valid && ready && accept 

Queue captures the complete job 

Engine starts when available 

Result returns with the same id 

issue_ready = request_queue_has_free_entry 

NOT: issue_ready = !engine_busy 

## Independent scalar work can overlap—within a bounded window

CI coprocessor 

C4 

C5 

accept 

CDFG execution 

result 

Scalar issue 

![image](https://cdn-mineru.openxlab.org.cn/result/2026-07-21/6fe77a52-91ca-41c0-b156-94122ee33ad7/2e1536708844c84331c172e114cfada4f21da72761705be7400b60ddbe187d27.jpg)


ADD 

XOR 

SUB 

Retirement 

wait for older CI 

CI 

ADD / XOR / SUB 

Issue and execute may overlap. Commit remains in order, and the scoreboard eventually limits progress. 

## A dependent consumer wakes only after matching completion

add x11, x10, x4 

Allocate x10 pending producer: hartid + id=7 

Source x10 names an unfinished producer 

![image](https://cdn-mineru.openxlab.org.cn/result/2026-07-21/6fe77a52-91ca-41c0-b156-94122ee33ad7/2081b88e60542301dfd4da5c229080ab0be97297c784bad96cef5bdc9bfdfe18.jpg)


Block only this consumer; independent work may issue 

result_valid && result_ready hartid + id=7, rd=x10 

Complete id=7; x10 ready ADD may now issue 

Completion key: hartid + transaction id rd identifies the destination; it is not the completion key 

## Speculative compute is safe because commit gates result visibility

Issue accepted 

Compute may start 

compute_don e 

commit_seen kill = 0 

result_valid 

result_valid = compute_done && commit_seen && !killed 

If computation finishes first, the result remains private in the CI coprocessor. 

## A misprediction kills the job before architectural writeback

Wrong-path CI accepted 

Older branch resolves wrong commit_kill hartid + id 

Invalidate job suppress result 

Kill handling depends on where the job is found 

QUEUED 

RUNNING 

DONE 

Remove; never dispatch 

Abort—or drain and discard 

Delete bufered result 

Race rule: kill wins over engine_done in the same cycle. 

## Phase 1 builds the compute-only Direct-CI substrate

Request queue depth = 2 

One CDFG execution engine 

Result bufer ready/valid 

Commit / kill job tracking 

Two test operations 

cus_delay 

Configurable latency: 1, 2, 4, 8, 16 cycles 

## cus_cdfg_demo

A small multi-node graph with three live-ins and one liveout x1 $\times 2 \times 3 - > \times 4 : \times 1 ^ { \star } \times 2 ^ { \star } \times 3$ param to control latency 

## Completion requires protocol evidence—not only cycle totals

Acceptance valid && ready && accept captures the complete job 

Overlap Independent scalar issue/execute occurs before CI result 

Dependency A consumer of pending rd waits for result availability 

Backpressure Request and result payloads remain stable when blocked 

Rollback Queued, running, and completed jobs can all be killed 

Identity Request, commit, kill, and result share hartid + id 

One documented command must run unit tests, directed tests, regressions, and produce event/latency reports. 