/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode *f,*s;
    f=s=head;
    while(f!=NULL && f->next != NULL)
    {
        f=f->next->next;
        s=s->next;
    }
    return s;
}
