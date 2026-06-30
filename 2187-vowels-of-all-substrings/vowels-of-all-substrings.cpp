class Solution {
public:
    long long countVowels(string word) {
        long long c=0;
        int n=word.size();
        string v="aeiou";
        for(int i=0;i<n;i++)
        {
            if(v.find(word[i]) != string::npos)
            {
                c+=1ll *(i+1)*(n-i);
            }
        }
        return c;

        
    }
};