#include <bits/stdc++.h>
using namespace std;
 
vector<vector<string>> groupAnagrams(vector<string>& words) {
    unordered_map<string, vector<string>> groups;
 
    for (int i = 0; i < words.size(); i++) {
        string key = words[i];
        sort(key.begin(), key.end());  
        groups[key].push_back(words[i]); 
    }
 
    vector<vector<string>> result;
    for (auto& pair : groups) {
        result.push_back(pair.second);
    }
 
    return result; //result
}
 
int main() {
    vector<string> words = {"eat", "tea", "tan", "ate", "nat", "bat"}; //demo words
    vector<vector<string>> result = groupAnagrams(words);
 
    for (auto& group : result) {
        for (auto& w : group) cout << w << " "; 
        cout << endl;
    }
    return 0;
}
