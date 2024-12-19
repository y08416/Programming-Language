#include<stdio.h>

int main(void){

    double R; // 実数Rの値を格納する変数

    double f[10]; // f(x)の値を格納する配列

    printf("実数Rを入力してください:"); // ユーザーにRの値を入力するように促すメッセージ
    scanf("%lf",&R);

    f[0]=0.1; // f(0)の初期値を設定

    // f(x)の値を計算
    for(int i=1; i<10; i++){   
        f[i]=f[i-1]*R;
    }
    

    // 計算結果を表示
    for(int i=0;i<10;i++){  
        printf("f(%d)=%.1f\n",i,f[i]);  // f(x)の値を表示
        
    }

    return 0;


}

