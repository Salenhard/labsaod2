#pragma once
#include "Entry.h"
#include <iostream>
template <typename T>class LinkedList
{
	Entry<T>* head;
	Entry<T>* tail;

	int size;

public:

	LinkedList() {
		this->head = new Entry<T>();
		this->tail = this->head;
		size = 0;
	}

	void addFront(T value) {
		Entry<T> newEntry* = new Entry<T>();
		newEntry.value = value;
		this->head->prev = newEntry;
		newEntry->next = this->head;
		this->head = newEntry;
		this->size++;
	}
	
	void addBack(T value) {											//adding new element in and of list
		Entry<T> newEntry* = new Entry<T>();
		newEntry.value = value;
		this->tail->next = newEntry;
		newEntry->prev = this->tail;
		this->tail = newEntry;
		this->size++;
	}

	void addAfter(T value, int index) {					// adding element after element with input index 
		if (index < this->size) {
			Entry<T>* newEntry = this->head;
			newEntry->value = value;
			Entry<T>* tmp;
			Entry<T>* current = this->head;
			for (int i = 0; i < index - 1; i++)
			{
				current = current->next;
			}
			tmp = current->next;
			current->next = newEntry;						// установка у текущего объекта указатель на новый
			newEntry->prev = current;						// установка у нового указатель на предыдущий
			newEntry->next = tmp;							// установка у нового указатель на следующий
			tmp->prev = newEntry;							// установка у следующего указатель на предыдущий
			this->size++;
		}
		else throw std::invalid_argument("Size is less then index")
	}
	
	void remove(int index) {
		if (index < size) {
			Entry<T>* current = this->head;
			for (int i = 0; i < index - 1; i++)
			{
				current = current->next;
			}
			current->prev->next = current->next;
			current->next->prev = current->prev;
			delete current;
			this->size--;
		}
		else throw std::invalid_argument("Size is less then index!");
	}

	void remove(T value) {  // removing element with input value
		Entry<T>* current = this->head;
		for (int i = 0; i < this->size; i++)
		{
			if (current->value == value)
			{
				current->prev->next = current->next;
				current->next->prev = current->prev;
				delete current;
				this->size--;
			}
			else
				throw std::invalid_argument("Element in not found!");
		}
	}

	T get(T value) {
		Entry<T>* current = this->head;
		for (int i = 0; i < this->size; i++) {
			if(current.value == value)
				return current
			else
				current = current->next;
		}
		throw std::invalid_argument("there is no such element!");
	}

	T get(int index) {
		if (index < this->size) {
			Entry<T>* current = this->head;
			for (int i = 0; i < index - 1; i++)
			{
				current = current->next;
			}
			return current;
		}
		else throw std::invalid_argument("Size is less then index")
	}

	T clear() {
		for (int i = 0; i < this->size; i++)
		{

		}
	}



};

