#include <iostream>
using namespace std;

class Student{
    public:
    //attributes
    string name;
    int age;
    int rollno;
    char gender;
    int *gpa;

    //default constructor
    Student(){
        cout<<"Student constructor called"<<endl;
    }

    //parameterised constructor
    Student(string name, int age, int rollno, char gender, int gpa){
        cout<<"Parameterised Constructor is called"<<endl;
        this->name = name;
        this->age = age;
        this->rollno = rollno;
        this->gender = gender;
        //dynamic allocation
        this->gpa = new int(gpa);
    }

    //copy constructor
    Student(const Student &srcobj){
        cout<<"Copy Constructor is called"<<endl;
        //this points to current Object C 
        // srcobj is Object A
        this->name = srcobj.name;
        this->age = srcobj.age;
        this->rollno = srcobj.rollno;
        this->gender = srcobj.gender;
        //this->gpa = srcobj.gpa;
    }



    void study(){
        cout<<this->name<<" is studying"<<endl;
    }

    void sleep(){
        cout<<this->name<<" is sleeping"<<endl;
    }
    
    ~Student(){
        cout<<this->name<<" object Destroyed"<<endl;
        delete this->gpa;
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

    Student B = Student("Aarav", 21, 107, 'M', 9); //Stack - objects defined on stack 
    B.study();
    //B.sleep();

    // Student C("Neha", 22, 108, 'F');
    // C.sleep();

    //using copy constructor
    Student C  = B;
    cout<<C.name<<" "<<B.name<<endl;

    //Stack - objects defined on stack 
    //Dynamic allocation of memory using - new keyword
    Student *s = new Student("Neha", 22, 108, 'F', 8);
    cout<<s->age<<endl;
    cout<<s->name<<endl;
    //PROBLEM - dynamic allocation me destructor by default call nhi hota
    delete s;

    return 0;
}