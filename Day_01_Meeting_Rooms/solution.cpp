#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool canAttend(vector<vector<int>>& arr) {
        if (arr.size() <= 1) return true;
        sort(arr.begin(), arr.end());

        for (int i = 1; i < arr.size(); i++) {
            int prevEnd = arr[i - 1][1];
            int currStart = arr[i][0];

            if (currStart < prevEnd) {
                return false; 
            }
        }
        return true;
    }
};