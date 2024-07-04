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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* dummy=new ListNode(-1);
        ListNode* p1=dummy;
        while(head!=NULL){
            if(head->val==0){
                int sum=0;
                head=head->next;
                while(head!=NULL&&head->val!=0){
                    sum=sum+head->val;
                    ListNode* temp = head;
                    head = head->next;
                    delete temp; 
                  
                }
                if(sum!=0){
                ListNode* nn=new ListNode(sum);
                    p1->next=nn;
                    p1=p1->next;
                }
            }
            else{
               ListNode* temp = head;
                head = head->next;
                delete temp;
            }
        }
        ListNode* res=dummy->next;
        delete dummy;
        return res;
    }
};
