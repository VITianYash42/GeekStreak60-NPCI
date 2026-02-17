# Day 02: Maximum number of overlapping Intervals

## Approach
- **Separate and Sort:** Instead of keeping the intervals bound together, we separate the start times and end times into two distinct arrays and sort them independently. This mimics an event-driven "sweep-line" approach.
- **Two Pointers:** We use pointer `i` for start times and `j` for end times. 
- We compare `starts[i]` and `ends[j]`. If `starts[i] <= ends[j]`, an interval has started before the previous one ended, increasing the concurrent overlap count. We increment our overlap counter and move `i`.
- The `<=` operator is critical here. Because the intervals are **inclusive**, an interval starting at `2` and an interval ending at `2` overlap. Therefore, the start must be processed before the end.
- If `starts[i] > ends[j]`, an interval has ended, so we decrease the counter and move `j`.

## Complexity
- **Time Complexity:** $O(N \log N)$ where $N$ is the number of intervals. Extracting the times takes $O(N)$, sorting both arrays takes $O(N \log N)$, and the two-pointer traversal takes $O(N)$.
- **Space Complexity:** $O(N)$ because we create two new arrays of size $N$ to store the separated start and end times.