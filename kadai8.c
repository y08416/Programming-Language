#include <stdio.h>
 
 float power(float x, int y);

int main(){
    float x;
    int y;
    printf("xのy乗を計算します。\n x=");
    scanf("%f", &x);
    printf("y=");
    scanf("%d",&y);

    printf("xのy乗=%f\n",power(x,y));

    return 0;
}

 float power(float x,int y){

    if(y == 0){
        return 1.0; //xの0乗は1である
    } else if(y > 0){
        return x * power(x,y-1);
    } else {
        return  1.0 / (x * power(x, -y-1));
    }
    
}