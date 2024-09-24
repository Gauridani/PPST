#include<iostream>
using namespace std;

//Iterative function to calculate factorial unsinged long long factoriallterative (int n)
{
  unsinged long long result=
  //Start with 1, as factorial of 0 is 1 
  for (int i=1; i<=n; ++1){
    //Loop from 1 to n
    result *=i;
    //Multiply result by the loop index
  }
  return result;
}
//Recursive function to calculate factorial
Unsigned long long factorial Recursive (int n) {
  if (n <=1){
    return 1;
    //Base case: factorial of or 1 is 1
  }else{
    return n*factorial Recursive( n-1); // Recursive case
  }
}
int main()
{
  int number;
  //Input
  cout<<" Enter a non-negative integer;";
  cin>>number;
  
  //Check if the input is valid
  if (number<0){
    cout<<" Factorial is not defined for negative number:"<<endl;
    return 1; // Exit with error code
  }
  //Calculate factorial using iterative method unsinged long long
   interativeResult;
   factorialIterative(number);
   
   cout<<" Iterative factorial of"<< number<<"is:"<< interativeResult<<endl;
   
   //Calculate factorial using recursive method unsinged long 
     recursiveResult;
     factorialRecursive(number);
     
     cout<<" Recursive ractorial of"<<numbre<<"is:"<<recursiveResult<<endl;
     return 0;
}