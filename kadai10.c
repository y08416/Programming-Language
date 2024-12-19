#include <stdio.h>

// 配列の統計量（最小値、最大値、平均）を計算する関数
void stats(int* data, int size, int* min, int* max, float* mean);

int main() {
    // サンプルデータ: 試験の結果
    int exam_results[] = {81, 72, 45, 90, 66, 98};
    int min, max;
    float mean;

    // 統計量を計算するためにstats関数を呼び出す
    stats(exam_results, sizeof(exam_results) / sizeof(int), &min, &max, &mean);

    // 計算された統計量を表示する
    printf("最小値: %d\n", min);
    printf("最大値: %d\n", max);
    printf("平均: %.2f\n", mean);

    return 0;
}

// 配列の統計量（最小値、最大値、平均）を計算する関数
void stats(int* data, int size, int* min, int* max, float* mean) {
    // minとmaxを配列の最初の要素で初期化する
    *min = *max = data[0];

    // meanを0で初期化する
    *mean = 0;

    // 配列をイテレートして最小値、最大値を見つけ、平均を計算する
    for (int i = 0; i < size; ++i) {
        // 現在の要素が最小値より小さい場合、最小値を更新する
        if (data[i] < *min) {
            *min = data[i];
        }

        // 現在の要素が最大値より大きい場合、最大値を更新する
        if (data[i] > *max) {
            *max = data[i];
        }

        // 平均を計算するために値を蓄積する
        *mean += data[i];
    }

    // 平均を配列のサイズで割って計算する
    *mean /= size;
}
