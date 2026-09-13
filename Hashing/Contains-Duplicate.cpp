#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
    bool ContainsDuplicate(vector<int>& nums){
        unordered_set<int> seen;
        for(int i=0; i<nums.size(); i++){
            if(seen.find(nums[i]) != seen.end()){
                return true;
            }
            seen.insert(nums[i]);
        }
        return false;
    }
};

int main() {
    vector<int> nums = {1,2,3,1};
    solution obj;
    bool result =obj.ContainsDuplicate(nums);
    cout << boolalpha << result << endl;
    return 0;
}