#include <iostream>
#include <vector>
#include<algorithm>
#include<stack>

using namespace std;
int get_its_idx(vector<int> arr,int t){
    int n=arr.size();
    int lo=0;
    int hi=n-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==t) return mid;
        else if(arr[mid]<t){
            lo=mid+1;
        }
        else hi=mid-1;
    }
    return lo; //or we can return hi+1;
}


int main()
{
    //binary search.
    vector<int> arr={1,3,5,6,10,13}; //output :4
    int target=6;
    cout<<get_its_idx(arr,target);
    
    
    

    return 0;
}
