#ifndef __SORT_H__
#define __SORT_H__

void insert_sort(int *input, int num);
void insert_sort2(int *input, int num, int compare(int num1, int num2));

void shell_sort(int *input, int num);
void shell_sort2(int *input, int num, int (*compare)(int num1, int num2));

void heap_sort(int *input, int num);

void merge_sort(int *input, int num);

void quick_sort(int *input, int num);
void swap(int *, int*);
#endif
