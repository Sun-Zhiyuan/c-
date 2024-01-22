#include <iostream>
#include <string>
#include "SubarraySum.cpp"


using namespace std;


int main(){
    SubarraySum subarraySum;
    vector<int> nums = {1,-1,0};
    cout<<subarraySum.subarraySum(nums,0)<<endl;
}