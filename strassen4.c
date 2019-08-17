#include<stdio.h>
int i,j,k,o,p, a[2][2],b[2][2],c[2][2];

int main()
{int i=0,j=0,x[4][4],y[4][4],z[4][4];
printf("Enter the 16 elements of first 4*4 matrix row wise:: ");
for(i=0;i<4;i++)
{for(j=0;j<4;j++)
scanf("%d",&x[i][j]);
}	
printf("Enter the 16 elements of second 4*4 matrix row wise:: ");
for(i=0;i<4;i++)
{for(j=0;j<4;j++)
scanf("%d",&y[i][j]);
}	

//*****************************************
for(k=1;k<=4;k++)
{
 if(k==1)
 o=0;p=0; 
 if(k==2)
 o=0;p=2; 
 if(k==3)
 o=2;p=0; 
 if(k==4)
 o=2;p=2; 

for(i=0;i<2;i++)
{
   for(j=0;j<2;j++)
{
      a[i][j]=x[i+o][j+p];
	  b[i][j]=y[i+o][j+p];	
}
}

strassen_two(a,b);

for(i=0;i<2;i++)
{
   for(j=0;j<2;j++)
{     
      z[i+o][j+p]=c[i][j];
}
}
}

//*****************************************
int strassen_two(int a[][2],int b[][2],int c[][2]);
{
  int c[2][2]={0,0,0,0};
  int m1, m2, m3, m4 , m5, m6, m7;

  m1= (a[0][0] + a[1][1]) * (b[0][0] + b[1][1]);
  m2= (a[1][0] + a[1][1]) * b[0][0];
  m3= a[0][0] * (b[0][1] - b[1][1]);
  m4= a[1][1] * (b[1][0] - b[0][0]);
  m5= (a[0][0] + a[0][1]) * b[1][1];
  m6= (a[1][0] - a[0][0]) * (b[0][0]+b[0][1]);
  m7= (a[0][1] - a[1][1]) * (b[1][0]+b[1][1]);

  c[0][0] = m1 + m4- m5 + m7;
  c[0][1] = m3 + m5;
  c[1][0] = m2 + m4;
  c[1][1] = m1 - m2 + m3 + m6;
}
return 0;



}
