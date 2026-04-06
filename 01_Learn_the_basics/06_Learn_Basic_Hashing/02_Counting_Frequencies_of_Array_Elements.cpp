class Solution {
  public:
    vector<vector<int>> countFreq(vector<int>& arr) {
        vector<vector<int>> v;
        unordered_map<int,int> mp;
        for(int i=0;i<arr.size();i++) mp[arr[i]]++;
        for(auto it:mp) v.push_back({it.first,it.second});
        return v;
    }
};
