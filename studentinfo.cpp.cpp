#include<iostream>
#include<string>
using namespace std;

class student {
  public:
  
  //Progerties( dada members)
  string name;
  int rollNumber;
  int age;
  
  //Function to display student information void 
  displayInfo () {
    cout<<" Name:"<<name<<endl;
    cout<<" RollNumber:"<<rollNumber<<endl;
    cout<<" Age:"<<age<<endl;
  }
};
int main(){
  //Create objects (instances) of the student class
  student s1;
  student s2;
  
  //Set properties for student s1
  s1 name ="Gauri";
  s2 rollNumber="99";
  s3 age ="18";
  
  //Set properties for student s2
  s2 name = "Sanjivani";
  s2 rollNumber = " 115";
  s2 age = "18";
  
  //Display information for each student
  cout<<"s1 Information:"<<endl;
  s1 display Info ();
  cout<<"s2 Information:"<<endl;
  s2 display Info ();
  
  return 0;
}
}