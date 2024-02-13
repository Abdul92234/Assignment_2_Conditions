#include<iostream>
using namespace std;

int main(){
  float radius, height;
  cout<<"Enter the radius of Cylinder: ";
  cin>>radius;
  cout<<"Enter the height of Cylinder: ";
  cin>>height;
  float volume = 3.14*radius*radius*height;
  cout<<"The volume of the Cylinder is "<<volume;
  return 0;
}
