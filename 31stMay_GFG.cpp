/*
Date: 31th May 2023
Problem of the Day: Given an array A of size N. The elements of the array consist of positive integers. You have to find the largest element with minimum frequency.
solution is given below:
(language:c++)
*/

class Solution{
public:
    int LargButMinFreq(int arr[], int n) {
        unordered_map<int,int> f;
        
        for(int i = 0; i < n; i++)
            ++f[arr[i]];
            
        int minFrequency, ans = -1;
        minFrequency = 1e6;
        
        for(auto it : f){
            if(it.second < minFrequency){
                minFrequency = it.second;
                ans = it.first;
            }
            else if(it.second == minFrequency){
                ans = max(ans, it.first);
            }
        }
        
        return ans;
    }
};
