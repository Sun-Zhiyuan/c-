//
// Created by 孙志远 on 2024/1/21.
//
#include <vector>
#include "iostream"
using namespace std;
class SubarraySum {
public:
    int subarraySum(vector<int>& nums, int k) {
        int answer = 0;
        int sum;
        for(int i = 0 ; i < nums.size() ; i++){
            sum = 0;
            for(int j =i ; j < nums.size() ; j++) {
                sum += nums[j];
                if (sum == k){
                    answer++;
                }
            }
        }
        return answer;
    }
};