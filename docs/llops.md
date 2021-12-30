## Linked List Operations

There's many operations in a linked list, such as insert, find, push, pop, traverse, delete, etc.
I will try to cover the most relevant operations and their time complexity, as to why you would want to use a linked list in the first, place for this I will use the linked list definition from leet code.

## Push

```c++
struct ListNode {
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void push(int data, struct ListNode *head) {
	struct ListNode *newNode;
	newNode.val = 4;
	newNode->next = head;
	head = newNode;
}
```

This push operation takes O(1) time as we just push a value to the top of the list, similar to a stack.

## Insertion

```c++
struct ListNode {
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void insert(int data, int pos, ListNode *head) {
	struct ListNode *newNode;
	newNode.val = data;

	struct ListNode *temp = head;
	for (int i = 0; i < pos; i++) {
		if (temp->next != NULL) {
			temp = temp->next;
		}
	}
	newNode->next = temp->next;
	temp->next = newNode;
}

```

insertion takes O(n) time where n is the position of the insertion

## Append

Appending to the end of an array like so [1, 2, 3] [4] = [1, 2, 3, 4]

```c++
void append(ListNode *head, int data) {
	struct ListNode *newNode;
	newNode.val = data;
	newNode->next = NULL; // because it's at the end of the list

	struct node *temp = head;
	while (temp->next != NULL) {
		temp = temp->next;
	}
	temp->next = newNode;
}
```

This takes O(n) time where n is the size of the linked list.
