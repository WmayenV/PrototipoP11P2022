
#include<stdio.h>
#define N  10

main ()
{
    int v [N] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100}; //* datos que se utilizaran de 10 en 10*//
    int x = 1; //* se define x como 1*//
    while (x < N) { //* si x es menor que 10
        v [x]= 0;
        x++; //* incremento*//
        x = x * x; //* x es igual a 1 *1 *//
    }
    for (x = N - 1; x >= 0; x--) //* para x igual n -1, donde x > o igual a cero x va en decremento *//
        if (v[x]== 0)//* si v y x con un operador relacional igua a 0 *//
        v[x] = v [x-1] + v[x+1]; // vx = v por x-1 mas v por x+1 *//
    for (x = N-1; x >= 0; x--) //* para x igual a n-1, donde x es mayor que 0, x en decremento *//
        printf("%d , ", v[x]); //* mostrara los valores de N en decremento en 10 en 10*//

}
