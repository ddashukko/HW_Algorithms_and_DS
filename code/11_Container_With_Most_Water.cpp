#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_water = 0; 
        int left = 0, right = height.size() - 1;
        while (left < right) {
            int w = right - left;
            max_water = max(max_water, min(height[left], height[right]) * w);
            if (height[left] <= height[right]) {
                left++;
            } else {
                right--;
            }
        }
        return max_water;
    }
};

int main() {
    return 0;
}