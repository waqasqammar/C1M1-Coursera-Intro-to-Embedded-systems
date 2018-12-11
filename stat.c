/******************************************************************************
 * Copyright (C) 2018 by Waqas Qammar
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are
 * permitted to modify this and use it to learn about the field of embedded
 * software. Waqas Qammar is not liable for any misuse of this material.
 *
 *****************************************************************************/
/**
 * @file <stat.c>
 * @brief Contains the Implementation of Statistical functions on Array.
 *
 * This file contains the functions that can analyze an array of unsigned char
 * data items and reprot analytics on the maximum, minimum, mean, and median of
 * the array. In addition, a function also do sorting of the array from large
 * to small. All the respective function prototypes can be found in stat.h file.
 *
 * @author Hafiz Muhammad Waqas Qammar
 * @date 11-December-2018
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  print_array(test, SIZE);
  print_statistics(test, SIZE);
  sort_array(test, SIZE);
  printf("Sorted ");
  print_array(test, SIZE);

}

/* Add other Implementation File Code Here */

/* Find the Mean of unsigned 8-bit Array. */
float find_mean(unsigned char * ptr, unsigned int length){

  float mean = 0;
  unsigned int  sum = 0;
  for(unsigned char idx = 0; idx < length; idx++) {

     // sum += *((unsigned char * )(ptr + idx));
     sum += ptr[idx];
   }

   mean = sum / length;

   return mean;
}

/* Sort the Array in Descending Order */
void sort_array(unsigned char * ptr, unsigned int length) {
  unsigned char i, j, temp;
  unsigned char swapped = 0;
  for (i = 0; i < length - 1; i++) {
    swapped = 0;
    for (j = 0; j < length - i - 1; j++) {
      if (ptr[j] < ptr[j + 1]) {
        temp = ptr[j];
        ptr[j] = ptr[j + 1];
        ptr[j + 1] = temp;
        swapped = 1;
      }
    }
     // IF no two elements were swapped by inner loop, then break
    if (swapped == 0)
      break;
  }
}

/* Prints the unsigned 8-bit Array on the Console. */
void print_array(unsigned char * ptr, unsigned int length) {
  printf("Array : \n");
  for (unsigned char i = 0; i < length; i++)
    printf("%d ", ptr[i]);
  printf("\n");
}

/* Prints the Statistics of an unsigned 8-bit Array on the Console. */
void print_statistics(unsigned char * ptr, unsigned int length) {

  printf("Mean : %.4f \n", find_mean(ptr, length));
  printf("Median : %.4f \n", find_median(ptr, length));
  printf("Maximum : %u \n", find_maximum(ptr, length));
  printf("Minimum : %u \n", find_minimum(ptr, length));

}

/*Find the Median of unsigned 8-bit Array. */
float find_median(unsigned char * ptr, unsigned int length) {

  // First we sort the array
  sort_array(ptr, length);

  // check for even case
  if (length % 2 != 0)
    return (float) ptr[length / 2];

  return (float) (ptr[(length - 1) / 2] + ptr[length / 2]) / 2.0;
}

/* Find the Maximum value of unsigned 8-bit Array. */
unsigned char find_maximum(unsigned char * ptr, unsigned int length) {
  // First we sort the array
  sort_array(ptr, length);

  return ptr[0];
}

/* Find the Minimum of unsigned 8-bit Array. */
unsigned char find_minimum(unsigned char * ptr, unsigned int length) {
  // First we sort the array
  sort_array(ptr, length);

  return ptr[length - 1];
}
