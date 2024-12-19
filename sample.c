void parse_date(char* date, int* year, int* month, int* day) {
    int slash_position = 0;
    // NULL で初期化
    char buffer[5] = {};
    
    // スラッシュの位置を探す
    while(date[slash_position] != '/') 
        slash_position++;
    
    strncpy(buffer, date, slash_position);
    *year = atoi(buffer);
    
    slash_position++;
    // 1個前のスラッシュの次の文字の位置を覚えておく
    int previous_slash_position = slash_position;
    
    while(date[slash_position] != '/') 
        slash_position++;
    
    strncpy(buffer, date + previous_slash_position, slash_position - previous_slash_position);
    // 終端文字をつける
    buffer[slash_position - previous_slash_position] = '\0';
    *month = atoi(buffer);
    
    slash_position++;
    previous_slash_position = slash_position;
    
    *day = atoi(date + previous_slash_position);
}
