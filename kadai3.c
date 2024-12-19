#include <stdio.h>
int main (){

/*変数の設定*/
    int x,y;

/*文字の出力*/
    printf("整数を二つ入力してください。\n");

/*整数の入力*/
    scanf("%d", &x);
    scanf("%d", &y);

if(x>0 && y==0){
 printf("あなたは%dと0を入力しました。\n",x);
 printf("%dを0で割ると無限大です。\n", x);
 double x1;
 x1=x;
 printf("%.0fと0の平均は%.2fです。\n", x1,(x1+0)/2);}

else if(x<0 && y==0){
 printf("あなたは%dと0を入力しました。\n",x);
 printf("%dを0で割るとマイナス無限大です。\n", x);
 double x2;
 x2=x;
 printf("%.0fと0の平均は%.2fです。\n", x2,(x2+0)/2);}

else if(x==0 && y==0){
 printf("あなたは0と0を入力しました。\n入力が無効です。");}

else{
 /*文字の出力*/
    printf("あなたは%dと%dを入力しました。\n",x, y);

 /*結果の出力*/
    printf("%dを%dで割ると%dあまり%dです。\n", x, y, x/y, x%y);

 /*double型に変換*/

    double x1,y1;

    x1=x; y1=y;

    printf("%.0fを%.0fで割ると%.2fです。\n", x1, y1, x1/y1);

    printf("%.0fと%.0fの平均は%.2fです。\n", x1, y1, (x1+y1)/2);

    return 0; }

}
