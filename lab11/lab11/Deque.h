#pragma once

#include <iostream>;
using namespace std;

const int MAXSIZE = 50;
template <typename T> class Deque
{
private:

	int head;
	int tail;
	T* list;

public:

	Deque() {
		this->list = new T[MAXSIZE];
		this->head = 0;
		this->tail = 0;
	}

	bool empty() const{
		return this->head == this->tail;
	}

	void pushBack(const T& item) {
		if (head == (tail + 1) % MAXSIZE) {
			cerr << "Deque is full!";
		}
		else {
			this->list[this->tail] = item;
			this->tail = (this->tail + 1) % MAXSIZE;
		}
	}

	void pushFront(const T& item) {
		if (this->head == (this->tail + 1) % MAXSIZE) {
			cerr << "Deque is full!";
		}
		else {
			this->head = (this->head - 1 + MAXSIZE) % MAXSIZE;
			this->list[this->head] = item;
		}
	}

	T popBack() {
		if (!empty()) {
			this->tail = (this->tail - 1 + MAXSIZE) % MAXSIZE;
			return this->list[this->tail];
		}
		else
			cerr << "Deque if Full";
	}
	 
	T popFront() {
		if (!empty()) {
			T ret = this->list[this->head];
			head = (head - 1 + MAXSIZE) % MAXSIZE;
			return ret;
		}
		else
			cerr << "Deque if Full";
	}

	void del() {
		this->head = 0;
		this->tail = 0;
	}

	~Deque() {
		delete[]list;
	}
};

