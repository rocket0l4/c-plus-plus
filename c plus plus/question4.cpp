#include<bits/stdc++.h>
using namespace std;

bool is_pal(char str[], int x, int y){
    if(x == y)
    return true;

    if(str[x] != str[y])
    return false;

    if(x<y+1)
    return is_pal(str, x+1, y-1);
    return true;
}
  bool ispal(char str[]){
      int n = strlen(str);

      if(n== 0)
          return true;
      
      return(str,0,n-1);
    }

int main(){
    char str[] = "bob";

    if(ispal(str))
        cout<<"Yes";
    else
    cout<<"No";


    return 0;
}