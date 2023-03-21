#include<iostream>
using namespace std;
class Elevator{
	private:
	int id;
	int max load;
	string company name;
	string current floor;
	int modle;
	string current location;
	
	public:
		Elevator(){
			this->company name = 0;
			this->max load = " ";
			this->current location = " ";
			this->model=0;
			this->id=0;
		cout<<"null constructor is running:"<<endl;
		
		Elevator(string company name,int max load,string current location,int modle,int id){
		this->company name=company name;
		this-> max load=max load;
		this-> current location=current location;
		this->modle=modle;
		this->id=id;
		cout>>"parametric constructor is running:"<<endl;		
	}
	~Elevator(){
		cout<<"destructor is running:"<<endl;
	}
	void get company name(){
		this->company name=company name;
	}
	string set company name(){
		return company name;
	}
	void getmaxload(){
			this->maxload=maxload;
		}
		string setmaxload(){
			return maxload;
		}
		void getcurrentlocation(){
			this->currentlocation = currentlocation;
		}			
			}			
		string setcurrentlocation(){
			return currentlocation;
		}
			string setcolor(){
			return color;
		}
			void getmodel(){
			this->model = model;
		}			
		string setmodel(){
			return model;
		}	void getID(){
			this->ID = ID;
		}			
		string setID(){
			return ID;
		}
		void display(){
			cout<<"companyname:"<<companyname<<endl;
			cout<<"maxload:"<<maxload<<endl;
			cout<<"current location:"<<current location<<endl;
			cout<<"color:"<<color<<endl;
			cout<<"model:"<<mode<<endl;
			cout<<"ID:"<<ID<<endl;
		}

};
		
	

		




