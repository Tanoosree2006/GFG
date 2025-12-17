class Solution {
public:
    bool isPalinSent(string &s) {
        int i = 0, j = s.length() - 1;

        while (i < j) {
            // skip non-alphanumeric characters
            while (i < j && !isalnum(s[i])) i++;
            while (i < j && !isalnum(s[j])) j--;
            if (tolower(s[i]) != tolower(s[j]))
                return false;

            i++;
            j--;
        }
        return true;
    }
};
