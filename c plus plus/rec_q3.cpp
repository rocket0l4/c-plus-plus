#include<iostream>
using namespace std;

string reverse(string s){
    if(s.length() == 0){
        return "";
    }

   string ans = s.substr(1);
   reverse(ans);
   cout<<s[0];
    
}

int main(){
    reverse("bob");

    return 0;
}