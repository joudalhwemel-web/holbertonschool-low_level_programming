# Green Tech Efficiency and Benchmarking Analysis

## Measurement Methodology

This experiment investigated the execution time of C programs
using controlled benchmarking. All measurements were performed
in the same development environment. The programs were compiled
using GCC with the required flags: -Wall, -Werror, -Wextra,
-pedantic, -std=gnu89, and -Wno-long-long. These flags helped
maintain consistent compilation settings across the experiment.

The baseline program performed 100 million iterations and
measured execution time using clock(). It was executed three
times without changing the source code. The algorithm comparison
also used three runs of the same input and two implementations.
Their execution times were recorded separately.

The instrumentation experiment measured the building,
processing, and reduction phases. Timing boundaries were
placed immediately before and after each function call.
The total measurement covered all three phases and the
small amount of work between them. CLOCKS_PER_SEC was used
to convert clock ticks into seconds.

## Observed Performance Differences

The baseline execution times were 0.096186,
0.091610, and 0.091948 seconds.
Their average was 0.093248 seconds. The recorded
values were not identical, demonstrating that execution
time can vary even when the program and input remain unchanged.

For the algorithm comparison, the naive implementation
recorded an average of 1.953075 seconds. The
single-pass implementation recorded an average of
0.000108 seconds. The naive implementation was approximately 18028.39 times slower than the single-pass implementation.

The naive algorithm uses nested loops, giving it quadratic
time complexity for this task. The single-pass algorithm
uses one loop, giving it linear time complexity.
These structural differences explain why the algorithms
can have substantially different execution costs.

The instrumentation run recorded TOTAL at
0.000359 seconds, BUILD_DATA at
0.000159 seconds, PROCESS at
0.000129 seconds, and REDUCE at
0.000070 seconds. The largest recorded
phase measurement was BUILD_DATA. These figures describe
this particular run rather than a universal ranking.

## Relation Between Runtime and Energy Consumption

Runtime is relevant to energy efficiency because CPU
activity requires electrical energy. A program that needs
more processing time may use additional energy under
comparable operating conditions. The comparison illustrates
why choosing an efficient algorithm is important.

However, faster execution does not automatically prove
lower energy consumption. Power usage depends on hardware,
CPU frequency, system load, and other factors. This
experiment measured CPU execution time rather than
electrical power. Therefore, the results support statements
about computational efficiency, not exact energy savings.

## Limitations of the Experiment

The experiment has several limitations. Only three runs
were collected for the baseline and algorithm comparison,
so the sample size is limited. Background processes and
operating system scheduling may introduce timing variability.

Furthermore, clock() measures processor time rather than
direct electrical consumption. Very short phases can be
affected by timer resolution and measurement overhead.
The instrumentation values therefore should not be treated
as precise energy measurements. Testing across different
machines, workloads, and larger samples would provide
stronger evidence.

## Practical Engineering Takeaway

The main lesson is that performance decisions should
be based on measurements rather than assumptions.
Repeated benchmarks and consistent inputs make comparisons
more meaningful. Algorithmic complexity also matters:
avoiding unnecessary repeated operations can substantially
reduce computational work.

Developers should measure individual processing phases
to identify expensive operations before considering changes.
They should also distinguish runtime improvements from
verified energy savings. Responsible engineering combines
efficient algorithms, repeatable experiments, honest
interpretation, and clear documentation of limitations.
