
PROBLEM: Majority Element

Asked in: Microsoft,Yahoo,Google,Amazon

Given an array of size n, find the majority element. The majority element is the element that appears more than floor(n/2) times.
You may assume that the array is non-empty and the majority element always exist in the array.

Example :
Input : [2, 1, 2]
Return  : 2 which occurs 2 times which is greater than 3/2.
____________________________________________________________________

Solution 1: Using MAP Container

Space Complexity O(n)

int Solution::majorityElement(const vector<int> &A) {
    map<int,int> mp;
    for(int i=0;i<A.size();i++){
        mp[A[i]]++;
    }
    int max_=INT_MIN,ans=0;
    for(auto i=mp.begin();i!=mp.end();i++){
        if(i->second > max_){
            max_=i->second;
            ans=i->first;
        }
    }
    return ans;
}


Solution 2: Using MOORE VOTING ALGORITHM

Time Complexity: O(Size of the Array)
Space Complexity: O(1)

int Solution::majorityElement(const vector<int> &A) {
    int curr_ele=A[0],curr_count=1;
    if(A.size()==0){
        return 0;
    }
    if(A.size()==1){
        return curr_ele;
    }

    for(int i=1;i<A.size();i++){
        if(A[i]==curr_ele){
            curr_count+=1;
        }
        else{
            curr_count--;
        }
        if(curr_count==0){
            curr_ele=A[i];
            curr_count=1;
        }
    }
    return curr_ele;
}
