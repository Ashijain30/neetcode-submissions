class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        map<string, vector<string>> mp;

        // Step 1: Go through every string
        for(string s : strs)
        {
            // Step 2: Make a copy
            string key = s;

            // Step 3: Sort the copy
            sort(key.begin(), key.end());

            // Step 4: Put original string into the group
            mp[key].push_back(s);
        }

        // Step 5: Create answer
        vector<vector<string>> ans;

        // Step 6: Take all groups from map
        for(auto it : mp)
        {
            ans.push_back(it.second);
        }

        // Step 7: Return answer
        return ans;
    }
};
