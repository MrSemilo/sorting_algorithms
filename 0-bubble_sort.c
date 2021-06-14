#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

void bubble_sort(int *array, size_t size){

    size_t i,j; /**Variables contadoras del ciclo.*/
    size_t temp=0;

    for (i=1;i<size;i++)
    {
        for (j=0; j < size ;j++) /** for(j=0; j < Nelementos-i; j++) es menor y no menor igual*/
        {
            if (array[j] > array[j+1])/**Condicion mayor-menor*/
            {
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
}
