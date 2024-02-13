#include<iostream>
using namespace std;

int main(){
  char a,b;
  cout<<"Enter the first character: ";
  cin>>a;
  cout<<"Enter the second character: ";
  cin>>b;
  int Diff = (int)a - (int)b
  if(Diff<0){
    Diff = -Diff;
  }
    cout<<"The difference between the ASCII values of the given character is "<<Diff;
  return 0;
}
