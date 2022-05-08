#pragma once

template <typename T> class Node {		// Class Node(linked list)
	
	Node* next;
	T value;

public:

	Node() {			// default constructor
		this->next = nullptr;
	}

	Node(const Node& orig) {		// constructor with params
		this->next = orig.next;
		this->value = orig.value;
	}

	bool hasNext() {
		if (this->next != nullptr)
			return true;
		else
			return false;
	}

	Node* getNext(){			// returns pointer on next node
		if (this->next != nullptr)
			return this->next;
		else
			return nullptr;
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

