#include<stdio.h>
int main(){
    int year;
    printf("Enter the Year\n");
    scanf("%d",&year);
    if(year%4==0 & year%100!=0 || year%400==0){
        printf("%d is Leap Year",year);
    }
    else{
        printf("%d is Not a Leap Year",year);
    }
    return 0;
}