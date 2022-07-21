#include<bits/stdtr1c++.h>
using namespace std;
int main(){
    int n ,sum=0;
    cout<<"Enter the size"<<endl;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n/2;i++){
        sum=sum+arr[i];
       
    }
    cout<<"Half of the sum is:"<<sum;
    return 0;
}
