#include<stdio.h>

int main(){
    printf("Enter any character:");
    char letter;
    scanf("%c",&letter);
    if((letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter <= "Z")){
        switch(letter){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
            printf("%c is a vovel",letter);
            break;
            default:
            printf("%c is a consaldkjnwdkn",letter);
        }
    }else{
        printf("invalid input");
    }
  
    return 0;
}