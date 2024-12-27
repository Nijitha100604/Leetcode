#include<stdio.h>
#include<stdlib.h>

int countSeniors(char ** details, int detailsSize){
    int count = 0;
    for(int i=0; i<detailsSize; i++)
    {
        int age = (details[i][11])-48;
        age = age*10 +((details[i][12])-48);
        if(age>60)
        count++;
    }
    return count;
}
