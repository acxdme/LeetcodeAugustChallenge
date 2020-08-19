/*
Time complexity : O(n)
Space complexity :O(n)
My approach : Every word has to be appended by "ma" and  index times 'a' but If the first letter of the word is consonent than firstly place that consonant to the end of that word.
For vowels we have to just append.
I have used a vector of string that stores the modified words of the sentence, In the end recombine these words to form the answer string. 
*/
class Solution {
public:
    string toGoatLatin(string S)
    {
        int index=1;
        int n=S.size();
        vector<string> v;
        string temp;
        for(int i=0;i<n;i++)
        {
            if(S[i]==' ')
            {   
                if(temp[0]=='a' or temp[0]=='A' or temp[0]=='e' or  temp[0]=='E' or temp[0]=='i' or temp[0]=='I' or temp[0]=='O' or temp[0]=='o' or temp[0]=='u' or temp[0]=='U')
                   temp+="ma";
                else
                {
                    string conso= temp;
                    temp= temp.substr(1,temp.size()-1) + conso[0];
                    temp+="ma";
                }
                temp.append(index,'a');  //append the alphabet/character a index times "name.append(times,'c')"
                v.push_back(temp);
                temp.clear();
                index++;
            }
            else
                temp+=S[i];
            
        }
        
             if(temp[0]=='a' or temp[0]=='A' or temp[0]=='e' or  temp[0]=='E' or temp[0]=='i' or temp[0]=='I' or temp[0]=='O' or temp[0]=='o' or temp[0]=='u' or temp[0]=='U')
                temp+="ma";
                else
                {
                    string conso= temp;
                    temp= temp.substr(1,temp.size()-1) + conso[0];
                    temp+="ma";
                }
        
        temp.append(index,'a');
        v.push_back(temp);
        string answer;
        for(int i=0;i<v.size();i++)
        {
             answer+= v[i];
            if(i!=v.size()-1)
                answer+=" ";
            
        }
        return answer;
    }
};
