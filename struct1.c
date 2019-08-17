#include<stdio.h>
 
struct dog
{
    char name[10];
    char breed[10];
    int age;
    char color[10];
};
 
int main()
{
    struct dog my_dog = {"tyke", "Bulldog", 5, "white"};
    struct dog *ptr_dog;
    ptr_dog = &my_dog;
 
    printf("Dog's name: %s\n", ptr_dog->name);
    printf("Dog's breed: %s\n", ptr_dog->breed);
    printf("Dog's age: %d\n", ptr_dog->age);
    printf("Dog's color: %s\n", ptr_dog->color);

    return 0;
}

Output:

nuzhat@nuzhat-HP-ProBook-6550b:~$ gcc struct1.c
nuzhat@nuzhat-HP-ProBook-6550b:~$ ./a.out
Dog's name: tyke
Dog's breed: Bulldog
Dog's age: 5
Dog's color: white

