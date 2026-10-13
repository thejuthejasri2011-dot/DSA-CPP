#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int>twoSum(vector<int> &nums,int target){
        int left = 0;
        int right = nums.size()-1;
        while(left<right){
            int sum = nums[left]+nums[right];
            if(sum == target){
                return{left+1,right+1};
            }
            else if(sum>target){
                right--;
            }
            else {
                left++;
            }
        }
        return{};
    }
};

int main(){
    Solution s;
    int arr[] = {2,7,8,9};
    vector<int> nums(arr,arr+4);
    int target = 9;
    vector<int> result = s.twoSum(nums,target);
    cout << result[0] << " " << result[1] << endl;
};