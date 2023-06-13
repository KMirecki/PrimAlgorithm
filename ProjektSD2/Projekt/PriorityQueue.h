#pragma once

template <typename T>
struct ItemQ {
	T value;
	int priority;
	ItemQ<T>* next;
};

template <typename T>
class PriorityQueue
{
private:
	ItemQ<T>* first;
	int size = 0;

public:
	PriorityQueue() {
		first = NULL;
	}
	void addItem(T value, int priority) {
		ItemQ<T>* newItem = new ItemQ<T>;
		newItem->value = value;
		newItem->priority = priority;
		if (first==NULL || priority < first->priority) {
			newItem->next = first;
			first = newItem;
		}
		else {
			ItemQ<T>* temp = first;
			while (temp->next != NULL && temp->next->priority <= priority) {
				temp = temp->next;
			}
			newItem->next = temp->next;
			temp->next = newItem;
		}
		size++;
	}
	T getValue(int index) {
		int i = 0;
		ItemQ<T>* temp = first;
		while (temp != NULL && i < index) {
			temp = temp->next;
			i++;
		}
		return temp->value;
	}

	T top() {										
		return first->value;
	}
	void pop() {										
		ItemQ<T>* temp = first->next;
		delete first;
		first = temp;
		size--;
	}
	int getSize() {
		return size;
	}
};