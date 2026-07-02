/*
==========================================================
LeetCode 217 - Contains Duplicate

Topic      : Hashing
Pattern    : Hash Set (unordered_set)
Difficulty : Easy

Approach:
Store every number in a hash set.
If a number already exists in the set,
a duplicate has been found.

Time Complexity : O(n)
Space Complexity: O(n)
==========================================================
*/

#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
      unordered_set<int> seen;

        for (int x : nums) 
        {
            if (seen.find(x) != seen.end()) 
            {
                return true;
            }
            seen.insert(x);
        }

        return false;
    }
};
