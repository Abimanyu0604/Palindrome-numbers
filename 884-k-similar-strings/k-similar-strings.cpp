class Solution {
public:
    int kSimilarity(string s1, string s2) {

        queue<pair<string, int>> q;
        unordered_set<string> visited;

        q.push({s1, 0});
        visited.insert(s1);

        while (!q.empty()) {

            string cur = q.front().first;
            int step = q.front().second;
            q.pop();

            if (cur == s2)
                return step;

            // Find first mismatched position
            int i = 0;
            while (cur[i] == s2[i])
                i++;

            // Try swapping with a useful character
            for (int j = i + 1; j < cur.size(); j++) {

                if (cur[j] == s2[i] && cur[j] != s2[j]) {

                    string next = cur;
                    swap(next[i], next[j]);

                    if (!visited.count(next)) {
                        visited.insert(next);
                        q.push({next, step + 1});
                    }
                }
            }
        }

        return -1;
    }
};