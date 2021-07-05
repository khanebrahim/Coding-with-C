#include<stdio.h>
int main(void)
{
    char ch;
    printf("Enter your character-");
    scanf("%c",&ch);
    if(ch>='A'&& ch <='Z'){
        printf("Lower of %c is %c\n", ch,ch +32);
    }
    else if (ch>='a'&& ch<='z')
    {
        printf("upper of %c is %c\n" ,ch,ch-32);

    }
    else{
        printf("ivalid letter");
    }
}