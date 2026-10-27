/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *detectCycle(struct ListNode *head) {
    struct ListNode *f,*s;
    f=s=head;
    while(f!=NULL && f->next!=NULL)
    {
        f=f->next->next;
        s=s->next;
        if(f==s)
        {
            struct ListNode *t=head;
            while(t!=s)
            {
                t=t->next;
                s=s->next;
            }
            return t;
        }
    }
    return NULL;
}
