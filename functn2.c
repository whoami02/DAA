#include <stdio.h>

int* larger(int*, int*);

void main()
{
    int a = 15;
    int b = 92;
    int *p;
    p = larger(&a, &b);
    printf("%d is larger\n",*p);
}

int* larger(int *x, int *y)
{
    if(*x > *y)
        return x;
    else
        return y;
}

// Output:
//
// nuzhat@nuzhat-HP-ProBook-6550b:~$ gcc functn2.c
// nuzhat@nuzhat-HP-ProBook-6550b:~$ ./a.out
// 92 is larger
//
