#include<iostream>
using namespace std ;
struct car {
	string model ;
	string company ;
	int price ;
};
int main () {
	int choice;
	char again ;
	do{
	car car1={"honda","civic",8500000} ;
	car car2={"toyota","maxk x",9000000};
	car car3={"nesan","GTR",1000000};
	car car4={"doge","chaleger",15000000};

cout <<"sellect a car "<<endl;
cout <<"1.honda civic"<<endl;
cout <<"2.toyota mark x"<<endl;
cout <<"3.nesan GTR"<<endl;
cout <<"4.doge chaleger"<<endl;
cin >>choice;
switch(choice) {
	case 1:
		cout<<"car company:"<<car1.company<<endl;
		cout<<"car model: "<<car1.model<<endl;
		cout<<"car price:"<<car1.price<<endl;
		break;
	case 2:
		cout<<"car company:"<<car2.company<<endl;
		cout<<"car model: "<<car2.model<<endl;
		cout<<"car price:"<<car2.price<<endl;
		break;
	case 3:
		cout<<"car company:"<<car3.company<<endl;
		cout<<"car model; "<<car3.model<<endl;
		cout<<"car price:"<<car3.price<<endl;
		break;
	case 4:
		cout<<"car company:"<<car4.company<<endl;
		cout<<"car model: "<<car4.model<<endl;
		cout<<"car price:"<<car4.price<<endl;
		break;
	default:
		cout <<"sorry we dont have this one ";
		break ;
}
        cout<<"do you want more car"<<endl;
        cin >>again;
}
    while (again=='y');
    return 0;
}