class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        int sum = 0;
        int start=0;end=0;
        while(end < nums.size()){
            if(sum < target){
                sum += arr[end];
                end++;
            }
            else if(sum == target){
                return {start,end};
            }
            else if(sum > target){
                sum -= arr[start];
                start++;
            }
        }
        
    }
};
