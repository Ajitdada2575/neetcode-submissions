class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> mp(26, 0);
        // Count frequency
        for(char ch : tasks) {
            mp[ch - 'A']++;
        }

        int time = 0;

        // Max Heap
        priority_queue<int> pq;

        for(int i = 0; i < 26; i++) {
            if(mp[i] > 0) {
                pq.push(mp[i]);
            }
        }

        while(!pq.empty()) {

            vector<int> temp;
            int cnt = 0;
            for(int i = 1; i <= n + 1; i++) {

                if(!pq.empty()) {

                    int freq = pq.top();
                    pq.pop();

                    freq--;

                    if(freq > 0) {
                        temp.push_back(freq);
                    }

                    cnt++;
                }
            }
            for(int f : temp) {
                pq.push(f);
            }
            if(!pq.empty()) {
                time += n + 1;
            }
            else {
                time += cnt;
            }
        }

        return time;
    }
};