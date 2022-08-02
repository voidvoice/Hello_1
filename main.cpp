#include <iostream>
using namespace std;
class Details
{
protected:
    string name;
    string address;
    int age;
public:

    void detailInput()
    {
        cout<<"Enter name address and age"<<endl;
        cin>>name>>address>>age;
    }
};
class Teacher:public Details
{
private:
    int salary;
public:
    void teacherInput()
    {
        cout<<"Enter the salary of teacher"<<endl;
        cin>>salary;
    }
    void teacherOutput()
    {
        cout<<"Name "<<name<<" Age: "<<age<<" Address: "<<address<<" Salary: "<<salary<<endl;
    }
};
class Student:public Details
{
private:
    int mark;
public:
    void studentInput()
    {
        cout<<"Enter the mark of student"<<endl;
        cin>>mark;
    }
    void studentOutput()
    {
        cout<<"Name "<<name<<" Age: "<<age<<" Address: "<<address<<" Mark: "<<mark<<endl;
    }
};
int main()
{
    Teacher tObj;
    tObj.detailInput();
    tObj.teacherInput();
    tObj.teacherOutput();
    return 0;
}
