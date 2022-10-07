#include "jollyjumper.h"
#include <stdbool.h>
#include <malloc.h>
#include <stdlib.h>
#include <stdio.h>


int isJollyJumber(const int seq[], int size) //Function that computes jolly jumpers: Int size: Size of array
{
    printf("\n%d\n", size - 1 ); //prints the differences in the array

    bool diffs_found[size-1]; //Boolean to check if there are more that one difference with same value

    for (int i = 0; i < size; i++) //function to check for false instead of true
    {
        diffs_found[i] = false;
    }
    diffs_found[0] = true;
    for (int  i = 1; i<size; i++ )
    { 
        int diff = abs(seq[i]-seq[i+1]); //function that prints the difference between the current value and the former value. 
        printf("%d", diff); 
        if (diff >= size || diff == 0) //if the difference between two values are bigger than the array itself, its not a jolly jumper
            return 0;

    if (diffs_found[diff - 1] == false) //if the difference values repeats itself 
    {
        diffs_found[diff - 1] = true;
    }
    }

    for (int i = 0; i<size; i++){
        if (diffs_found[i] == false){
            return 0;
        }
            
    }
//its easier to check for the jolly jumper is false, else true
        return 1;
}

