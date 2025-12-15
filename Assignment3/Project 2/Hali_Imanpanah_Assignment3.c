/*
 * Course: COMP 2510
 * Assignment: Assignment 3 
 * Name: Hali Imanpanah
 * Student ID: A01424306
 * Date: 2025-11-17
 * Description:
 * This program demonstrates a generic swap function in C using void pointers
 * and memcpy. The user chooses a data type (integer, float, or string) and 
 * enters two values of that type. The program displays the values before and 
 * after swapping them using the generic swap function.
 */

 #include <stdio.h>
 #include <string.h>
 
 /* Generic swap function using void pointers and memcpy */
 void swap(void *data1ptr, void *data2ptr, size_t nbytes) {
     char temp[nbytes];
     memcpy(temp,     data1ptr, nbytes);
     memcpy(data1ptr, data2ptr, nbytes);
     memcpy(data2ptr, temp,     nbytes);
 }
 
 int main(void) {
     int choice;
 
     printf("Choose data type:\n");
     printf("1. Integer\n");
     printf("2. Float\n");
     printf("3. String\n");
     printf("Enter your choice (1–3): ");
     scanf("%d", &choice);
 
     if (choice == 1) {
         /* INTEGER CASE */
         int a, b;
 
         printf("Enter first integer: ");
         scanf("%d", &a);
         printf("Enter second integer: ");
         scanf("%d", &b);
 
         printf("\nBefore swap: a = %d, b = %d\n", a, b);
 
         swap(&a, &b, sizeof(a));
 
         printf("After swap:  a = %d, b = %d\n", a, b);
 
     } else if (choice == 2) {
         /* FLOAT CASE */
         float a, b;
 
         printf("Enter first float: ");
         scanf("%f", &a);
         printf("Enter second float: ");
         scanf("%f", &b);
 
         printf("\nBefore swap: a = %.2f, b = %.2f\n", a, b);
 
         swap(&a, &b, sizeof(a));
 
         printf("After swap:  a = %.2f, b = %.2f\n", a, b);
 
     } else if (choice == 3) {
         /* STRING CASE */
         char s1[100];
         char s2[100];
 
         printf("Enter first string: ");
         scanf("%99s", s1);
         printf("Enter second string: ");
         scanf("%99s", s2);
 
         printf("\nBefore swap: s1 = %s, s2 = %s\n", s1, s2);
 
         /* Swap full 100-byte buffers */
         swap(s1, s2, sizeof(s1));
 
         printf("After swap:  s1 = %s, s2 = %s\n", s1, s2);
 
     } else {
         printf("Invalid choice.\n");
     }
 
     return 0;
 }
 