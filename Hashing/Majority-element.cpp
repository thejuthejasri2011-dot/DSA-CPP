#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int majorityElement(vector<int>& nums) {
    unordered_map<int, int> count;

    for (int i = 0; i < nums.size(); i++) {
        count[nums[i]]++;
    }

    int n = nums.size();

    for (auto x : count) {
        if (x.second > n / 2) {
            return x.first;
        }
    }

    return -1;
}

int main() {
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};

    int answer = majorityElement(nums);

    cout << "Majority Element: " << answer << endl;

    return 0;
}