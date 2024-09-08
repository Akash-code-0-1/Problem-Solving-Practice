#include<bits/stdc++.h>
using namespace std;

int countSubarray(int arr[], int n, int k){

    int count=0,number=0;
    for(int i=0;i<n;i++){
        if(arr[i]>k){
            count++;
        }
        else{
            number+= (count)*(count+1)/2;
            count=0;
        }
    }
    if(count){
        number+= (count)*(count+1)/2;
    }
    return number;


}

int main(){
    int array[]={3,4,5,6,7,2,10,8};
    int n=sizeof(array)/sizeof(array[0]);
    int k=5;

    cout<<countSubarray(array, n, k)<<endl;
}