#include <stdio.h>
void binPacking(int *a, int size, int n)
{
    int binCount = 1, i;
    int s = size;
    for(i = 0; i<n; i++){
        if(s - *(a+i) > 0){
            s -= *(a+i);
            continue;
        }
        else{
            binCount++;
            s = size;
            i--;
        }
    }
    printf("No. of bins required is %d\n",binCount);
}
int main()
{
    int n, size, i;
    printf("Enter the no. of elements\n");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d elements\n", n);
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    printf("Enter the Bin Size\n");
    scanf("%d", &size);
    binPacking(a, size, n);
    return 0;
}
