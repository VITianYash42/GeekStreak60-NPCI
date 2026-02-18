# Day 03: Count Inversions

## Approach
- **Divide and Conquer (Merge Sort):** The problem asks us to count pairs $(i, j)$ such that $i < j$ and $arr[i] > arr[j]$. 
- A brute force approach using nested loops takes $O(N^2)$, which is too slow for $N=10^5$.
- We use **Merge Sort**. During the `merge` step, we compare elements from the left subarray (`arr[i]`) and the right subarray (`arr[j]`).
- If `arr[i] > arr[j]`, it means `arr[i]` forms an inversion with `arr[j]`. Since the left subarray is sorted, **all elements after `arr[i]`** in the left subarray also form inversions with `arr[j]`.
- We add `(mid - i + 1)` to our answer count instantly instead of iterating one by one.

## Complexity
- **Time Complexity:** $O(N \log N)$ (Standard Merge Sort time).
- **Space Complexity:** $O(N)$ (Temporary array used for merging).