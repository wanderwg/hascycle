//判断链表中是否有环
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
	if (head == NULL)
		return NULL;
	struct ListNode* fast = head;
	struct ListNode* slow = head;
	while (1) {
		fast = fast->next;
		if (fast == NULL)
			return false;
		fast = fast->next;
		if (fast == NULL)
			return false;
		slow = slow->next;
		if (slow == fast)
			return true;
	}
}