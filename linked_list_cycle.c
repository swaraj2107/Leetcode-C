/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    struct ListNode *f,*s;
    f=s=head;
    while(f!=NULL && f->next!=NULL)
    {
        f=f->next->next;
        s=s->next;
        if(f==s)
        {
            return true;
        }
    }
    return false;
}
