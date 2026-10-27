/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    if(head==NULL)
    {
        return NULL;
    }
    struct ListNode *p,*c,*n;
    p=NULL;
    c=head;
    n=c->next;
    while(c!=NULL)
    {
        c->next=p;
        p=c;
        c=n;
        if(n!=NULL)
        {
            n=n->next;
        }
    }
    head=p;
    return head;
}
