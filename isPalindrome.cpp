#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s){
    int left = 0;
    int right = s.length()-1;
    while(left < right){
        if(! isalnum(s[left])) {
            left++;
            continue;
        }
        if(! isalnum(s[right])){
            right--;
            continue;
        }
        if(tolower(s[left]) != tolower(s[right])) {
            return false;
        }
        left++;
        right--;
    }
    return true;
};

int main(){
    string s;
    cout << "Enter a string: ";
    getline(cin,s);
    if(isPalindrome(s)){
        cout << "palindrome" << endl;
    } else {
        cout << "not palindrome" << endl;
    }
    return 0;
}