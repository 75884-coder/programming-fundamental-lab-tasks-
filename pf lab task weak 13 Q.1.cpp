#include<iostream>
using namespace std ;
struct car {
string name ;
string modle ;
int make ;
	
};
int main () {
	 car carmy ;
	carmy.name=" BMW ";
	carmy.make= 2025 ;
	carmy.modle="m5 compitition";
  cout <<"name of the car :"<<carmy.name<<endl;
  cout <<"make of the car :"<<carmy.make<<endl;
  cout<<"model of the car :"<<carmy.modle<<endl;	
  return 0;
}

