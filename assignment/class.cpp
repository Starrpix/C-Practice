//Arbin Chhatkuli : BCA 3rd Semester

/*Create a class name Employee that has two fields: emp_id , name,hr,dra and salary and creates an object of Employee, 
 initializes the object and prints the object value.*/

#include<iostream>
using namespace std;
class employee
{
	int emp_id;
	string name;
	double hr;
	double dra;
	double salary;
	public:
		employee(int id, string n, double HR, double DRA, double s)
		{
			emp_id=id;
			name=n;
			hr=HR;
			dra=DRA;
			salary=s;
		}
		void displayData()
		{
			cout<<"Employee ID : "<<emp_id<<endl;
			cout<<"Employee Name : "<<name<<endl;
			cout<<"Hourly Rate : Rs."<<hr<<endl;
			cout<<"Allowance : Rs."<<dra<<endl;
			cout<<"Salary : Rs."<<salary<<endl;
		}
};
int main()
{
	employee e1(2301,"Arbin", 32.6, 60, 9600);
	e1.displayData();
    return 0;
}
