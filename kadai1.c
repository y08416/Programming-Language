/*整数の四則演算のプログラム*/
#include <stdio.h>
int main (){

/*変数の設定*/
    int x;
    int y;

/*文字の出力*/
    printf("整数を二つ入力してください。\n");

/*整数の入力*/
    scanf("%d", &x);
    scanf("%d", &y);

/*文字の出力*/
    printf("あなたは%dと%dを入力しました。\n",x, y);

/*結果の出力*/
    printf("%d+%d=%d\n", x, y,x + y);
    printf("%d-%d=%d\n", x, y,x - y);
    printf("%d*%d=%d\n", x, y,x * y);
    printf("%d/%d=%d\n", x, y,x / y);

}
