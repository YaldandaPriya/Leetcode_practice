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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int>critical;
        ListNode* temp=head->next;
        ListNode* prev=head;
        int i=2;
        while(temp->next!=NULL){
            if(prev->val<temp->val&&temp->val>temp->next->val){
                critical.push_back(i);
            }
            else if(prev->val>temp->val&&temp->val<temp->next->val){
                critical.push_back(i);
            }
            temp=temp->next;
            prev=prev->next;
            i++;
        }
        vector<int>ans(2);
        ans[0]=-1;ans[1]=-1;
        
        if(critical.size()>1){
            int mindis=INT_MAX;
            int maxdis=critical[critical.size()-1]-critical[0];
            for(int i=1;i<critical.size();i++){
                mindis=min(mindis,critical[i]-critical[i-1]);
            }
            ans[0]=mindis;
            ans[1]=maxdis;
        }
        return ans;
    }
};