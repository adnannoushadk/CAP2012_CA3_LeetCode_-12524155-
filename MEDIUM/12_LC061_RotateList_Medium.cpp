
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {

        if (head == NULL || head->next == NULL || k == 0) {
            return head;
        }

        ListNode* curr = head;
        int n = 1;

        while (curr->next != NULL) {
            curr = curr->next;
            n++;
        }

        curr->next = head;

        k = k % n;

        int steps = n - k;

        while (steps > 0) {
            curr = curr->next;
            steps--;
        }

        head = curr->next;
        curr->next = NULL;

        return head;
    }
};
