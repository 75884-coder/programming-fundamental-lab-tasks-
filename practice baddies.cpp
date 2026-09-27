#include<iostream>
using namespace std ;
int main ()
{
	int choice ;
	char rep;
	do{
	cout <<"1.goth baddie"<<endl;
	cout <<"2.rashian baddie"<<endl;
	cout <<"3.muslim baddie"<<endl;
	cout <<"4.japnies baddie"<<endl;
	cin >>choice;
	switch (choice)
	{
	case 1:
		cout<<"tara ghar jaya ga "<<endl;
		break;
		
	case 2:
		cout<<"kala lora pakar"<<endl;
		break;

	case 3:
		cout<<"aaag ma ka bosra aaag"<<endl;
		break;
	case 4:
		cout<<"banchoodddd"<<endl;
		break;
	default :
		cout<<"Arey bhai kya kr rahe ho "<<endl;
		break;
	}
	cout << "do you want more baddies"<<endl;
	cin >> rep;
	}while (rep=='y'||rep=='Y');
	return 0;

}
