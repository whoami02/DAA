#include<stdio.h>
#include<malloc.h>

struct emp {
   int eid;
   char name[10];
}*ptr;

int main() {
   int i;

   printf("Enter the Employee Details : ");
   ptr = (struct emp *) malloc(sizeof(struct emp));

   printf("\nEnter the Employee ID : ");
   scanf("%d", &ptr->eid);
   printf("\nEnter the Employee Name : ");
   scanf("%s", ptr->name);

   printf("\nEmployee Details are : ");
   printf("\nRoll Number : %d", ptr->eid);
   printf("\nEmployee Name : %s", ptr->name);

   return (0);
}

// Output:
//
// nuzhat@nuzhat-HP-ProBook-6550b:~$ gcc arrow1.c
// nuzhat@nuzhat-HP-ProBook-6550b:~$ ./a.out
// Enter the Employee Details :
// Enter the Employee ID : 10041
//
// Enter the Employee Name : Nuzhat
//
// Employee Details are :
// Roll Number : 10041
// Employee Name : Nuzhat
