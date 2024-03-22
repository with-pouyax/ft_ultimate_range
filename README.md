# ft_ultimate_range

This repository contains the implementation of `ft_ultimate_range`, a C function designed to dynamically allocate an array and fill it with all the integers between a minimum and maximum value, excluding the maximum itself. This function builds upon basic memory allocation principles in C and is a useful tool for working with ranges of numbers dynamically.

## Function Overview

The `ft_ultimate_range` function allocates memory for an array of integers and initializes it with a sequence of integers from `min` to `max`, excluding `max`. It is an enhanced version of array initialization that not only fills the array but also handles memory allocation internally, providing both the array and its size as output.

### Function Prototype

```c
int ft_ultimate_range(int **range, int min, int max);
