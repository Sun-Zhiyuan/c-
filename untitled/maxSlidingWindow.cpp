//
// Created by 孙志远 on 2024/1/25.
//
#include <vector>
#include "iostream"
using namespace std;

class MaxSlidingWindow {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> answer;
        int index = 0;
        int max = INT_MIN;
        for(int i = 0 ; i < k ; i++){
            if(nums[i] >= max){
                index = i;
                max = nums[i];
            }
        }
        answer.push_back(max);
        for(int i = k ; i < nums.size() ; i++){
            if(nums[i] > max){
                index = i;
                max = nums[i];
                answer.push_back(max);
            } else if(i-k < index){
                answer.push_back(max);
            } else{
                index = i - k + 1;
                max = INT_MIN;
                for(int j = i - k + 1 ; j <= i ; j++){
                    if(nums[j] >= max){
                        index = j;
                        max = nums[j];
                    }
                }
                answer.push_back(max);
            }
        }
        return answer;
    }
};