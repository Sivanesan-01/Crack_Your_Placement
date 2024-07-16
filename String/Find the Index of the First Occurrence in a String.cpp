class Solution {
public:
    int strStr(string haystack, string needle) {
        size_t found = haystack.find(needle);
        if (found != std::string::npos) {
            return static_cast<int>(found);
        } else {
            return -1; // Indicate that the substring was not found
        }
    }
};
