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
 * @file stats.c
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author Daniel Ngo
 * @date March 1, 2021
 *
 */



#include <stdio.h>
#include <stdlib.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void print_array(unsigned char test[]){
	for(int i = 0; i < SIZE; i++){
		printf("%d ",test[i]);
	}
	printf("\n");
}
	

void sort_array(unsigned char test[], int n){
	int temp;
	for (int i = 0; i < n-1; i++){
		for (int j = i + 1 ;j < n; j++){ 
			if(test[j] < test[i]){
				temp = test[j];
				test[j] = test[i];
				test[i] = temp;
			}
		}
	}
	
}

double find_median(unsigned char test[], int n){
	sort_array(test,n);
	if (n%2 == 0)
		return (test[n/2]+test[(n/2)-1])/2;
	else
		return test[n/2];
}

int find_mean(unsigned char test[], int n){
	int total = 0;
	for (int i = 0; i < n; i++){
		total += test[i];
	}
	return total/n;
}

int find_minimum(unsigned char test[], int n) {
	sort_array(test,n);
	return test[0];
}

int find_maximum(unsigned char test[], int n) {
	sort_array(test,n);
	return test[n-1];
}

void print_statistics(unsigned char test[], int n){
	printf("Unsorted: \n");
 	print_array(test);
	sort_array(test, n);
	printf("Sorted: \n");
	print_array(test);
	printf("Median: %f\n", find_median(test,n));
	printf("Mean: %d\n", find_mean(test,n));
	printf("Minimum: %d\n", find_minimum(test,n));
	printf("Maximum: %d\n", find_maximum(test,n));
}

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  print_statistics(test,SIZE);
}
/* Add other Implementation File Code Here */


