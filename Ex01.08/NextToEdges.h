#pragma once
#include <climits>

int g_smallest = INT_MAX;

int g_next_smallest;

int g_next_largest;

int g_largest = INT_MIN;

int receiveInput();

void continuousInput();

void compare(int number);
