//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    void func(int ind, int sum, vector<int>&arr,int N, vector<int>&sumsubset){
        if(ind==N){
            sumsubset.push_back(sum);
            return;
        }
        func(ind+1,sum+arr[ind],arr,N,sumsubset);
        
        func(ind+1,sum,arr,N,sumsubset);
    }
public:
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int>sumsubset;
        func(0,0,arr,N,sumsubset);
        sort(sumsubset.begin(),sumsubset.end());
        return sumsubset;
        // Write Your Code here
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends