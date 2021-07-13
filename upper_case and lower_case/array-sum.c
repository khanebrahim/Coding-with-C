#include<stdio.h>
int main()
{
    int scores[5];
    scores[0]=45;
    scores[1]=55;
    scores[2]=75;
    scores[3]=84;
    scores[4]=96;

    // printf("%d",scores[1]);
    int sum= 0,i;

    for (i=0;i<=5; i++){
        sum+=scores[i];

       
    }
     printf("%d\n",sum);
     // average score players
     printf("Average score=%d\n",sum/5);
     // find hihgest score
     int max =scores[0];
     for (i=0;i<5;i++){
         if(scores[i]>max){
             max=scores[i];

         }
     }
     printf("Max=%d\n",max);
     return 0;



    return 0;
}