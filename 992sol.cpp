//using two pointers.
//Subarrays with K Different Integers
class Solution {
public:
    int solve(vector<int>& nums, int k){
        int l=0,r=0,n=nums.size(),res=0;
        map<int,int>m;
        while(r<n){
            m[nums[r]]++;
            while(m.size() > k){
                m[nums[l]]--;
                if(m[nums[l]] == 0) m.erase(nums[l]);
                l++;
            }
            res += (r-l+1);
            r++;
        }
        return res;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return solve(nums,k) - solve(nums,k-1);
    }
};
