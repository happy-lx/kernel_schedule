## Intro
An example implementation of a Round Robin/Multi-level Feed-back Queue algorithm

## Design
The Round Robin scheduling algorithm is enhanced by implementing a multi-level feedback queue rather than a single running list.

This new approach involves dividing the jobs into 8 priority levels. If the priority of job A is higher than the priority of job B, then job A is executed while job B waits. If job A and job B have the same priority, they are executed in a round-robin fashion, taking turns.

When a job enters the system, it is initially placed in the highest priority level. After using up a specific amount of time at its current level, the job's priority is decreased. As the job's priority reaches its lowest level, it is moved back up to the highest level.

Essentially, this modified Round Robin algorithm incorporates multiple levels of priority and dynamically adjusts the priority of jobs based on their execution progress, providing a more efficient scheduling mechanism.

## Test
Inorder to see the difference between different algorithms, we can use run.sh

```bash
cd /test_progs
sh run.sh
```
