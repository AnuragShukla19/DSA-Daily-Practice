class Solution {
  public:
    int mostFreqEle(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,int> mp;
        for(auto it:arr){
            mp[it]++;
        }
        int freq=0,num;
        for(auto it:mp){
            if(it.second>freq){
                freq=it.second;
                num=it.first;
            }else if(it.second==freq){
                num=max(num,it.first);
            }
        }
        return num;
    }
};
