    void deleteNode(ListNode* t) {
        t->val=t->next->val;
        t->next=t->next->next;
    }
