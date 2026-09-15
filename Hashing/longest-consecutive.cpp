#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int longestconsecutive(vector<int>& nums){
unordered_set<int> numsSet;
for(int i=0; i<nums.size(); i++){
    numsSet.insert(nums[i]);
}
int longest = 0;
for(int nums : numsSet){
    if(numsSet.find(nums-1) == numsSet.end()){
        int current = nums;
        int length = 1;
        while(numsSet.find(current+1) != numsSet.end()){
            current++;
            length++;
        }
        if(length>longest){
            longest = length;
        }
    }
}
return longest;
    }
};

int main(){
    vector<int> nums = {100,4,200,1,3,2};
    Solution sol;
    int result = sol.longestconsecutive(nums);
    cout << "longest consecutive sequence length: " << result << endl;
    return 0;

}