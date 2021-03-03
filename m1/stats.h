/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.h 
 * @brief Header File for stats.c
 *
 * @author Daniel Ngo
 * @date March 1, 2021
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 
void print_statistics();

void print_array(unsigned char test[]);

double find_median(unsigned char test[], int n);

int find_mean(unsigned char test[], int n);

int find_maximum(unsigned char test[], int n);

int find_minimum(unsigned char test[], int n);

void sort_array(unsigned char test[], int n);

/**
 * @brief <Add Brief Description of Function Here>
 *
 * print_statistics() displays output of all other functions
 * print_array() prints out entire array
 * find_median() calculates median of passed array
 * find_mean() calculates the mean of the passed array
 * find_maximum() & find_minimum() finds the maximum and minimum values within the passed array
 * sort_array() sorts the passed array in ascending order
 * @param unsigned char test[] array to be passed
 * @param int n array size 
 *
 * @return <Add Return Informaiton here>
 */


#endif /* __STATS_H__ */
