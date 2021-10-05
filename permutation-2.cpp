class Solution {
        vector<vector<int>>ans;
public:
    void permutation(vector<int>&nums,int idx){
        if(idx==nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int i=idx;i<nums.size();i++){
            swap(nums[i],nums[idx]);
            permutation(nums,idx+1);
            swap(nums[i],nums[idx]);
        }
        // return ans;
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
         permutation(nums,0);
        set<vector<int>>s;
        for(int i=0;i<ans.size();i++){
            s.insert(ans[i]);
        }
        vector<vector<int>>v;
        for(auto val:s){
            v.push_back(val);
        }
        return v;
    }
};

/*
class Solution {
private:    
    bool next_permutation(vector<int>& perm){
        
        int i = perm.size()-2;
        while(i >= 0 && perm[i] >= perm[i+1])
            i--;
        
        if(i < 0)
            return false;
        
        int j = perm.size()-1;
        while(perm[i] >= perm[j])
            j--;
        
        swap(perm[i], perm[j]);
        for(i++, j = perm.size()-1; i < j; i++, j--)
            swap(perm[i], perm[j]);
        
        return true;
    }
    
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        
        vector<int> perm = nums;
        sort(perm.begin(), perm.end());
        
        vector<vector<int>> all_permutations;
        
        do{
            all_permutations.push_back(perm);
        } while(next_permutation(perm));
        
        return all_permutations;
    }
};*/