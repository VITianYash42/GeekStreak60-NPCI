#include <vector>
#include <algorithm>

using namespace std;
class Solution {
public:
    int overlapInt(vector<vector<int>>& arr) {
        int n = arr.size(); 
        vector<int> starts(n);
        vector<int> ends(n);
        
        for (int i = 0; i < n; i++) {
            starts[i] = arr[i][0];
            ends[i] = arr[i][1];
        }
        
        sort(starts.begin(), starts.end());
        sort(ends.begin(), ends.end());
        
        int max_overlap = 0;
        int current_overlap = 0;
        int i = 0; 
        int j = 0; 
        
        while (i < n && j < n) {
            if (starts[i] <= ends[j]) {
                current_overlap++;
                max_overlap = max(max_overlap, current_overlap);
                i++;
            } else {
                current_overlap--;
                j++;
            }
        } 
        return max_overlap;
    }
};