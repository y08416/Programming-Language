#include <stdio.h>
int main(void)
{
    int n;
    // キーボードから整数n入力
    printf("正の整数:");
    scanf("%d", &n);

    // nが1未満の整数の時プログラムを終了
    if (n < 1)
    {
        printf("正の整数ではありません。");
        return 1; // プログラム終了
    }

    // 三角形を表示
    for (int m = 1; m <= n; m++)
    {

        for (int k = 0; k < m; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
