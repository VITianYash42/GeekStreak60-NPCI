# Day 01: Meeting Rooms

## Approach
- **Sort the Intervals:** First, sort the 2D array of meetings based on their starting times. This aligns them sequentially, making it easy to check for overlaps.
- **Check for Overlaps:** Iterate through the sorted array starting from the second meeting. 
- Compare the current meeting's start time with the previous meeting's end time.
- If the current start time is strictly less than the previous end time, it means the meetings overlap (a person cannot attend both), so return `false`.
- If the loop finishes without finding any overlaps, return `true`.

## Complexity
- **Time Complexity:** O(N log N). The built-in sorting function takes O(N log N) time, which is the dominant operation. The single `for` loop to check for overlaps takes O(N) time.
- **Space Complexity:** O(1). We are only using a few variables for in-place comparisons and not allocating any extra auxiliary data structures.