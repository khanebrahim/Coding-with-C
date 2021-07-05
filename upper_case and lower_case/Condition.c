#include<stdio.h>
int main(void)
{
    char ch;
    printf("Enter your character-");
    scanf("%c",&ch);
    if(ch>=48 && ch<=57){
        printf("%c is a number:\n",ch);
    }
    else if (ch>=65 && ch<=90){
        printf("%c is a Uppercase letter\n",ch);
    }
    else if(ch>=97 && ch<=122){
        printf("%c is lowercase letter\n",ch);
    }
    else{
        printf("special character\n");
    }
    return 0 ;
}