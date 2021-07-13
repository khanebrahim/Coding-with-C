#include<stdio.h>
int main(){
    int scores[]= {78,87,56,23,98,67,43,37};
    int length = sizeof(scores)/sizeof(scores[0]);
    // printf("size of score array=%d\n",(unsigned)sizeof(scores));
    // printf("size of element score=%d\n",(unsigned)sizeof(scores[0]));
    printf("size of scores array length:%d\n",length);

    return 0;

}