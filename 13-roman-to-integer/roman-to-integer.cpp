
class Solution {
public:
    int romanToInt(string s) {
        int num[128] = {};
        num['I'] = 1;
        num['V'] = 5;
        num['X'] = 10;
        num['L'] = 50;
        num['C'] = 100;
        num['D'] = 500;
        num['M'] = 1000;

        int total = 0;

        for (int i = 0; i < s.length(); i++) {
            if (i + 1 < s.length() &&
                num[s[i]] < num[s[i + 1]]) {
                total -= num[s[i]];
            } else {
                total += num[s[i]];
            }
        }

        return total;
    }
};

