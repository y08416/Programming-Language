#include <stdio.h>

int first_match(const char *message, const char *query) {
    int message_len = 0;
    int query_len = 0;

     // message の長さを計算
    while (message[message_len] != '\0') {
        message_len++;
    }


    // query の長さを計算
    while (query[query_len] != '\0') {
        query_len++;
    }

    if (message_len < query_len) {
        return -1;
    }

     // message 中で query と一致する最初の位置を探す
    for (int i = 0; i <= message_len - query_len; i++) {
        int j;

        for (j = 0; j < query_len; j++) {
            if (message[i + j] != query[j]) {
                break;
            }
        }

        // 部分文字列が一致した場合、その位置を返す
        if (j == query_len) {
            return i;
        }
    }
    
     // 一致する部分が見つからなかった場合 -1 を返す
    return -1;
}


int main() {
    const char *message = "No code, no life.";
    const char *query = "No";

    int result = first_match(message, query);

    printf("%d\n", result);

    return 0;
}
