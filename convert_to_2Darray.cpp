/*Q1.You are given a 0-indexed 1-dimensional (1D) integer array original, and two integers, m and n. You are tasked with creating a 2-dimensional (2D) array with  m rows and n columns using all the elements from original.

The elements from indices 0 to n - 1 (inclusive) of original should form the first row of the constructed 2D array, the elements from indices n to 2 * n - 1 (inclusive) should form the second row of the constructed 2D array, and so on.

Return an m x n 2D array constructed according to the above procedure, or an empty 2D array if it is impossible.*/


#include<bits/stdc++.h>
using namespace std;


vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<int>v;
        vector<vector<int>>ans;
        if(m*n != original.size())
        return ans;
        int k = 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                 
                 v.push_back(original[k]);
                 k++;
            }
            ans.push_back(v);
            v.clear();
        }
        return ans;
    }
    
    
int main() {
    int t;
    cin>>t;
    while(t--){
    	int s ;
    	cout<<"Enter size of array"<<endl;
    	cin>>s;
    	int n,m;
    	cout<<"Enter row size of 2D array"<<endl;
		cin>>m;	
        cout<<"Enter column size of 2D array"<<endl;
		cin>>n;				
		vector<int>arr;
		cout<<"Enter values of arr"<<endl;
		for(int i=0;i<s;i++){
			int x;
			cin>>x;
		arr.push_back(x);
		}
		vector<vector<int>>ans = construct2DArray(arr,m,n);
		for(int i=0;i<m;i++){
			
		  for(int j=0;j<n;j++){		  
		    cout<<ans[i][j]<<" ";
		}
		    cout<<endl;
	}
		
	}
	return 0;
}        
