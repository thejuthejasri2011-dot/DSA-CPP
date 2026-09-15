#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector<vector<string>> groupAnagrams(vector<string>& strs){
        unordered_map<string,vector<string>> groups;
        for(int i=0; i<strs.size(); i++){
            string key = strs[i];
            sort(key.begin(),key.end());
            groups[key].push_back(strs[i]);
        }
        vector<vector<string>> result;
        for(auto group : groups){
            result.push_back(group.second);
        }
        return result;
    }
};

int main(){
      vector<string> strs = {
        "eat", "tea", "tan", "ate", "nat", "bat"
    };
    Solution obj;

    vector<vector<string>> result = obj.groupAnagrams(strs);

    cout << "[";

    for(int i = 0; i < result.size(); i++) {

        cout << "[";

        for(int j = 0; j < result[i].size(); j++) {
            cout << "\"" << result[i][j] << "\"";

            if(j < result[i].size() - 1) {
                cout << ",";
            }
        }

        cout << "]";

        if(i < result.size() - 1) {
            cout << ",";
        }
    }

    cout << "]" << endl;

    return 0;
}
