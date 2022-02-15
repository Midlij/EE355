#include <iostream>
using namespace std;

class Grade{
    //
    private:
        int grade;
    public:
        string name;
        void set_grade(string n, int g)
        {
            name = n;
            grade = g;
        }
        int get_grade()
        {
            return grade;
        }
};

class GradeBook{
    //Note: assume the length of array is fixed (8).
    private:
        Grade grade_arr[8];
    public:
        void set_value(int g[], string n[])
        {
            for(int i = 0; i< 8; i++)
            {
               grade_arr[i].set_grade(n[i], g[i]);
            }
        }
        void print_book()
        {
            for(int i = 0; i < 8; i++)
            {
                cout << "name: " << grade_arr[i].name << "  grade: " << grade_arr[i].get_grade() << endl;
            }
        }
        void print_top(int n)
        {
            if(n >= 8)
            {
                n = 8;
            }
            for(int i = 0; i < n; i++)
            {
                 cout << "name: " << grade_arr[i].name << "  grade: " << grade_arr[i].get_grade() << endl;
            }
        }
        GradeBook(int arrg[], string arrn[])
        {
           for(int i = 0; i < 8; i++)
            { 
                grade_arr[i].set_grade(arrn[i], arrg[i]);
            }
        }
};

int main(){
    int grades[8] = {80,87,92,91,29,68,76,88};
    string names[8] = {"a","b","c","d","e","f","g","h"};

    //Write your code here
    Grade student;
    student.set_grade("Omar", 11);
    // student.print_book();
    cout << student.name << "  " <<student.get_grade();
    cout << endl;

    // "set_value" function 
    cout << "'set value' function below: " << endl;
    GradeBook student2(grades, names);
    student2.set_value(grades, names);
    student2.print_book();
    cout << "First 20: " << endl;
    student2.print_top(20);
    // contructor
    cout << "Constructor output below: " << endl;
    GradeBook student3(grades, names);
    cout << "All grades printed: " << endl;
    student3.print_book();
    cout << "First 3: " << endl;
    student3.print_top(3);

    return 0;
}
