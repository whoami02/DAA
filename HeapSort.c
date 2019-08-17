//Name:- Akhil Humane
//PRN:- 10303320171124510016
//Batch:- 'A'

//Implementation of Heap Sort

#include <stdio.h> 
int arr[100],n,i,temp,largest,l,r; 
void main() 
{ 
  
    printf("Enter the no. elements::  \n");
    scanf("%d",&n);
    printf("Enter the elements:: \n");
    for(i=0;i<n;i++)
       scanf("%d",&arr[i]);
    heapSort(arr, n); 
       printf("Sorted array is %d \n");
    for (i=0; i<n;i++) 
       printf("%d \t",arr[i]); 
  
} 
void heapify(int arr[], int n, int i) 
{ 
     largest = i; 
     l = 2*i + 1; 
     r = 2*i + 2; 
    if (l < n && arr[l] > arr[largest]) 
        largest = l; 
    if (r < n && arr[r] > arr[largest]) 
        largest = r; 
    if (largest != i) 
    { 
       temp=arr[i];
       arr[i]= arr[largest];
       arr[largest]= temp;
       heapify(arr, n, largest); 
    } 
}  
void heapSort(int arr[], int n) 
{ 
    for ( i = n / 2 - 1; i >= 0; i--) 
        heapify(arr, n, i);  
    for ( i=n-1; i>=0; i--) 
    { 
        temp=arr[0];
        arr[0]=arr[i]; 
        arr[i]=temp; 
        heapify(arr, i, 0); 
    } 
} 

