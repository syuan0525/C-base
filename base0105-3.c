#include <stdio.h>

int main() {
    char strA[] = "test";
    char strB[] ={'t','e','s','t','\0'};

    printf(strA);   //(O)隱性轉型成指標
    printf(strB);   //(O)隱性轉型成指標

    printf("test");

    return 0;
}

