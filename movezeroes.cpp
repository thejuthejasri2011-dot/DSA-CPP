#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void movezeroes(vector<int> &nums){
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] != 0){
                nums[j] = nums[i];
                j++;
            }
        }
        for(int i=j;i<nums.size();i++){
            nums[i] =0;
        }
    }
};

int main(){
    Solution s;
    int arr[] = {1,5,0,0,4,0,7,0,0};

    vector<int> nums(arr,arr+sizeof(arr)/sizeof(arr[0]));
    s.movezeroes(nums);
    cout << "After moving zeroes: ";
    for(int i=0;i<nums.size();i++){
        cout << nums[i] << " ";
    }
    cout << endl;

}