#include<iostream>
using namespace std;
class student{
	int smester;
	float cgpa;
	string name;
		student(float cgpa, int semester) 
		{
//			this->cgpa=cgpa;
//			this->smester=smester;
            cgpa=c;
            smester=s;
		}
		student(string n,int m,float s)
		{
		name=n;
		smester=m;
		cgpa=s;
		}
		void display()
		{
			cout<<"The cgpa is "<<cgpa<<endl;
			cout<<"The smester is "<<smester<<endl;
		}
		void displays()
		{
			cout<<"the name is "<<name<<endl;
			cout<<"smester is "<<smester<<endl;
		    cout<<"cgpa  is "<<cgpa<<endl;
		}
				//copy constructor
	student (student &std)
	{
		sapid=std.sapid;
		name=std.name;
		semester=std.semester;
		cgpa=std.cgpa;
		
	}
	//destructor
	~student(){
		cout<<"destructor of student is running:"<<endl;
	}

   delete_sapid;
};
int main()
{
	student s1(2.5,2);
	s1.display();
	student s2("laraib",3,3.5);
	s2.displays();
}



