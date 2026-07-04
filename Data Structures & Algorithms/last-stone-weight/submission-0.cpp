class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for(int stone : stones) pq.push(stone);

        while(pq.size() >= 2) {
            int first = pq.top(); pq.pop();
            int second = pq.top(); pq.pop();

            int third = first - second;
            if(third > 0) pq.push(third);
            else if(third < 0) pq.push(-third);
        }

        return !pq.empty() ? pq.top() : 0;
    }
};
