#include <iostream>
#include <string>
#include "Node.h"

using namespace std;

int main()
{
	Node<string>* head = new Node<string>();				// голова списка (первый элемент)
	Node<string>* tail;										// хвост списка (последний элемент)
	tail = head;
	int count = 0;
	head->setValue("8");
	count++;
	for (int i = 0; i < 5; i++)								// заполнение списка
	{
		Node<string>* newNode = new Node<string>();				// создание нового узла
		newNode->setValue(to_string(i));						// заполнение его значения
		tail->setNext(newNode);									// добавление узла в список
		tail = newNode;											// перенос хвоста в конец списк
		count++;
	}

	Node<string>* current = head;
	while (current != nullptr) {
		cout << current->getValue() << " ";					// вывод списка
		current = current->getNext();						// переход к след элементу списка
	}
	Node<string>* tmp = head;
	for (int i = 0; i < count; i++)
	{
		current = head;
		while (current->getNext() != nullptr)
		{
			tmp = current;
			current = current->getNext();
		}
		tmp->setNext(nullptr);
		delete current;
	}


	//Linked list












}
