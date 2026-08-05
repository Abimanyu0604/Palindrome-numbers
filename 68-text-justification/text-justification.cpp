class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {

        vector<string> ans;
        int i = 0;
        int n = words.size();

        while (i < n) {

            int j = i;
            int len = 0;

            // Find how many words fit in one line
            while (j < n && len + words[j].size() + (j - i) <= maxWidth) {
                len += words[j].size();
                j++;
            }

            int spaces = maxWidth - len;
            int gaps = j - i - 1;

            string line;

            // Last line or only one word
            if (j == n || gaps == 0) {

                for (int k = i; k < j; k++) {

                    line += words[k];

                    if (k != j - 1)
                        line += " ";
                }

                while (line.size() < maxWidth)
                    line += " ";
            }

            // Fully justify
            else {

                int even = spaces / gaps;
                int extra = spaces % gaps;

                for (int k = i; k < j; k++) {

                    line += words[k];

                    if (k != j - 1) {

                        int cnt = even;

                        if (extra > 0) {
                            cnt++;
                            extra--;
                        }

                        line += string(cnt, ' ');
                    }
                }
            }

            ans.push_back(line);
            i = j;
        }

        return ans;
    }
};