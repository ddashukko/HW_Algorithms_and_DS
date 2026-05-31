#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution { 
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> num_set(nums.begin(), nums.end());
        int longest = 0;
        for (int num : num_set) {
            if (!num_set.count(num - 1)) {
                int current_num = num;
                int current_streak = 1;
                while (num_set.count(current_num + 1)) {
                    current_num += 1;
                    current_streak += 1;
                }
                longest = max(longest, current_streak);
            }
        }
        return longest;
    }
};

int main() {
    return 0;
}