#include<stdio.h>
int main(){
    int x,y,z;
    printf("Enter the first number\n");
    scanf("%d",&x);
    printf("Enter the Second number\n");
    scanf("%d",&y);
    printf("Enter the Third number\n");
    scanf("%d",&z);
    if(x>y & x>z){
        printf("%d is greater",x);
    }
    else if(y>x & y>z){
       printf("%d is greater",y); 
    }
    else if(z>x & z>y){
        printf("%d is greater",z);
    }
    else{
        printf("%d %d %d is all equal",x,y,z);
    }
    return 0;
}