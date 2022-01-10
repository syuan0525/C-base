#include <stdio.h>
#include <stdlib.h>

int main() {
    int* numbers = 0;     // 0 ��ܪū���(NULL)
    int length = 0;
    while (1) {
        int input;
        scanf("%d",&input);
        if (input == 0) break;
        //1. int* larger = malloc(sizeof(int) * (length + 1));  //���ͤ@�Ӥj�@�檺�s�}�C
        //2. for (int i = 0; i < length; i++) larger[i] = numbers[i];  //�ƻs�°}�C��s�}�C
        //3. free(numbers);  //�����°}�C�O����Ŷ�
        //4. numbers = larger;
        numbers = realloc(numbers, sizeof(int) * (length + 1));
        numbers[length] = input;
        length++;
    }

    printf("Number: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    return 0;
}
