/**
*  struct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/
class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head) {
        vector<int> result;
        stack<int> temp;
        ListNode *p = head;
        while(p!=NULL){
            temp.push(p->val);
            p=p->next;
        }
        int length = temp.size();
        for(int i=0;i<length;i++){
            result.push_back(temp.top());
            temp.pop();
        }
        return result;
    }
};
