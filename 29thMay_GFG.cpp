/*
Date: 29th May 2023
Problem of the Day: Given a dictionary of words where each word follows CamelCase notation, print all words (in lexicographical order) in the dictionary that match with a given pattern consisting of uppercase characters only.
solution is given below:
(language:c++)
*/
class Solution {
  public:
    vector<string> CamelCase(int N, vector<string> Dictionary, string pattern) {
        vector<string> ans;
        for(auto current : Dictionary){
            
            string need = "";
            for(auto i : current)
                if(isupper(i))
                    need += i;
                    
            bool ok = 1;
            if(need.size() < pattern.size())
                continue;
                
            for(int i = 0; i < pattern.size(); i++){
                if(need[i] != pattern[i]){
                    ok = 0;
                    break;
                }
            }
            
            if(ok)
                ans.push_back(current);
        }
        
        if(ans.size() == 0)
            ans.push_back("-1");
            
        return ans;
    }
};
