#include <iostream>
#include <vector>
#include<algorithm>
#include<stack>

using namespace std;
void modified(vector<int> &arr){
    int n=arr.size();
    int carry=1;
    int sum=0;
    for(int i=n-1;i>=0;i--){
       int  sum=arr[i]+carry;
        arr[i]=sum%10;
        carry=sum/10;
    }
    if(carry){//one more digit must be added and the rest will be zeros.
        arr.resize(n+1,0);
        arr[0]=1;
    }
}



int main()
{
    //add 1 to largest integer represented in array form.
    vector<int> arr={9,9,9,9,7}; //output : 154 
    modified(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i];
    }
    cout<<endl;
    
    
    

    return 0;
}
