/*
Time complexity : O(N)
Space complexity : O(n) , to return the answer in vector of strings.
Reminds me of hackerEarth practice question before every interview 
*/
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> answer;
        for(int i=1 ;i<=n;i++)
        {
            if(i%3==0 and i%5==0)
                answer.push_back("FizzBuzz");
            else if(i%5 ==0 )
                 answer.push_back("Buzz");
            else if(i%3==0)
                 answer.push_back("Fizz");
            else
                answer.push_back(to_string(i));
        }
            
       return answer; 
    }
};
