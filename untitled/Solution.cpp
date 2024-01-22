#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    int isWinner(vector<int>& player1, vector<int>& player2) {
        int sum1,sum2;
        sum1 = sum2 = 0;
        int flag1,flag2;
        flag1 = flag2 = -1;
        for(int i = 0 ; i < player1.size() ; i++){
            if(flag1>=i){
                sum1 += player1[i]*2;
            } else{
                sum1 += player1[i];
            }
            if(flag2>=i){
                sum2 += player2[i]*2;
            } else{
                sum2 += player2[i];
            }
            if(player1[i] == 10){
                flag1 = i+2;
            }
            if(player2[i] == 10){
                flag2 = i+2;
            }
        }
        if(sum1 > sum2){
            return 1;
        } else if(sum1 < sum2){
            return 2;
        } else{
            return 0;
        }
    }
};