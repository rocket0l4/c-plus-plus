#include<bits./stdc++.h>
using namespace std;
// bool subsequence(string t, string s){
//     if(s == t)
//     return true;

//     int n = s.size();
//     int m = t.size();
//     int j =0;

//     for(int i =0; i<n; i++){
//         if(t[j] == s[i])
//         j++;
//         if(j == t.size())
//         return true;
//     }
//     return false;
// }
// int main(){
//     string s = "abc" , t = "adbrcyxd";
//     cout<<subsequence(s,t);

//     return 0;
// }

bool subseq(string s, string ans = " "){
    if(s.length()== 0){
        return true;
    }
    char ch = s[0];
    string ros = s.substr(1);
    
    subseq(ros,ans);_Bvector_base
    subseq(ros,ans+ch);

}
int main(){
    string s;
    cin>>s;
    subseq(s);

    return 0;
}