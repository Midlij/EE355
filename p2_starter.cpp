#include <iostream>
using namespace std;

class Person{
    protected:
        string name;
        int age;
    public:
        Person(string n, int a){
            name = n;
            age = a;
        }
        Person(){
            name = "";
            age = -1;
        }
        virtual void print_message(){
            cout << "---------------\n";
            cout << "Name: " << name << "\n";
            cout << "Age: " << age << "\n";
        }
};

class Student: public Person{
    private:
        string school;
        string major;
    public:
        Student(string a, int b, string x, string y)
        {
            name = a;
            age = b;
            school = x;
            major = y;
        }
        void print_message(){
            cout << "---------------\n";
            cout << "Name: " << name << "\n";
            cout << "Age: " << age << "\n";
            cout << "school: " << school << "\n";
            cout << "major: " << major << "\n";
        }
};

int main(){
    
    //  * Use these lines to test your code
    Person p1("Tommy",28);
    p1.print_message();

    Student s1 = Student("Anna",22,"USC","EE");
    Person *p2 = &s1;
    p2->print_message();

}

