//WAP to print the grade of the students as per their scored marks.

#include<stdio.h>
#include<math.h>
int main(){
    int marks;

    printf("The your marks: ");         //Asks the user to enter their marks
    scanf("%d", &marks);

    if(marks>90 && marks<=100){
        printf("The student has been awarded A+ grade.");       //print A+ for marks between 90-100
    }
    else if(marks>80 && marks<=90){
        printf("The student has been awarded A grade.");        //print A for marks between 80-90
    }
    else if(marks>70 && marks<=80){
        printf("The student has been awarded B+ grade.");       //print B+ for marks between 70-80
    }
    else if(marks>60 && marks<=70){
        printf("The student has been awarded B grade.");        //print B for marks between 60-70
    }
    else if(marks>60 && marks<=50){
        printf("The student has been awarded C+ grade.");       //print C+ for marks between 50-60
    }
    else if(marks>50 && marks<+40){
        printf("The student has been awarded C grade.");        //print C for marks between 40-50
    }
    else if(marks>40 && marks<=30){
        printf("The student has been awarded D+ grade.");       //print D+ for marks between 30-40
    }
    else if(marks>30 && marks<=20){
        printf("The student has been awarded E grade.");        //print E for marks between 20-30
    }
    else{
        printf("The student has been awarded F grade.");        //print F for marks between 0-20
    }
    return 0;
}
