#include <stdio.h>
#include <math.h>

#define PI = 3.1416;
int main(){
    float x,y;
    scanf("%f %f",&x,&y);
//    printf("%f\n",powf(0,2));
//    printf("%f,%f\n",x,y);
    printf("%f\n",sqrtf(powf(x-2,2)+ powf(y-2,2)));
    printf("%f\n",sqrtf(powf(x+2,2)+ powf(y-2,2)));
    printf("%f\n",sqrtf(powf(x-2,2)+ powf(y+2,2)));
    printf("%f\n",sqrtf(powf(x+2,2)+ powf(y+2,2)));
    if(sqrtf(powf(x-2,2)+ powf(y-2,2)) <= 1 || sqrtf(powf(x+2,2)+ powf(y-2,2)) <= 1 || sqrtf(powf(x-2,2)+ powf(y+2,2)) <= 1
    || sqrtf(powf(x+2,2)+ powf(y+2,2)) <= 1){
        printf("the height is 10");
    } else{
        printf("the height is 0");
    }

}