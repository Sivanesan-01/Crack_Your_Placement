class Solution {
public:
    bool validPalindrome(string s) {
        // Helper function to check if a substring is a palindrome
        auto isPalindrome = [](const string& str, int left, int right) -> bool {
            while (left < right) {
                if (str[left] != str[right]) return false;
                ++left;
                --right;
            }
            return true;
        };

        int left = 0, right = s.size() - 1;

        while (left < right) {
            if (s[left] != s[right]) {
                // If mismatch, check the two possibilities
                return isPalindrome(s, left + 1, right) || isPalindrome(s, left, right - 1);
            }
            ++left;
            --right;
        }

        return true; // If no mismatches were found, it's already a palindrome
    }
};
