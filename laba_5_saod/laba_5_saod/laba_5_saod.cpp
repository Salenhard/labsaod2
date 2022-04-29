#include <iostream>
#include "Header.h"

using namespace std;
int main()
{
    int n;
    cin >> n;
    n++;
    int* x = new int[n];
    dynamic::algoritm(x,n);
    delete[]x;
}

