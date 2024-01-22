//
// Created by 孙志远 on 2024/1/11.
//
#include <vector>
#include <algorithm>
#include "iostream"
using namespace std;
class DistributeCookies {
public:
    int distributeCookies(vector<int>& cookies, int k) {
        std::sort(cookies.begin(),cookies.end());
        while(cookies.size()>k){
            int temp1 = cookies.front();
            cookies.erase(cookies.begin());
            int temp2 = cookies.front();
            cookies.erase(cookies.begin());
            cookies.push_back(temp1+temp2);
            std::sort(cookies.begin(),cookies.end());
        }
        return cookies.back();
    }
};