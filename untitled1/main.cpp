#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int sum = 0;
    for(int i = 0 ; i < n ; i++){
        if(i%37 == 0){
            sum += i;
            cout<<i;
        }
    }
    cout<<sum<<endl;
}