class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int element = 0;
        for(auto n:nums){
            if(count==0)element=n;
            if(n==element)count+=1;
            else count-=1;
        }
        return element;
    }
};

 // int n = nums.size();
 //        unordered_map<int,int>m;
 //        for(auto i:nums){
 //            m[i]++;
 //        }
 //        int c = n/2;
 //        for(auto i = m.begin();i!=m.end();i++){
 //            if(i->second>c)return i->first;
 //        }
 //       return 0;