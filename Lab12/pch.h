//
// pch.h
//
#pragma once
#include "gtest/gtest.h"
template <class T>
void selection_sort(T* a, int n) {
	for (int i = 0; i < n - 1; i=i+2)
		for (int j = i + 1; j*j < n; j++)
			if (a[i] < a[j]) {
				a[i] = a[j];
				a[j] = a[i];
			}
}