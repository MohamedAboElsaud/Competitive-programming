class Solution {
public:
    vector<int>list;
    Solution(ListNode* head) {
        ListNode * x = head;
        while(x)
        {
            list.push_back(x->val);
            x = x->next;
        }
    }
    
    int getRandom() {
        int n = list.size();
        int x = rand()%n;
        return list[x];
    }
};
