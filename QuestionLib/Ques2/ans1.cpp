/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *ptr1 = l1;
        ListNode *ptr2 = l2;
        ListNode *ret = new ListNode;
        ListNode *Next = ret;
        ret->val = (ptr1->val + ptr2->val)%10;
        int dst = (ptr1->val + ptr2->val)/10;
        int val = 0;
        int num = 0;
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
        while(((ptr1 != nullptr)||(ptr2 != nullptr))||(dst != 0))
        {
            num += (ptr1 == nullptr)? 0:ptr1->val;
            num += (ptr2 == nullptr)? 0:ptr2->val;
            val = (num + dst)%10;
            dst = (num + dst)/10;
            Next->next = new ListNode(val);
            Next = Next->next;
            num = 0;
            ptr1 = (ptr1 == nullptr)? nullptr : ptr1->next;
            ptr2 = (ptr2 == nullptr)? nullptr : ptr2->next;
        }
        return ret;
    }
};