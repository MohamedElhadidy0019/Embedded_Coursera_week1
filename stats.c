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
 * 
 * @file Stats.c
 * @brief 
 * just testing the functions
 *
 * @author Mohamed Khaled Elhadidy
 * @date 6/8/2020
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

    unsigned char test[SIZE] = { 34, 201 , 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
  
  print_statisitcs(test,SIZE);
  sort_array(test, SIZE);
  print_array(test, SIZE);
  return;

}

//Implemantation of the functions in the .h file
void print_statisitcs(unsigned char* arr,int size)
{
  printf("minimum=%d\nmaximum=%d\nmean=%f\nmedian=%d\n",find_minimum(arr,size),find_maximum(arr,size),find_mean(arr,size),find_median(arr,size));
}
void print_array(unsigned char* arr,int size)
{
  printf("array= ");
  for(int i=0;i<size;i++)
  {
    printf("%d ",arr[i]);
  }
  printf("\n");
}
int find_median(unsigned char* arr,int size)
{
  if (size%2==0)
  {
    return arr[(size/2)-1];
  }
  return arr[(size/2)];
}
float find_mean(unsigned char* arr,int size)
{
  int sum=0;
  for(int i=0;i<size;i++)
  {
    sum+=arr[i];
  }
  return (sum/(float)size);
}
int find_maximum(unsigned char* arr,int size)
{
  int max=arr[0];
  for(int i=1;i<size;i++)
  {
    if(arr[i]>max)
    {
      max=arr[i];
    }
  }
  return max;
}
int find_minimum(unsigned char* arr,int size)
{
  int min=arr[0];
  for(int i=1;i<size;i++)
  {
    if(arr[i]<min)
    {
      min=arr[i];
    }
  }
  return min;
}
void sort_array(unsigned char* arr,int size)
{
  for(int i=0;i<size;i++)
  {
    for(int j=i;j<size;j++)
    {
      if(arr[i]>arr[j])
      {
          //The swap process
        unsigned char temp = arr[i]; //temp to save in it the arr[i]
        arr[i]=arr[j];
        arr[j] = temp;
      }
    }
  }
}
