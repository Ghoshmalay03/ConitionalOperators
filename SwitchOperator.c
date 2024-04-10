//WAP to check the current day using switch operator
#include<stdio.h>
#include<math.h>
int main(){
    int day;
    printf("Enter any number between 1 to 7: ");    //Asks the user to enter any number between 1 to 7
    scanf("%d", &day);

    switch(day){
        case 1 : printf("Today is Monday.");        //1 for Monday
        break;

        case 2 : printf("Today is Tuesday.");       //2 for Tuesday
        break;

        case 3 : printf("Today is Wednesday.");     //3 for Wednesday
        break;

        case 4 : printf("Today is Thursday.");      //4 for Thursday
        break;

        case 5 : printf("Today is Friday.");        //5 for Friday
        break;

        case 6 : printf("Today is Saturday.");      //6 for Saturday
        break;

        case 7 :printf("Today is Sunday.");         //7 for Sunday
        break;

        default : printf("Not a valid day");        //Not valid for other numbers
    }
    return 0;

}
