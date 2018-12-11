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
 * @file stat.h
 * @brief Contains the Function prototypes that do analytics of an array.
 *
 * This file contains the function prototypes that can analyze an unsigned char
 * data items and report analytics on maximum, minimum, mean, and median.
 * There are also prototypes of function that do sorting and printing of array.
 * The respective function definations can be found in stat.c file.
 *
 * @author Hafiz Muhammad Waqas Qammar
 * @date 11-December-2018
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */

/**
 * @brief <Add Brief Description of Function Here>
 *
 * <Add Extended Description Here>
 *
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <Add Return Informaiton here>
 */

/**
 * @brief Find the Mean of unsigned 8-bit Array.
 *
 * This function takes a pointer to an unsigned 8-bit array and the length of
 * the array. It then calcultes its mean and returns a float.
 *
 * @param ptr A pointer to unsigned 8-bit array.
 * @param length An unsigned int type as length of the array.
 *
 * @return The calculated mean of the given array.
 */
float find_mean(unsigned char * ptr, unsigned int length);

/**
 * @brief Sort the Array in Descending Order.
 *
 * This function takes a pointer to an unsigned 8-bit array and the length of
 * the array. It then sort the array from largest to smallest element.
 *
 * @param ptr A pointer to unsigned 8-bit array.
 * @param length An unsigned int type as length of the array.
 *
 * @return NONE
 */
void sort_array(unsigned char * ptr, unsigned int length);

/**
 * @brief Prints the unsigned 8-bit Array on the Console.
 *
 * This function takes a pointer to an unsigned 8-bit array and the length of
 * the array. It then prints the elements of the array on Screen.
 *
 * @param ptr A pointer to unsigned 8-bit array.
 * @param length An unsigned int type as length of the array.
 *
 * @return NONE
 */
void print_array(unsigned char * ptr, unsigned int length);

/**
 * @brief Prints the Statistics of an unsigned 8-bit Array on the Console.
 *
 * This function takes a pointer to an unsigned 8-bit array and the length of
 * the array. It then finds out its Mean, Median, Maximum and Minimum elements
 * and print them on the screen.
 *
 * @param ptr A pointer to unsigned 8-bit array.
 * @param length An unsigned int type as length of the array.
 *
 * @return NONE
 */
void print_statistics(unsigned char * ptr, unsigned int length);

/**
 * @brief Find the Median of unsigned 8-bit Array.
 *
 * This function takes a pointer to an unsigned 8-bit array and the length of
 * the array. It then finds out its Median and returns a float.
 *
 * @param ptr A pointer to unsigned 8-bit array.
 * @param length An unsigned int type as length of the array.
 *
 * @return The Median of the given array.
 */
float find_median(unsigned char * ptr, unsigned int length);

/**
 * @brief Find the Maximum value of unsigned 8-bit Array.
 *
 * This function takes a pointer to an unsigned 8-bit array and the length of
 * the array. It then finds out its Maximum valued element and returns it.
 *
 * @param ptr A pointer to unsigned 8-bit array.
 * @param length An unsigned int type as length of the array.
 *
 * @return The Maximum value of the given array.
 */
unsigned char find_maximum(unsigned char * ptr, unsigned int length);

/**
 * @brief Find the Minimum of unsigned 8-bit Array.
 *
 * This function takes a pointer to an unsigned 8-bit array and the length of
 * the array. It then findsout its Minimum value and returns it.
 *
 * @param ptr A pointer to unsigned 8-bit array.
 * @param length An unsigned int type as length of the array.
 *
 * @return The Minimum value of the given array.
 */
unsigned char find_minimum(unsigned char * ptr, unsigned int length);

#endif /* __STATS_H__ */
