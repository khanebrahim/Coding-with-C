#include<stdio.h>
int main(void)
{
int year =2021;
int isLeapyear =0;
if(year %4 ==0){

    if(year %100==0){

        if(year %400 ==0){

            isLeapyear=1;
        }else{
            isLeapyear=0;
        }
    
    
    }else{
        isLeapyear=1;
    }

    } else{
        
        isLeapyear = 0;
    
    }
    if(isLeapyear){
        printf("%d is a leapyear\n",year);
    }
else{
    printf("%d is not a leap year\n",year);
}

return 0;

}


