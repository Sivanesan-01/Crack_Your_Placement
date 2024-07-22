class Solution {
public:
    string convertToTitle(int columnNumber) {
        string result;
        
        while (columnNumber > 0) {
            // Adjust columnNumber for zero-based index and find the current character
            columnNumber--; 
            char currentChar = 'A' + (columnNumber % 26);
            result.push_back(currentChar);
            columnNumber /= 26;
        }
        
        // The result is constructed in reverse order
        reverse(result.begin(), result.end());
        
        return result;
    }
};
