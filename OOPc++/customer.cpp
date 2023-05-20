#include<iostream>
using namespace std;
class Student
{
 string name;
 int age,roll;
 static int count;
 public:
 void setData();
 void getData();
};
int Student::count;
void Student::setData()
{
    cout<<"Enter the name of the student "<<count<< " :"<<endl;
    cin>>name;
    cout<<"Enter the Age of "<< name <<" :" <<endl;
    cin>>age;
    cout<<"Enter the Roll of "s<<name<<" :"<<endl;
}
void Student::getData()
{
    cout<<name<<"\t"<<age<<"\t"<<roll<<endl;
}
int main()
{
Student stu1;
stu1.setData();
stu1.getData();
} 