//
// Created by 孙志远 on 2023/12/29.
//

#include <iostream>
using namespace std;
class PassThePillow {
public:
    int passThePillow(int n, int time) {
        int a = time%(2*(n-1));
        if(a<=n-1){
            return a+1;
        } else{
            return n-(a-(n-1));
        }
    }
};
