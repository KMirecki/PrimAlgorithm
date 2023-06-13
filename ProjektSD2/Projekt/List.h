#pragma once
#include <iostream>

template <typename T>
struct Item {
	T value;
	Item<T>* next;
	Item<T>* previous;
};

template <typename T>
class List
{
private:
	Item<T>* first;
	Item<T>* last;
	int size = 0;

public:
	List() {
		first = NULL;
	}
	void addItem(T value) {								
		Item<T>* newItem = new Item<T>;
		newItem->value = value;
		newItem->next = NULL;
		if (last == NULL) {
			newItem->previous = NULL;
			first = newItem;
			last = first;
		}
		else {
			newItem->previous = last;
			last->next = newItem;
			last = newItem;
		}
		size++;
	}
	/*void swap(int index1, int index2) {
		Item<T>* item1 = getItem(index1);
		Item<T>* item2 = getItem(index2);
		T temp = item1->value;
		item1->value = item2->value;
		item2->value = temp;
	}*/
	int getSize() {										
		return size;
	}
	T getValue(int index) {									
		int i = 0;										
		Item<T>* temp = first;							
		while (temp != NULL && i < index) {
			temp = temp->next;
			i++;
		}
		return temp->value;
	}
	Item<T>* getItem(int index) {
		int i = 0;
		Item<T>* temp = first;
		while (temp != NULL && i < index) {
			temp = temp->next;
			i++;
		}
		return temp;
	}
};