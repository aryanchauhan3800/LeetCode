class Solution {
private:
    void getAns(string &digits, int index, string &output, vector<string> &ans, string mapping[]) {
        if (index >= digits.size()) {
            ans.push_back(output);
            return;
        }

        char ch = digits[index];
        int number = ch - '0';
        string str = mapping[number];

        for (int i = 0; i < str.size(); i++) {
            output.push_back(str[i]);
            getAns(digits, index + 1, output, ans, mapping);
            output.pop_back();
        }
    }

public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {}; // handle empty input

        string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

        int index = 0;
        string output = "";
        vector<string> ans;
        getAns(digits, index, output, ans, mapping);
        return ans;
    }
};
