#include<stdio.h>
#define N  10

main ()
{
    int v [N] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int x = 1;
    while (x < N) {
        v [x]= 0;
        x++;
        x = x * x;
    }
    for (x = N - 1; x >= 0; x--)
        if (v[x]== 0)
        v[x] = v [x-1] + v[x+1];
    for (x = N-1; x >= 0; x--)
        printf("%d , ", v[x]);

}
