#include <stdio.h>

int main()
{
    char input, output;
    printf("Please enter word :");
    scanf("%c",&input);
    output = input + ('a'-'A');
    printf("%c\n",output);

    return 0 ;
}
