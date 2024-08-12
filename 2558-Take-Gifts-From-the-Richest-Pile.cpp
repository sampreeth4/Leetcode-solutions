class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int>pq(gifts.begin(), gifts.end());
        long long res = 0;
        while(k--){
            int max1 = pq.top();
            pq.pop();
            pq.push(sqrt(max1));
        }
        int n = gifts.size();
        while(pq.size() > 0){
            res += pq.top();
            pq.pop();
        }
        return res;
    }
};
