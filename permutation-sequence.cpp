class Solution {
public:
    string getPermutation(int n, int k) {
        if(n==1)
            return "1";
        string ans="";
        for(int i=1;i<=n;i++){
            ans+=to_string(i);
        }
        while(k>1){
            next_permutation(ans.begin(),ans.end());
            k--;
        }
        return ans;
    }
};

/*
class Solution {
public:
    string getPermutation(int n, int k) {
        int fact = 1;
        vector<int>numbers;
        for(int i =1; i< n; i++){
            fact = fact* i;
            numbers.push_back(i);
        }
        numbers.push_back(n);
        string ans = ""; // to store the ans
        k = k-1; // because it 0 base indexing suppose n =3 and we need to find k = 4 then we need to find 3th permuatation because of 0th base indexing
        while(true){
            ans = ans + to_string(numbers[k/fact]); // we need to break into blocks k = 3  & fact is 2
            numbers.erase(numbers.begin() + k/fact); // remove that frome numbers
            if(numbers.size() == 0){
              break;
            }
             k = k% fact;
            fact = fact / numbers.size();
        }
        return ans;
    }
};
*/