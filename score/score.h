#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <curl/curl.h>
// usually these information are given in a header file:
//  1.Conatant definition (e.g., #define PI 3.1415)
//  2. Data structure definitions
//  3. Fuction prototypes (a.k.a fuction declaration)

#define MAX 30

void input_scores(int[]);
void evaluation(int[], int[]);
void classification(int[], int[]);
void output_results(int[], int[]);