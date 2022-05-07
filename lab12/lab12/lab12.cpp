#include <iostream>
#include <string>
#include "Node.h"

using namespace std;

int main()
{
	Node<string>* head = new Node<string>();				// голова списка (первый элемент)
	Node<string>* tail;										// хвост списка (последний элемент)
	tail = head;
	head->setValue("8");
	for (int i = 0; i < 5; i++)								// заполнение списка
	{
		Node<string>* newNode = new Node<string>();				// создание нового узла
		newNode->setValue(to_string(i));						// заполнение его значения
		tail->setNext(newNode);									// добавление узла в список
		tail = newNode;											// перенос хвоста в конец списк
	}

	Node<string>* current = head;
	while (current != nullptr) {
		cout << current->getValue() << " ";					// вывод списка
		current = current->getNext();						// переход к след элементу списка
	}
	while (head != nullptr)								// очищение списка
	{
		current = head;									// установка указателя на голову списка
		while (current->getNext() != nullptr) {			// переход к последнему элементу
			current = current->getNext();				
		}
		delete current;									// удаление последнего элемента
	}
}
