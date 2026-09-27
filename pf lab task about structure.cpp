#include<iostream>
#include<string>
using namespace std;
	struct car 
	{
	int model;
	char Class ;
	string name ;
	string company;
	 	
	} ;
int main (){
	car c1 , c2;
	c1.model= 2021;
	c1.Class= 's';
	c1.name= "civic";
	c1.company= "honda";
cout<<"A car details "<<endl;
cout <<c1.model<<endl<<c1.Class<<endl<<c1.name<<c1.company;
return 0;	
}