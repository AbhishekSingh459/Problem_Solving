#include<stdio.h>
int main(){
    char alphabet;
    printf("Enter the Alphabet\n");
    scanf("%c",&alphabet);

    if(alphabet=='a'|| alphabet=='A'){
        printf("%c is Vowel" ,alphabet);
    }
    else if(alphabet=='e'|| alphabet=='E'){
        printf("%c is Vowel" ,alphabet);
    }
    else if(alphabet=='i'|| alphabet=='I'){
        printf("%c is Vowel" ,alphabet);
    }
    else if(alphabet=='o'|| alphabet=='O'){
        printf("%c is Vowel" ,alphabet);
    }
    else if(alphabet=='u'|| alphabet=='U'){
        printf("%c is Vowel" ,alphabet);
    }
    else{
        printf("%c is Constant",alphabet);
    }

    return 0;
}