#include<stdio.h>
int main(){
    int x,y;
    printf("Enter X and Y coordinate\n");
    scanf("%d %d",&x,&y);

    if(x>0 && y>0){
        printf("Lies in (I Quadrant)");
    }
    else if(x<0 && y>0){
        printf("Lies in (II Quadrant)");
    }
    else if(x<0 && y<0){
        printf("Lies in (III Quadrant)");
    }
    else if(x>0 && y<0){
        printf("Lies in (IV Quadrant)");
    }
    else if(x==0 && y==0){
        printf("Lies at Origin");
    }
    return 0;
}