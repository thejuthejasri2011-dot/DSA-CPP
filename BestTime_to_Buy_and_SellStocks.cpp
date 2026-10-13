#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int maxprofit(vector<int> &prices){
        int minprice = prices[0];
        int maxprofit = 0;
        for(int i=0;i<prices.size();i++){
            int price = prices[i];
            int profit = price-minprice;
            if(profit>maxprofit){
                maxprofit = profit;
            }
            if(price < minprice){
                minprice = price;
            }
        }
        return maxprofit;
    }
};

int main(){
     Solution s;
     int arr[] ={6,3,8,5,1};
    vector<int> prices(arr,arr+sizeof(arr)/sizeof(arr[0]));
    int result = s.maxprofit(prices);
    cout << "Maximum profit: " << result << endl;
    return 0;
}