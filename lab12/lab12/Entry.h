#pragma once
template <typename T>class Entry
{
public:

	Entry* next;
	Entry* prev;
	T value;

	Entry(T value; Entry<T> next, Entry<T> prev) {
		this->value = value;
		this->next = next;
		this->prev = prev;
	}

	Entry() {
		this->next = nullptr;
		this->prev = nullptr;
	}
};

