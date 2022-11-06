#include <stdio.h> 
#include <stdlib.h> 
#pragma warning (disable:4996)


int main2()

{

    int x = 2, y = 5; // you need to initiallize the variables before using them

    int nums[6];

    int* arrPtr;

    for (int j = 0; j < 6; j++) // loop that gives the array values
    {
        printf("Please enter a number for index %d: ", j + 1);
        scanf("%d", &nums[j]);
    }

    // Section A - Print the variables 

    puts("***** Section A *****");

    printf(" Base = %d\n", x);

    printf(" Height = %d\n", y);

    printf(" Area = %d\n", x * y);



    // Section B - Print the static array "nums". 

    puts("***** Section B *****");

    int i = 0;

    while (i < 6) {

        printf("  nums[%d] = %d\n", i, nums[i]);
        i++; //you need to increase the i in order to print all cells and finish the while loop
    }



    // Section C - Print allocated array. 

    puts("***** Section C *****"); // ; was missing at the end

    arrPtr = malloc(sizeof(int) * 10);

   
    if (arrPtr) {
        for (int j = 0; j < 10; j++) // initiallizing array
        {
            printf("Please enter a number for index %d: ", j + 1);
            scanf("%d", &arrPtr[j]);
        }
        for (i = 0; i < 10; i++) { //the size of the array is 10 so the for should be 10 times

            printf("  array[%d] = %d\n", i, arrPtr[i]);

        }

    }

    else {

        printf("Error Allocating Memory!\n");

        exit(1);

    }

    return 0;
}