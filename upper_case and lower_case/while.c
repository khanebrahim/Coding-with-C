#include<stdio.h>
int main()
{
    int a;
    int b;
    char ch='c';
    while(ch !='q'){
        printf("Enter two number:");
        scanf("%d %d",&a,&b);
        printf("Result=%d\n",a+b);
        printf("type c to run again. type q to quit:");
        scanf(" %c" ,&ch);
    }
    return 0;
}