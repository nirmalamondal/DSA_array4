/*
Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer appears **once** or **twice**, return *an array of all the integers that appears **twice***.

You must write an algorithm that runs in O(n) time and uses only constant extra space.

**Example 1:**

**Input:** nums = [4,3,2,7,8,2,3,1]

**Output:**

[2,3]*/

#include<bits/stdc++.h>
using namespace std;

vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        map<int,int>mp;
        
        set<int>s;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(int i=0;i<n;i++){
            if(mp[nums[i]]==2){
                s.insert(nums[i]);
            }
            
        }
        
           
        vector<int> v(s.begin(), s.end());
        return v;
    }

int main() {
    int t;
    cin>>t;
    while(t--){
    	int n,m;
    	cout<<"Enter size of arr"<<endl;
		cin>>n;		
		vector<int>arr;
		cout<<"Enter values of arr1"<<endl;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
		arr.push_back(x);
		}
		vector<int>ans = findDuplicates(arr);
		for(int i=0;i<ans.size();i++)
		cout<<ans[i]<<" ";
		cout<<endl;		
		
	}
	return 0;
}    
