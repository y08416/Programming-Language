#include <stdio.h>

// 3次元ベクトルを表す構造体
typedef struct {
    double x;
    double y;
    double z;
} Vector3;

// 外積計算関数1
Vector3 crossProduct1(Vector3 a, Vector3 b) {
    Vector3 result;
    result.x = a.y * b.z - a.z * b.y;
    result.y = a.z * b.x - a.x * b.z;
    result.z = a.x * b.y - a.y * b.x;
    return result;
}

// 外積計算関数2
void crossProduct2(Vector3 a, Vector3 b, Vector3* result) {
    result->x = a.y * b.z - a.z * b.y;
    result->y = a.z * b.x - a.x * b.z;
    result->z = a.x * b.y - a.y * b.x;
}

int main() {
    // ベクトルaとbの定義
    Vector3 a = {1.0, 2.0, 3.0};
    Vector3 b = {4.0, 5.0, 6.0};

    // 外積計算1
    Vector3 result1 = crossProduct1(a, b);
    printf("Cross Product 1: %.2f, %.2f, %.2f\n", result1.x, result1.y, result1.z);

    // 外積計算2
    Vector3 result2;
    crossProduct2(a, b, &result2);
    printf("Cross Product 2: %.2f, %.2f, %.2f\n", result2.x, result2.y, result2.z);

    return 0;
}
