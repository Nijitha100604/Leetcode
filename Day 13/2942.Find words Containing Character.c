#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* findWordsContaining(char** words, int wordsSize, char x, int* returnSize) {
    int *array = (int*)malloc(wordsSize*sizeof(int));
    int count = 0;
    for(int i=0; i<wordsSize; i++)
    {
        for(int j=0; j<strlen(words[i]); j++)
        {
            if(words[i][j]==x){
            array[count++] = i;
            break;
            }
        }
    }
    *returnSize = count;
    return array;
}
