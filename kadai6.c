#include <stdio.h>

int main() {
    int test_results[5][3] = { //初期化
        {91, 63, 78},
        {67, 72, 46},
        {89, 34, 53},
        {32, 54, 34},
        {97, 67, 82}
    }; 

   
    int num_students = 5; //生徒の数
    int num_subjects = 3; //科目の数

    for (int subject = 0; subject < num_subjects; subject++) {
        int sum = 0;
        int max_score = test_results[0][subject];
        int min_score = test_results[0][subject];

        for (int student = 0; student < num_students; student++) {
            sum += test_results[student][subject];

            if (test_results[student][subject] > max_score) { //最大点の算出
                max_score = test_results[student][subject];
            }

            if (test_results[student][subject] < min_score) { //最小点の算出
                min_score = test_results[student][subject];
            }
        }

        double average = (double)sum / num_students; //sumをdoubleに変換して平均点の計算

        printf("科目%d:\n", subject + 1); //結果の表示
        printf("平均点: %.2lf\n", average);
        printf("最大点: %d\n", max_score);
        printf("最小点: %d\n", min_score);
        printf("\n");
    }

    return 0;
}
