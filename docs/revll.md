## Reverse a Linked List

Reversing the linked list, you simply copy the current linked list backwards into the new linked list.


## Example

```c++
ListNode* reverseList(ListNode* head) {
	ListNode* curr = head;
	ListNode* prev = malloc(sizeof(ListNode));
	while (cur != nullptr) {
		ListNode* next = cur->next;
		cur->next = prev;
		prev = cur;
		cur = next;
	}
	return prev;
}
```
