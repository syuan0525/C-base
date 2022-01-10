int main (){

    int a = 2, b = 2, aa = 0, bb = 0;
    aa = (a++) + (++a);
    bb = (++b) + (b++);
    printf("%d\n",aa);
    printf("%d\n",bb);
    return 0;
}
