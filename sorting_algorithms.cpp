/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: <your class name here>
 *-----------------------------------------------------------------------------
 * Exercise Number: #exercise_number#
 * File:			sorting_algorithms.cpp
 * Author(s):		<your name>
 * Due Date:		#due#
 *-----------------------------------------------------------------------------
 * Description:
 * <your description here>
 *-----------------------------------------------------------------------------
*/

#include "sorting_algorithms.h"
#include <time.h>
#include <stdlib.h>
#include "general.h"

void init_random(int *array, unsigned long length)
{
	srandom(time(NULL));
	for (unsigned long i = 0; i < length; i++)
		array[i] = random();
}

void bubble_sort(int *array, unsigned long length){
     for (unsigned long i = 1; i < length ; i++)
     {
        for (unsigned long j = 0; j < length - i ; j++)
        {
            if (array[j] > array[j + 1])
            {
                int tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
            }
        }
     }
}

void insertion_sort(int *array, unsigned long length){
  unsigned long j;
  int key;
  for (unsigned long i = 1; i < length; i++) {
    key = array[i];
    j = i - 1;
    while (j >= 0 && array[j] > key) {
     array[j + 1] = array[j];
     j = j - 1;
    }
    array[j + 1] = key;
  }
}
