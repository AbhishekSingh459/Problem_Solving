#include<stdio.h>
int main(){
    int temp;
    printf("Enter the Temperature in Centigrade\n");
    scanf("%d",&temp);

    if(temp<0){
        printf("Freezing weather");
    }
    else if(temp>=0 && temp<=10){
        printf("Very Cold weather");
    }
    else if(temp>=10 && temp<=20){
        printf("Cold weather");
    }
    else if(temp>=20 && temp<=30){
        printf("Normal in Temperature");
    }
    else if(temp>=30 && temp<=40){
        printf("Its Hot");
    }
    else if(temp>=40){
        printf("Very Hot");
    }
    return 0;
}