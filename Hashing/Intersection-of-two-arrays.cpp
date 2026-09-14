#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector<int>
    intersection(vector<int>&nums1,vector<int>&nums2){
        unordered_set<int> seen;
        unordered_set<int> added;
        vector<int> result;
        for(int i=0; i<nums1.size();i++){
            seen.insert(nums1[i]);
        }
        for(int i=0; i<nums2.size(); i++){
            if(seen.find(nums2[i]) != seen.end() && added.find(nums2[i]) == added.end()) {
                result.push_back(nums2[i]);
                added.insert(nums2[i]);
            }
        }
        return result;
    }
};

int main(){
    vector<int> nums1 = {1,2,3,2,4};
    vector<int> nums2 = {2,4,5,6,8};
    Solution obj;
    vector<int> result = obj.intersection(nums1,nums2);
    cout << "Intersection: ";
    for(int i=0;i<result.size();i++){
        cout << result[i] << " ";
    }
    return 0;

}