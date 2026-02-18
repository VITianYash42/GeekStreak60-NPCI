#include <vector>
using namespace std;

class Solution {
public:
    int mergeAndCount(vector<int>& arr, int left, int mid, int right) {
        int i = left;     
        int j = mid + 1;   
        int k = 0;         
        int inv_count = 0;
        vector<int> temp(right - left + 1);

        while (i <= mid && j <= right) {
            if (arr[i] <= arr[j]) {
                temp[k++] = arr[i++];
            } else {
                temp[k++] = arr[j++];
                inv_count += (mid - i + 1);
            }
        }

        while (i <= mid) temp[k++] = arr[i++];
        while (j <= right) temp[k++] = arr[j++];
        for (i = left, k = 0; i <= right; i++, k++) {
            arr[i] = temp[k];
        }
        return inv_count;
    }

    int mergeSort(vector<int>& arr, int left, int right) {
        int inv_count = 0;
        if (right > left) {
            int mid = left + (right - left) / 2;

            inv_count += mergeSort(arr, left, mid);
            inv_count += mergeSort(arr, mid + 1, right);
            inv_count += mergeAndCount(arr, left, mid, right);
        }
        return inv_count;
    }

    int inversionCount(vector<int> &arr) {
        return mergeSort(arr, 0, arr.size() - 1);
    }
};