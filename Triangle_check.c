#include<stdio.h>
int main(){
    int x,y,z;
    printf("Enter First Side\n");
    scanf("%d",&x);
    printf("Enter Second Side\n");
    scanf("%d",&y);
    printf("Enter Third Side\n");
    scanf("%d",&z);

    if(x==y && y==z){
        printf("The Triangle is Equilateral.");
    }
    else if(x==y||x==z ||y==z){
        printf("The Triangle is Isosceles.");
    }
    else{
        printf("The Triangle is Scalene.");
    }
    return 0;
}