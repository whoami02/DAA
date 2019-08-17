//Name:- Akhil Humane
//PRN:- 10303320171124510016
//Batch:- 'A'

#include<stdio.h>
int main(){
int a[2][2], b[2][2], c[2][2], i, j;
int P, Q, R, S , T, U, V;
printf("Enter the elements of first 2*2 matrix: \n");
  for(i = 0;i < 2; i++)
      for(j = 0;j < 2; j++)
           scanf("%d", &a[i][j]);
printf("Enter the elements of second 2*2 matrix: \n");
  for(i = 0; i < 2; i++)
      for(j = 0;j < 2; j++)
           scanf("%d", &b[i][j]);
printf("\nThe first matrix is\n");
  for(i = 0; i < 2; i++){
      printf("\n");
      for(j = 0; j < 2; j++)
           printf("%d\t", a[i][j]);
  }
printf("\nThe second matrix is\n");
  for(i = 0;i < 2; i++){
      printf("\n");
      for(j = 0;j < 2; j++)
           printf("%d\t", b[i][j]);
  }
  P= (a[0][0] + a[1][1]) * (b[0][0] + b[1][1]);
  Q= (a[1][0] + a[1][1]) * b[0][0];
  R= a[0][0] * (b[0][1] - b[1][1]);
  S= a[1][1] * (b[1][0] - b[0][0]);
  T= (a[0][0] + a[0][1]) * b[1][1];
  U= (a[1][0] - a[0][0]) * (b[0][0]+b[0][1]);
  V= (a[0][1] - a[1][1]) * (b[1][0]+b[1][1]);

  c[0][0] = P + S- T + U;
  c[0][1] = R + T;
  c[1][0] = Q + S;
  c[1][1] = P - Q + R + U;

printf("\nAfter multiplication using Strassen's algorithm for 2*2 matrix::  \n");
   for(i = 0; i < 2 ; i++){
      printf("\n");
      for(j = 0;j < 2; j++)
           printf("%d\t", c[i][j]);
   }
   return 0;
}

