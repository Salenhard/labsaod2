#pragma once
#include <iostream>
#include "inv.h"

	void show(double** a) {
		for (int i = 0; i < 5; i++)
		{
			for (int k = 0; k < 5; k++)
			{
				std::cout << a[i][k] << " ";
			}
			std::cout << std::endl;
		}
	}

	double** E(int n) {
		double** e = new double*[n];
		for (int i = 0; i < n; i++)
			e[i] = new double[n];

		for (int i = 0; i < n; i++) {
			for (int k = 0; k < n; k++) {
				if (i == k)
					e[i][k] = 1;
				else
					e[i][k] = 0;
			}
		}
		return e;
	}

	double** mNull(int n) {
		double** e = new double* [n];
		for (int i = 0; i < n; i++)
			e[i] = new double[n];

		for (int i = 0; i < n; i++) {
			for (int k = 0; k < n; k++) {
				e[i][k] = 0;
			}
		}
		return e;
	}


	double** mMull(double** a, double** b) {
		double** c = new double* [5];
		for (int i = 0; i < 5; i++)
		{
			c[i] = new double[5];
			for (int j = 0; j < 5; j++)
			{
				c[i][j] = 0;
				for (int k = 0; k < 5; k++)
					c[i][j] += a[i][k] * b[k][j];
			}
		}
		return c;
	}