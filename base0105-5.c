int a[4] = {1, 2, 7, 8};
int b[2] = {3, 4};
int c[2] = {5, 6};

int *p = {a, b, c};

int i, j;

for (i = 0; i < 3; i++) {
    for (j = 0; j < 2; j++) {
        p[i][j] = 0;
    }
}
p[0][2] = 9;
