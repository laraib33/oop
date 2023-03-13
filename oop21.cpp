#include<iostream>
#include<fstream>
using namespace std;
struct data{
	int sapid;
	int semester;
	float cgpa;
	string name;
}vip;
void display()
{
	fstream studentdata;
	studentdata.open("Sample.txt",ios::out);
	studentdata<<vip.sapid<<endl;
	studentdata<<vip.semester<<endl;
	studentdata<<vip.cgpa<<endl;
	studentdata<<vip.name<<endl;
	studentdata.close();
	
	cout<<endl;
}
int main()
{
int data;
	while (true)
	{
	cout<<"Press 1 "<<endl;
	cout<<"Press 2 "<<endl;
	cout<<"Press 3 "<<endl; 
	cout<<"Enter a Number :";
	cin>>data;
	
	switch (data)
	{
	case 1:
	cout<<"Name: ";
	cin>>vip.name;
	cout<<"Semester: ";
	cin>>vip.semester;
	cout<<"CGPA: ";
	cin>>vip.cgpa;
	cout<<"Sap ID: ";
	cin>>vip.sapid;
	cout<<endl;
	break;
	case 2:
		cout<<vip.name<<endl;
		cout<<vip.semester<<endl;
		cout<<vip.cgpa<<endl;
		cout<<vip.sapid<<endl;
		break;
	case 3:
		vip.sapid=1;
		vip.semester=0;
		vip.cgpa=0.1;
		vip.name='.';
		break;
	}
}
	return 0;
}
