class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        unordered_map<int,int> m;
        ListNode* prev = NULL;
        ListNode* curr = head;
        while(curr!=NULL)
        {
            if(m.count(curr->val))
            {
                prev->next = curr->next;
            }
            else{
            m[curr->val] = 1;
            prev = curr;
            }
            curr =curr->next;
        }
        return head;
    }
};
