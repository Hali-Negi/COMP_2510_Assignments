/*
* Course: COMP 2510
* Assignment: Assignment 1
* Name: Hali Imanpanah
* Student ID: A01424306
* Date: 2025-10-01
* Description: This program asks for lower and upper limits, 
* calculates the sum of squares between them, 
* and repeats until the upper limit is <= lower. 
* Prints "Done" at the end.
*/

 #include <stdio.h>

 int main(void) {
    // variables for the lower and upper integer limits
    int lower, upper;

    printf("Enter lower and upper integer limits: ");
    scanf("%d %d", &lower, &upper);

    // continue as long as upper is greater than lower
    while (upper > lower) {
        // running total of squares
        long long sum = 0;

       // loop through all numbers from lower to upper
        for (int i = lower; i <= upper; i++) {
            sum += (long long)i * i;
        }
           // calculate square of lower and upper bounds
            long long low_sq = (long long)lower * lower;
            long long up_sq = (long long)upper * upper;
        
            // print the result for this range
            printf("The sums of the squares from %lld to %lld is %lld\n", low_sq, up_sq, sum); 
            printf("Enter next set of limits: ");
            scanf("%d %d", &lower, &upper);  
    }
    printf("Done\n");

    return 0;
 }