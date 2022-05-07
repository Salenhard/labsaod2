#pragma once

template <typename T> class Node		// Class Node(linked list)
{
	Node* next;
	T value;
public:
	Node() {			// default constructor
		next = nullptr;
	}

	Node(const Node& orig) {		// constructor with params
		next = orig.next;
		value = orig.value;
	}

	Node* getNext(){			// returns pointer on next node
		return next;
	}

	void setNext(Node* newNext) {			// sets pointer on next node
		this->next = newNext;
	}

	T getValue(){							// returns value of this node
		return this->value;
	}

	void setValue(const T& value) {			// sets value
		this->value = value;
	}
};

