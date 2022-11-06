#include <stdio.h> 

#include <stdlib.h> 


int main_2()

{
    int x, y;
    int nums[6];
    int* arrPtr;


    // Section A - Print the variables 

    puts("***** Section A *****");

    //printf(" Base = %d\n", x);// x has no value at this point in the next line i will give it a value
    x = 5;
    printf(" Base = %d\n", x);

    //printf(" Height = %d\n", y);// y has no value at this point in the next line i will give it a value
    y = 7;
    printf(" Height = %d\n", y);


    printf(" Area = %d\n", x * y);
    


    // Section B - Print the static array "nums". 

    puts("***** Section B *****");

    int i = 0;

    while (i < 6) { // infinte while loop -- missing i++ so i add it.

        //printf("  nums[%d] = %d\n", i, nums[i]);// at this way the nums in the array will be junk.
        nums[i] = i;//add values to the array and then print its contant
        printf("  nums[%d] = %d\n", i, nums[i]);
        i++; //i add it.
    }

   

    // Section C - Print allocated array. 

    puts("***** Section C *****");

    //arrPtr = malloc(sizeof(int) * 10); // The requirement is a size 6 array and we allocate space for 10 And you should always add an explicit casting to the memory allocation operation
    arrPtr = (int*) malloc(sizeof(int)*6);

    if (arrPtr) {

        for (i = 0; i < 6; i++) {
            arrPtr[i] = i * 5;//  giving the array some values as before.
            printf("  array[%d] = %d\n", i, arrPtr[i]);
        }
    }
    else {
        printf("Error Allocating Memory!\n");
        exit(1);
    }
    return 0;

} // the program was missing a }


