/*Given two integer arrays arr1 and arr2, and the integer d, *return the distance value between the two arrays*.

The distance value is defined as the number of elements arr1[i] such that there is not any element arr2[j] where |arr1[i]-arr2[j]| <= d.

**Example 1:**

**Input:** arr1 = [4,5,8], arr2 = [10,9,1,8], d = 2

**Output:** 2
*/

#include<bits/stdc++.h>
using namespace std;


int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int count =0;
        for(int i =0;i<arr1.size();i++){
            for(int j=0;j<arr2.size();j++){
                if(abs(arr1[i] - arr2[j])<=d ){
                     break;
                }
                if(j== arr2.size()-1)
                  count++;   
                
            }
        }
        return count;
    }
    
int main() {
    int t;
    cin>>t;
    while(t--){
    	int n,m;
    	cout<<"Enter size of arr1"<<endl;
		cin>>n;
		cout<<"Enter size of arr2"<<endl;
		cin>>m; 
		vector<int>arr1;
		vector<int>arr2;
		cout<<"Enter values of arr1"<<endl;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
		arr1.push_back(x);
		}
		cout<<"Enter values of arr2"<<endl;
		for(int i=0;i<m;i++){
			int x;
			cin>>x;
		arr2.push_back(x);
		}
		int d;
		cout<<"Enter d value"<<endl;
		cin>>d;
		cout<<findTheDistanceValue(arr1,arr2,d)<<endl;;
		
		
	}
	return 0;
}    
