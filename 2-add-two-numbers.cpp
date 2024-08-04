class Solution
{
    public:
    ListNode* reverse(ListNode* head) {
        
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* next = NULL;
        
        while(curr != NULL) {
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    
    void insertAtTail(struct ListNode* &head, struct ListNode* &tail, int val) {
        
        ListNode* temp = new ListNode(val);
        //empty list
        if(head == NULL) {
            head = temp;
            tail = temp;
            return;
        }
        else
        {
            tail -> next = temp;
            tail = temp;
        }
    }
    
    struct ListNode* addTwoNumbers(struct ListNode* first, struct ListNode* second) {
        int carry = 0;
        
        ListNode* ansHead = NULL;
        ListNode* ansTail = NULL;
        
        while(first != NULL || second != NULL || carry != 0) {
            
            int val1 = 0;
            if(first != NULL)
                val1 = first -> val;
                
            int val2 = 0;
            if(second !=NULL)
                val2 = second -> val;
            
            
            int sum = carry + val1 + val2;
            
            int digit = sum%10;
            
            insertAtTail(ansHead, ansTail, digit);
            
            carry = sum/10;
            if(first != NULL)
                first = first -> next;
            
            if(second != NULL)
                second = second -> next;
        }
        return ansHead;
    }
    public:
    struct ListNode* addTwoLists(struct ListNode* first, struct ListNode* second)
    {

        first = reverse(first);
        second = reverse(second);
      
        ListNode* ans = addTwoNumbers(first, second);
        ans = reverse(ans);
        
        return ans;
    }
};
