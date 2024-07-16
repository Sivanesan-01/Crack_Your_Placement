class Solution {
public:
    string addBinary(string a, string b) {
        int carry = 0;
        string result = "";
        
        int i = a.size() - 1;
        int j = b.size() - 1;
        
        while (i >= 0 || j >= 0 || carry > 0) {
            int num1 = (i >= 0) ? (a[i--] - '0') : 0;
            int num2 = (j >= 0) ? (b[j--] - '0') : 0;
            
            int sum = num1 + num2 + carry;
            carry = sum / 2;
            int bit = sum % 2;
            
            result = to_string(bit) + result;
        }
        
        return result;
    }
};
