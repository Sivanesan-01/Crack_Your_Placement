class Solution {
public:
    string reverseWords(string s) {
        trim(s);
        vector<string> words = split(s);
        reverse(words.begin(), words.end());
        return join(words);
    }
    
private:
    void trim(string &s) {
        size_t start = s.find_first_not_of(' ');
        size_t end = s.find_last_not_of(' ');
        if (start == string::npos) {
            s = "";
        } else {
            s = s.substr(start, end - start + 1);
        }
    }
    
    vector<string> split(const string &s) {
        vector<string> result;
        istringstream iss(s);
        string word;
        while (iss >> word) {
            result.push_back(word);
        }
        return result;
    }
    
    string join(const vector<string> &words) {
        string result;
        for (size_t i = 0; i < words.size(); ++i) {
            if (i > 0) {
                result += " ";
            }
            result += words[i];
        }
        return result;
    }
};
