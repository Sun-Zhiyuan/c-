//
// Created by 孙志远 on 2023/12/29.
//
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;
class maxprofit{
public:
    int maxProfit(vector<int>& prices, int fee) {
        vector<int> hold(prices.size()),notHold(prices.size());
        hold[0] = -prices[0];
        notHold[0] = 0;
        for(int i = 1 ; i < prices.size() ; i++){
            hold[i] = max(hold[i-1],notHold[i-1]-prices[i]);
            notHold[i] = max(notHold[i-1],hold[i-1]+prices[i]-fee);
            cout<<"hold"<<i<<" "<<hold[i]<<endl;
            cout<<"notHold"<<i<<" "<<notHold[i]<<endl;
        }
        return max(notHold[prices.size()-1],hold[prices.size()-1]+prices[prices.size()-1]-fee);
    }
};
