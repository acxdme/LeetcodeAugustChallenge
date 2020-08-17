/*
Time complexity : O(candies)
Space complexity: O(N)  , which is the size of the vector.
My approach : Simply implemented what was described by the given question.
*/
class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people)
    {
        vector<int> answer(num_people,0);
        int i=0,k=0;
        while(candies>0)
        {
            if(candies >= (num_people*k)+(i+1))
             answer[i]+=(num_people*k)+(i+1);
            else
            {
                answer[i]+=candies;
                break;
            }
            candies-= (num_people*k)+(i+1);
            if(i!=0 and i % (num_people-1)==0)
            {
                k++;
            }
            i++;
            i = i% num_people;
        }
        return answer;
    }
};
