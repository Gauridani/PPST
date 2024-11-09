#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age:";
    cin>>age;
    try{
        try{
            if (age<0){
                throw"Age cannot be negative!";
               }
               cout<<"your age is :"<<age<<endl;
        }catch(const char*e){
            cout<<"caught in inner block:"<<endl;
            throw;//Rethrowing to outer block
        }
       }catch(const char*e){
           cout <<"caugh in outer block:"<<e<<endl;
       }
return 0;
  
}