#include <stdio.h>
int main()
{
    int i;///1973年的C發明者的寫法，1989年ANSI C規範
    for (i=0; i<=3; i++){
        printf("有幾次呢?\n");
    }
    ///新版的C++/C寫法
    for (int i=0; i<3; i++){
        printf("老師推薦的寫法，有幾次呢?\n");
    }///會跑3次
}
