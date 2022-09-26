class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> nums;
        for(auto itr:lists){
            while(itr != NULL){
                nums.push_back(itr->val);
                itr=itr->next;
            }
        }
            sort(nums.begin(),nums.end());
            int n=nums.size();
            ListNode* ans=new ListNode(NULL);
            ListNode* cur=ans;
            for(int i=0;i<n;i++){
                cur->next = new ListNode(nums[i]);
                cur=cur->next;
            }

        return ans->next;
        //finish
    }
};
