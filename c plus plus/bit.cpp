#include<iostream>
using namespace std;


    int getBit(int n, int pos){
        return(n>>pos)& 1;
    }
int main(){

cout<<getBit<<endl;


    return 0;

}