/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode *t1,*t2;
    t1=t2=head;
    if(t2==NULL)
    {
        return head;
    }
    t1=t1->next;
    while(t1!=NULL)
    {
        if(t1->val==t2->val)
        {
            t2->next=t1->next;
            t1->next=NULL;
            free(t1);
            t1=t2->next;
            if(t1==NULL)
            {
                return head;
            }
        }
        else
        {
            t1=t1->next;
            t2=t2->next;
        }
    }
    return head;
}
