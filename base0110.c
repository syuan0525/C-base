#include <stdio.h>

int main() {
    void hello();
    void (*func)() = hello;   //&hello //宣告定義func函式，指向一個void()型態的函式
    func();                   //(*func)();
    return 0;
}

void hello() {
    printf("Hello world!\n");  //函式型態不能複製，指標型態可以複製
}
