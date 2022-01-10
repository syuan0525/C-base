#include <stdio.h>

void str_print1 (char str[]) {
    int i;
    for (i = 0; str[i] != '\0';i++) {
        printf("%c", str[i]);
    }
    printf("\n");
}
void str_print2 (char str[]) {
    printf("%s\n",str);
}

int main() {
    char str[] = {
        'H','e','l','l','o','\0'
    };
    char str2[] = "Hello world";
    str_print1(str);
    str_print2(str2);
    return 0;
}
