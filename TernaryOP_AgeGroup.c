//WAP to check the age group
#include<stdio.h>
#include<math.h>
int main(){
    int age;

    printf("Kindly enter your age: ");      //Asks the user to enter their age
    scanf("%d", &age);

    age >= 18 ? printf("You are an adult. \n") : printf("You are a minor. \n");     //Ternary conditional operator
    printf("Thank you");

    return 0;
}
