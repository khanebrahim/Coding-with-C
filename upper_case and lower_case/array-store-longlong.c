#include<stdio.h>
int main()
{
    long long scores[5];
    scores[0]=45;
    scores[1]=55;
    scores[2]=75;
    scores[3]=84;
    scores[4]=96;
    printf("%u\n",(unsigned int) & scores);
    printf("%u\n",(unsigned int) & scores[0]);
    printf("%u\n",(unsigned int) & scores[1]);
    printf("%u\n",(unsigned int) & scores[2]);
    printf("%u\n",(unsigned int) & scores[3]);
    printf("%u\n",(unsigned int) & scores[4]);

    return 0;
}