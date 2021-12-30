#include <bits/stdc++.h>

using namespace std;

class LinkedList {
private:
	int data;
	class LinkedList *next;
	class LinkedList *head;
public:
	LinkedList() : data(0), next(nullptr), head(nullptr) {}
	LinkedList(int x) : data(x), next(nullptr), head(nullptr) {}
	LinkedList(int x, LinkedList *next) : data(0), next(next), head(nullptr) {}
	LinkedList(int x, LinkedList *next, LinkedList *head) : data(0), next(next), head(head) {}

	void push(int data) {
		LinkedList *newNode;
		newNode->data = data;
		newNode->next = this->head->next;
		this->next = newNode;
	}

	void append(int data) {
		LinkedList *newNode;
		newNode->next = NULL;
		newNode->data = data;

		LinkedList *temp;
		while (temp->next != NULL) {
			temp = temp->next;
		}
		temp->next = newNode;
	}

	void traverse() {
		LinkedList *cur;
		cout << "[ ";
		while (cur != NULL) {
			cout << cur->data << " ";
			cur = cur->next;
		}
		cout << "]" << endl;
	}
};

int main() {
	LinkedList l = LinkedList();
	l.push(1); l.push(2); l.push(3); l.push(4);
	l.traverse();
}
