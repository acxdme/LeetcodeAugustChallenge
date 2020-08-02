/*
Time complexity : O(Logn)->for remove and contain function and O(1)->for insert function
Space complexity : O(n) for vector that is used to implement the hashset.
My approach : Use of vector to implement a hashset 
*/

class MyHashSet {
public:
    /** Initialize your data structure here. */
     vector<int> v;
    MyHashSet()
    {
    
    }
    
    void add(int key) 
    {
        if(find(v.begin(),v.end(),key)==v.end())
        {
            v.push_back(key);
        }
    
    }
    
    void remove(int key) 
    {
        auto it=find(v.begin(),v.end(),key);
        if(it==v.end())
            return ;
        else
            v.erase(it);
    
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) 
    {
       if(find(v.begin(),v.end(),key)!=v.end())
           return true;
      return false;      
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
