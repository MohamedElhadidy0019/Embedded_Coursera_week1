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
 * @brief A group of statstical functions applied on arrays
 *
 * These functions are made as an assignment fotr the embedded systems course
 *
 * @author Mohamed Khaled Elhadidy
 * @date 8/6/2020
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 
void print_statisitcs(unsigned char*,int);
void print_array(unsigned char*,int);
int find_median(unsigned char*,int);
float find_mean(unsigned char*,int);
int find_maximum(unsigned char*,int);
int find_minimum(unsigned char*,int);
void sort_array(unsigned char*,int);

/**
 * @brief  print_statisitics 
 * 
 * prints all the infoormation about the given array
 *
 * @param  pointer to the first element of the array
 * @param  size of the array
 * 
 * @return  nohting it only prints so it is void
 * 
 * * @brief   print_array
 *  prints all the elements of the arrat
 *
 * @param  pointer to the first element of the array
 * @param  size of the array
 * 
 * @return  nothing it is void
 
 * @brief   find_median 
 *  gets the median of the given array
 *
 * @param  pointer to the first element of the array
 * @param  size of the array
 * 
 * @return the median as an integer type
 

 * @brief  find_mean
 * 
 *finds the mean of the given array
 * @param  pointer to the first element of the array
 * @param  size of the array
 * 
 * @return the mean of the array(but float not integer as it may be a fraction)
 

 * @brief  find_maximum
 * 
 *
 * @param  pointer to the first element of the array
 * @param  size of the array
 * 
 * @return  the maximux value of the array as an int
 

 * @brief  find_minmum
 * 
 *
 * @param  pointer to the first element of the array
 * @param  size of the array
 * 
 * @return  the minimum value in the array as an int
 

 * @brief  sort_array
 * 
 *sorts the array in ascending order
 * @param  pointer to the first element of the array
 * @param  size of the array
 * 
 * @return nothing as it is void
 

 * 
 * 
 
 */


#endif /* __STATS_H__ */
