#include<iostream>
using namespace std;

void subset(int arr[], int n){
    for(int i=0; i<(1<<n); i++){
        for(int j=0; j<n; j++){
            if(i & (i<<j)){
                cout<<arr[j]<<" ";

            }
        }
        cout<<endl;
    }
}
int main(){


    return 0;
}