#include<iostream>
using namespace std;

class fight{
    private:
        int fight_number;
        int capacity;
        char company[50];
    public:
        void get_data()
 {
        cout<<"Enter Fight number :";
        cin>>fight_number;
        cout<<"Enter capacity :";
        cin>>capacity;
        cout<<"Enter company:";
        cin>>company;
 }

    void print_data(){

     
    cout<<endl<<"Fight number:"<<fight_number<<endl<<"capacity:"<<capacity<<endl<<"company:"<<company<<endl;
}

    void is_okay(){
        cout<<endl<<"safe or Ur-safe:";

        if(capacity > 100)
        cout<<"Safe"<<endl;
        else{
             cout<<"Un-safe"<<endl;
        }
       
    }


};


    
int main(){
    fight f;
    f.get_data();
    f.print_data();
    f.is_okay();



    return 0;
}