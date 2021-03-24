//
// Created by SystemLight on 2021/3/24.
//

#ifndef UNTITLED_KIVA_H
#define UNTITLED_KIVA_H

#include <locale.h>
#include <stdio.h>

#define KIVA_VERSION "1.0.0"

#ifdef linux
#define chinese setlocale(LC_ALL, "zh_CN.UTF-8")
#else
#define chinese setlocale(LC_ALL, "chs")
#endif

#define array_len(arr, type) sizeof(arr) / sizeof(type)

// Print Chinese string
void cprintf(wchar_t *s);

// Simple string printing function
void print(char *s);

void print_int(int s);

void print_int_array(int arr[], int size);

void swap(int arr[], int l, int r);

void quick_sort(int arr[], int low, int high);

#endif //UNTITLED_KIVA_H
