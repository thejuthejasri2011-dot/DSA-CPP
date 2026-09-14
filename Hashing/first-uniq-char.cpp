#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int firstuniqchar(string s){
        unordered_map<char,int> count;
        for(int i=0; i<s.size();i++){
            count[s[i]]++;
        }
        for(int i=0;i<s.size();i++){
            if(count[s[i]] != 1){
                return i;
            }
        }
        return -1;
    }
};

int main() {
    string s = "leetcode";
    Solution obj;
    int result = obj.firstuniqchar(s);
    cout << "first unique character index" << result << endl;
    return 0;
}