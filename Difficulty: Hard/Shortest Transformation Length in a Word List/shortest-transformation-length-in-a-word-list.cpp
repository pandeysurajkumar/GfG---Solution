class Solution {
  public:
    int wordLadder(vector<string> &words, string &s, string &e) {
        // code here
        queue<pair<string,int>> q;
        q.push({s,1});
        unordered_set<string> st(words.begin(),words.end());
        st.erase(s);
        while(!q.empty())
        {
            string word = q.front().first;
            int steps = q.front().second;
            q.pop();
            if(word == e )
            {
                return steps;
            }
            
            // check for each char
            for(int i=0;i<word.size();i++)
            {
                // each char
                char initial = word[i];
                
                
                // change it vlaue
                for(char ch = 'a';ch<='z';ch++)
                {
                    word[i] = ch;
                    if(st.find(word)!=st.end())
                    {
                        q.push({word,steps+1});
                        st.erase(word);
                    }
                }
                word[i] = initial;
            }
        }
        return 0;
        
    }
};