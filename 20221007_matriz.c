#include<stdio.h>
int main() {
    int l, c, i, j;
    scanf("%d %d", &l, &c);
    int m[l][c];
    for (i = 0; i < l; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &m[i][j]);
        }
    }
    for (i = 0; i < l; i++) {
        for (j = 0; j < c; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    return 0;
}
