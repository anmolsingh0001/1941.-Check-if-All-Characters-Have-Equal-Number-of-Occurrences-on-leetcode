class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int> order;
        for(int i=0; i<s.length(); i++){
            order[s[i]-'0']++;
        }
        vector<int> check;
        for(auto j:order){
            check.push_back(j.second);
        }
        sort(check.begin(),check.end());
        for(int j=0; j<check.size()-1; j++){
            if(check[j]!=check[j+1]) return false;          
        }
        return true;
    }
};