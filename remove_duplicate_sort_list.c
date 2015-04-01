// #83
class Solution {

public:
	ListNode *deleteDuplicates(ListNode *head){
		ListNode* cur = head;
		if (!cur)
			return head;
		ListNode* next = cur->next;

		while (next){
			if (cur->val == next->val) {
				cur->next = next->next;
				delete next;
			}
			else {
				cur = next;
			}
			next = next->next;
		}

		return head;
	}
}
