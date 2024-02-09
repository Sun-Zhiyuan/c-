//
// Created by 孙志远 on 2024/1/29.
//
#include <vector>
#include "iostream"
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        int sum = 0;
        for(int i = 0 ; i < nums.size() ; i ++){
            if(nums[i]==0){
                sum++;
            }
        }
        if(sum>=2){
            for(int i = 0 ; i < nums.size() ; i++){
                ans.push_back(0);
            }
        } else if(sum==0) {
            for (int i = 0; i < nums.size(); i++) {
                if (i == 0) {
                    int mul = 1;
                    for (int j = 1; j < nums.size(); j++) {
                        mul *= nums[j];
                    }
                    ans.push_back(mul);
                } else {
                    int temp;
                    if (nums[i] == 0) {
                        temp = 0;
                    } else {
                        temp = ans[i - 1] * nums[i - 1] / nums[i];
                    }
                    ans.push_back(temp);
                }
            }
        } else{
            int index;
            for(int i = 0 ; i < nums.size() ; i++){
                if(nums[i]==0){
                    index = i;
                    break;
                }
            }
            for(int i = 0 ; i < nums.size() ; i++){
                if(i!=index){
                    ans.push_back(0);
                } else{
                    int mul = 1;
                    for(int j = 0 ; j < nums.size() ; j++){
                        if(nums[j]!=0){
                            mul *= nums[j];
                        }
                    }
                    ans.push_back(mul);
                }
            }
        }
        return ans;
    }
};