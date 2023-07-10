#include <iostream>
#include <vector>
#include<algorithm>
#include<stack>

using namespace std;
void get_next_permutation(vector<int>& nums) {
      int n=nums.size();
      int idx=-1;
      for(int i=n-2;i>=0;i--)
      {
          if(nums[i]<nums[i+1])
          {
             idx=i;
             break;
          }
      } 
      if(idx==-1)
      {
          reverse(nums.begin(),nums.end());
          return;
      } 

      reverse(nums.begin()+idx+1,nums.end());
      for(int i=idx+1;i<n;i++)
      {
          if(nums[i]>nums[idx])
          {
              swap(nums[idx],nums[i]);
              break;
          }
      }
 
    }
int main()
{
    //next permutation of given array;
    vector<int> arr={3,2,1,4};
    get_next_permutation(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    

    return 0;
}
