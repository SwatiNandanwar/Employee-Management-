#include<iostream>
using namespace std;

class employee //polymorphism
{
	public:
		virtual void info()
		{
			cout<<"EMPLOYEE MANAGAMENT"<<endl;
			int age;
			string no;
			string name;
			string gender;
			cout<<"Enter the employee's name: "<<endl;
			cin>>name;
			cout<<"Enter the employee's number: "<<endl;
			cin>>no;
			cout<<"Enter the employee's age: "<<endl;
			cin>>age;
			cout<<"Enter the employee's gender: "<<endl;
        	cin>>gender;
		}
};


class qualification: public employee 
{
	public:
		void info()
		{
			string degree;
			cout<<"Highest degree achieved: "<<endl;
			cin>>degree;
		}
};
class salary : public employee 
{
	public:
		int s;
	
};
class Bonus : public salary//inheritance
{
	public:
		int b;	
};
template <class hours>      //template
hours calculate(hours a)
{
    return a/15;
}
class Resignation   //pointers to object
{
    int yrs;
	public:
		
		void display()
		{
			cout<<"Enter number of years you worked for the company :"<<endl;
	        cin>>yrs;
			if(yrs>3)
			{
				cout<<"you can resign"<<endl;
			}
			else
			{
				cout<<"you cant resign"<<endl;
			}
		}
		
};

int main()
{
    int age,a,n;
	employee *e;          
	employee emp;        
	e=&emp;
	e->info();
	
	qualification qua;
    e=&qua;
    e->info();
    
    Bonus obj;
	cout<<"Enter your salary = "<<endl;
	cin>>obj.s;
	cout<<"Enter the bonus (in percentage) = "<<endl;
	cin>>obj.b;
	int total;
	total = obj.s+((obj.s*obj.b)/100);
	cout<<"Total salary = "<<total<<endl;
	try                                              //exception handling
	{
		cout<<"We are in try block"<<endl;
		if(total<500000)
		{
			throw string("Eligible for loan");                            
		}
		if(total>500000)
		{
			throw string("Not eligible for loan");
		}
	}
	catch(string total)
	{
		cout<<"Exception caught"<<endl;
		cout<<"Error: "<<total<<endl;
	}
	cout<<"Finish"<<endl;
	cout<<"Enter the number of extra hours worked : "<<endl;
	cin>>a;
	cout<<"no of leaves employee can get: "<<calculate(a)<<endl;
    Resignation res,*p;
    
    p=&res;
	p->display();
	return(0);
}
