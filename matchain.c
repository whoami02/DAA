#include <stdio.h>
#include <limits.h>

int MatrixChainOrder(int p[], int i, int j)
{
    if(i == j)
        return 0;
    int k, count = 0;
    for(k=i; k<j; k++)
        count = MatrixChainOrder(p, i, k) + MatrixChainOrder(p, k+1, j) + p[i-1]*p[j]*p[k];
    return count;
}

int main()
{
    int n;
    int a[5] = {1,2,3,4,5};
    n = sizeof(a)/ sizeof(a[0]);
    printf("The minimum no. of multiplications required are: %d", MatrixChainOrder(a, 1, n-1));
    return 0;
}
