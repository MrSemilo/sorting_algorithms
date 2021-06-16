# Sorting algorithms & Big O
**Project: 0x1B. C - Sorting algorithms & Big O**

## Resources
Read or watch:
> - [**Sorting algorithm**](https://en.wikipedia.org/wiki/Sorting_algorithm)
> - [**Big O notation**](https://stackoverflow.com/questions/487258/what-is-a-plain-english-explanation-of-big-o-notation)
> - [**Sorting algorithms animations**](https://www.toptal.com/developers/sorting-algorithms)
> - [**15 sorting algorithms in 6 minutes**](https://www.youtube.com/watch?v=kPRA0W1kECg&ab_channel=TimoBingmann)
> - [**Programación en C/Algoritmos y Estructuras de Dato**](https://es.wikibooks.org/wiki/Programaci%C3%B3n_en_C/Algoritmos_y_Estructuras_de_Datos)

## Learning Objectives:

- At least four different sorting algorithms
- What is the Big O notation, and how to evaluate the time complexity of an algorithm
- How to select the best sorting algorithm for a given input
- What is a stable sorting algorithm

## Requirements

1. Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
2. A README.md file, at the root of the folder of the project, is mandatory
3. Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
4. You are not allowed to use global variables
5. No more than 5 functions per file
6. Unless specified otherwise, you are not allowed to use the standard library. Any use of functions like printf, puts, … is totally forbidden.
7. The prototypes of all your functions should be included in your header file called sort.h
8. All your header files should be include guarded
9. A list/array does not need to be sorted if its size is less than 2.

## Data Structure and Functions

**print_array:**

```
#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    i = 0;
    while (array && i < size)
    {
        if (i > 0)
            printf(", ");
        printf("%d", array[i]);
        ++i;
    }
    printf("\n");
}
```          
**print_list:**

```
#include <stdio.h>
#include "sort.h"

/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */
void print_list(const listint_t *list)
{
    int i;

    i = 0;
    while (list)
    {
        if (i > 0)
            printf(", ");
        printf("%d", list->n);
        ++i;
        list = list->next;
    }
    printf("\n");
}
```
**struct listint_s:**
```
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;
```
Authors:
* Camilo Valencia Padilla [Email](camilovalenciapadilla@gmail.com),[Twitter](https://twitter.com/CamiloV82394568), [github](https://github.com/samilo-del);
* Adrian Camilo Guerra [Email](adriancamiloguerra@gmail.com),[Twitter](https://twitter.com/Adrian45837501), [github](https://github.com/adrian-blip);
* Jaime Garcia Corcho [Email](jaimegarcia9999c@gmail.com),[Twitter](https://twitter.com/garcia_jaime999), [github](https://github.com/BlackThunder24);
