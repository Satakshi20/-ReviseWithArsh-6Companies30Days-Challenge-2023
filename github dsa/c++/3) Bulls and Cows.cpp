class Solution {
public:
    string getHint(string secret, string guess) {
        int x = 0, y =0;
        map<char, int> s, g;
        for(int i=0; i<secret.length(); i++) {
            if(secret[i] == guess[i]) x++;
            else s[secret[i]]++, g[guess[i]]++;
        }

        for(auto c: s) {
            y += min(g[c.first], s[c.first]);
        }

        return to_string(x) + "A" + to_string(y) + "B";
    }
};
