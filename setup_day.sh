#!/bin/bash

read -p "Enter Day Number (e.g., 01): " day
read -p "Enter Problem Name (e.g., Two Sum): " name

# Replace spaces with underscores for the folder name
formatted_name=$(echo "$name" | tr ' ' '_')
folder_name="Day_${day}_${formatted_name}"

mkdir -p "$folder_name"

# Create boilerplate C++ file
cat <<EOF > "$folder_name/solution.cpp"
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
  public:
    // Insert GFG function signature here
    
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        // Add custom local test cases if needed
    }
    return 0;
}
EOF

# Create notes file
cat <<EOF > "$folder_name/notes.md"
# Day $day: $name

## Approach
- [Briefly explain your logic here]

## Complexity
- Time Complexity: O()
- Space Complexity: O()
EOF

echo "✅ Created $folder_name successfully!"