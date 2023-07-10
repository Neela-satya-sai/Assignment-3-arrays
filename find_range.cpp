#include <iostream>
#include <vector>
#include<algorithm>
#include<stack>

using namespace std;

vector<vector<int>> get_ranges(vector<int> arr,int l,int h){
    vector<vector<int>> ans;
    int n=arr.size();
    if(arr[0]!=l){
        vector<int> range(2);
        range[0]=l;
        range[1]=arr[0]-1;
        ans.push_back(range);
    }
    for(int i=0;i<arr.size()-1;i++){
        if(arr[i]+1==arr[i+1]){
            continue;
        }
        else{
            vector<int> range(2);
            range[0]=arr[i]+1;
            range[1]=arr[i+1]-1;
            ans.push_back(range);
        }
            
    }
    if(arr[n-1]!=h){
        vector<int> range(2);
        range[0]=arr[n-1]+1;
        range[1]=h;
        ans.push_back(range);
    }
    return ans;
}



int main()
{
    //get the ranges of missing ele inclusive
    vector<int> arr={0,1,3,50,75,80}; 
    int lower=0;
    int higher=99;
    vector<vector<int>> ans=get_ranges(arr,lower,higher);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[0].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
  
    return 0;
}
