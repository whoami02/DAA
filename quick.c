#include<stdio.h>
int i, n, a[100],j, pivot, temp;
void main()
{
   
   printf("Enter the no of elements: \n");
   scanf("%d",&n);
   printf("Enter the elements: \n");
   for(i=0;i<n;i++)
      scanf("%d",&a[i]);
   quicksort(a,0,n-1);
   printf("Sorted Array: \n"); 
   for(i=0;i<n;i++)
      printf(" %d",a[i]);
      printf("\n");
}
void quicksort(int a[100],int first,int last){
   if(first<last){
      pivot=first;
      i=first;
      j=last;
      while(i<j){
         while(a[i]<=a[pivot]&&i<last)
            i++;
         while(a[j]>a[pivot])
            j--;
         if(i<j){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
         }
      }
      temp=a[pivot];
      a[pivot]=a[j];
      a[j]=temp;
      quicksort(a,first,j-1);
      quicksort(a,j+1,last);
   }
}



