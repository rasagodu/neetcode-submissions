class Solution {
public:

    vector<int> sizes;
    string encode(vector<string>& strs) {
        int n = strs.size();
        string encoded_string="";
        for(int i =0;i<n;i++){
            encoded_string+=strs[i];
            sizes.push_back(strs[i].size());
        }
        return encoded_string;
    }

    vector<string> decode(string s) {
    vector<string> decoded_string;

    int start = 0;

    for (int i = 0; i < sizes.size(); i++) {
        int len = sizes[i];

        decoded_string.push_back(
            string(s.begin() + start, s.begin() + start + len)
        );

        start += len;
    }

    return decoded_string;
}
};
