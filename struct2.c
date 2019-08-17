#include <stdio.h>
struct person
{
   int age;
   float weight;
};

int main()
{
    struct person *personPtr, person1;
    personPtr = &person1;   

    printf("Enter age:");
    scanf("%d", &personPtr->age);

    printf("Enter weight:");
    scanf("%f", &personPtr->weight);

    printf("Displaying:\n");
    printf("Age: %d\n", personPtr->age);
    printf("weight: %f", personPtr->weight);

    return 0;
}

Output:

nuzhat@nuzhat-HP-ProBook-6550b:~$ gcc struct2.c
nuzhat@nuzhat-HP-ProBook-6550b:~$ ./a.out
Enter age:18
Enter weight:43
Displaying:
Age: 18
weight: 43.000000

