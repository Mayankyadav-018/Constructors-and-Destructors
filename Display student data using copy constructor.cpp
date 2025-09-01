/*Name - Mayank yadav
  PRN - 24070123060
  Class - ENTC A-3
  Date - 28/8/2025 */
#include <iostream>
using namespace std;

class Student{
    int age;
    string name;
    string branch;
public:
Student(string n,int a,string b){
    name = n;
    age = a;
    branch = b;
}
Student(const Student &s){
    name = s.name;
    age = s.age;
    branch = s.branch;
}
void display(){
    cout << "Name:" << name << endl << "Age:" << age << endl<< "Branch:"<<branch << endl;
}
};

int main(){
    string n;
    int a;
    string b;
    cout << "DETAILS OF STUDENTS:\n";
    cout << "Enter your name:";
    cin >> n;
    cout << "Enter your age:";
    cin >> a;
    cout << "Enter your branch:";
    cin >> b;
    cout << "Details of 1st Student:\n";
    Student s1(n,a,b);
    s1.display();
    cout << "Details of 1st Student using copy constructor:\n";
    Student s2 = s1;
    s2.display();
    
    return 0;
}


/*OUTPUT
DETAILS OF STUDENTS:
Enter your name:Mayank
Enter your age:19
Enter your branch:ENTC
Details of 1st Student:
Name:Mayank
Age:19
Branch:ENTC
Details of 1st Student using copy constructor:
Name:Mayank
Age:19
Branch:ENTC
  */
