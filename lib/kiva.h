//
// Created by SystemLight on 2021/3/24.
//

#ifndef UNTITLED_KIVA_H
#define UNTITLED_KIVA_H

#include <locale.h>
#include <stdio.h>
#include <time.h>

#if defined(_WIN32)

#include <sys/timeb.h>

#elif defined(__unix__)

#include <sys/time.h>

#endif

#define KIVA_VERSION "1.0.0"

#ifdef linux
#define encoding_utf8 setlocale(LC_ALL, "zh_CN.UTF-8")
#else
#define encoding_utf8 setlocale(LC_ALL, "chs")
#endif

#define String char*

#define array_len(arr, type) sizeof(arr) / sizeof(type)

// Print Chinese string
void cprintf(wchar_t *s);

// Simple string printing function
void print(char *s);

void print_int(int s);

void print_float(float s);

void print_int_array(int arr[], int size);

void swap(int arr[], int l, int r);

void quick_sort(int arr[], int low, int high);

typedef long long long_time_t;

long_time_t time_in_millisecond(void);

#endif //UNTITLED_KIVA_H
