#include <iostream>
using namespace std;

class Student{
    public:
    //attributes
    string name;
    int age;
    int rollno;
    char gender;

    //default constructor
    Student(){
        cout<<"Student constructor called"<<endl;
    }

    //parameterised constructor
    Student(string name, int age, int rollno, char gender){
        cout<<"Parameterised Constructor is called"<<endl;
        this->name = name;
        this->age = age;
        this->rollno = rollno;
        this->gender = gender;
    }

    //copy constructor
    

    void study(){
        cout<<this->name<<" is studying"<<endl;
    }

    void sleep(){
        cout<<this->name<<" is sleeping"<<endl;
    }

    
};

int main(){
    // Student A;
    // A.name="Harshita";
    // A.age = 21;
    // A.rollno = 105;
    // A.gender  = 'F';
    // A.study();
    // A.sleep();

    Student B = Student("Aarav", 21, 107, 'M');
    B.study();
    //B.sleep();

    Student C("Neha", 22, 108, 'F');
    C.sleep();
    return 0;
}