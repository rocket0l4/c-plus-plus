#include<iostream>
using namespace std;
int count(int ind, int sum, int arr[], int n){
    if(ind==n){
        if(sum==0){
            return 1;
        }
        return 0;
    }

    int left = 0; 
    int right = 0;

    if(arr[ind] <= sum){
        sum -= arr[ind];
        left = count(ind , sum, arr, n);
        sum += arr[ind];
    }
    right = count(ind+1, sum, arr, n);

    return left + right;
}
int main(){
    int arr; 
    int sum;
    cin>>arr;
    cin>>sum;
    cout<< arr<<sum<< endl;




    return 0;
}