#include <stdio.h>

int main() {
    void hello();
    void (*func)() = hello;   //&hello //�ŧi�w�qfunc�禡�A���V�@��void()���A���禡
    func();                   //(*func)();
    return 0;
}

void hello() {
    printf("Hello world!\n");  //�禡���A����ƻs�A���Ы��A�i�H�ƻs
}
