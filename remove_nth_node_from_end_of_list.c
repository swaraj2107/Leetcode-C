/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode *t1, *t2;
    int c=0;
    t1=head;
    if(t1==NULL || t1->next==NULL)
    {
        return NULL;
    }
    while(t1!=NULL)
    {
        t1=t1->next;
        c++;
    }
    if(c==n)
    {
        head=head->next;
        return head;
    }
    c=c-n;
    t1=head;
    for(int i=1;i<=c-1;i++)
    {
        t1=t1->next;
    }
    t2=t1;
    t1=t1->next;
    t2->next=t1->next;
    t1->next=NULL;
    free(t1);
    return head;
}
