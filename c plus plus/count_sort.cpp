#include<iostream>
using namespace std;

voidCountingSort (int A[], int n, int B[], int k){
    int c[k],i,j;
    for(i =0; i<k;i++)
    c[i]  = 0;


    for(j =0; j<n; j++)
    c[A[j]]= c[A[j]]+1;


    for(i =1; i<k; i++)
    c[i] = c[i] + c[i-1];

    for(j =n-1; j>=0; j--){
        B[c[A[j]]] = A[j];
        c[A[j]]= c[A[j]]-1;
    } 
    
}

int main(){
    int A,B;
    cin>>A>>B;



    return 0;
}
