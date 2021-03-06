﻿// LEC03_InsertSort.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>
using namespace std;

int* InsertSort(int* seq,int length) {
	for (int key = 1; key < length; key++) {
		int pos = key - 1; // 0~key-1 are already sorted
		while (seq[key] < seq[pos]) {
			int temp = seq[key];
			seq[key] = seq[pos];
			seq[pos] = temp;
			if (key > 1) { pos--; key--; }
		}
	}
	return seq;
}

int main()
{
	int length = 2000;
	int* unsorted = new int[length];
	for (int i = 0; i < length; i++) {
		unsorted[i] = rand() % length + 1;
	}
	cout << "\n Unsorted:";
	for (int i = 0; i < length; i++) {
		cout << unsorted[i] << " ";
	}
	cout << "\n Sorted:";

	int* sorted = InsertSort(unsorted, length);
	for (int i = 0; i < length; i++) {
		cout << sorted[i]<<" ";
	}
	system("pause");
	return 0;
}

