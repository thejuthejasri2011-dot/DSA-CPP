
#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
using namespace std;

vector<int> topKFrequent(vector<int>& nums, int k) {

    unordered_map<int, int> frequency;

    // Count frequency of each number
    for (int num : nums) {
        frequency[num]++;
    }

    // Max heap: {frequency, number}
    priority_queue<pair<int, int>> pq;

    for (auto it : frequency) {
        pq.push({it.second, it.first});
    }

    vector<int> ans;

    // Extract top k frequent elements
    while (k > 0) {

        auto topElement = pq.top();

        ans.push_back(topElement.second);

        pq.pop();
        k--;
    }

    return ans;
}

int main() {

    vector<int> nums = {1, 1, 1, 2, 2, 3};
    int k = 2;

    vector<int> result = topKFrequent(nums, k);

    cout << "Top " << k << " frequent elements: ";

    for (int num : result) {
        cout << num << " ";
    }

    cout << endl;

    return 0;
}