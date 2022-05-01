#include <iostream>
#include "Deque.h"
using namespace std;
int main()
{
    Deque<int> s;
    s.pushFront(10);
    s.pushFront(2);
    s.pushFront(12);
    s.pushBack(5);
    s.pushBack(4);
    s.pushBack(8);
    while (!s.empty()) {
        cout << s.popBack() << " ";
    }
}

