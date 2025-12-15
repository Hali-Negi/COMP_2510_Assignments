/*
* Course: COMP 2510
* Assignment: Assignment 1
* Name: Hali Imanpanah
* Student ID: A01424306
* Date: 2025-10-01
* Description: This program initializes a source array of doubles 
* and copies its contents into three target arrays. 
* The first copy uses array indexing, the second uses pointer 
* arithmetic, and the third uses start/end pointers. 
 */

 #include <stdio.h>

 // Function prototypes
 void copy_arr(double target[], const double sourcell[], int n);
 void copy_ptr(double *target, const double *sourcell, int n);
 void copy_ptrs(double *target, const double *start, const double *end);
 void print_arr(const char *name, const double a[], int n);


 
 int main(void) {
    // Initialize source array with 5 values
    double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[5];
    double target2[5];
    double target3[5];

    // Copy using three different methods
    copy_arr(target1, source, 5);
    copy_ptr(target2, source, 5);
    copy_ptrs(target3, source, source + 5);

    // Print results to check correctness
    print_arr("source ", source, 5);
    print_arr("target1 ", target1, 5);
    print_arr("target2 ", target2, 5);
    print_arr("target3 ", target3, 5);

    return 0;
}

// Copy array using indexing
void copy_arr(double target[], const double source[], int n) {
    for (int i = 0; i < n; i++) {
        target[i] = source[i];
    }
}

// Copy array using pointer arithmetic
void copy_ptr(double *target, const double *source, int n) {
    while (n--) {
        *target++ = *source++;
    }
}
 
// Copy array using start and end pointers
void copy_ptrs(double *target, const double *start, const double *end) {
    while (start < end) {
        *target++ = *start++;
    }
}

// Print array with label
 void print_arr(const char *name, const double a[], int n) {
    printf("%s: ", name);
    for (int i = 0; i < n; i++) {
        printf("%.1f%s", a[i], (i < n - 1 ? " " : "\n"));
    }
}


 