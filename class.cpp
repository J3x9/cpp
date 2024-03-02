#include <iostream>
using namespace std;

class students // class created
{
public:
    string name;
    int age;
    bool gender;
};

int main()
{
    bool x=false;
    cout<<"";
    
    // do{
       
    // } while (!x);
    
    students s1, s2;
    system("cls");
    cout << "Enter Student 1 Name: ";
    cin >> s1.name;
    cout << "Enter Student 1 Age: ";
    cin >> s1.age;
    cout << "Enter Student 1 Gender: Male-1 / Female-0: \n Choose: ";
    cin >> s1.gender;

    cout << "Enter Student 2 Name: ";
    cin >> s2.name;
    cout << "Enter Student 2 Age: ";
    cin >> s2.age;
    cout << "Enter Student 2 Gender: Male-1 / Female-0: \n Choose: ";
    cin >> s2.gender;

    system("cls");
    cout<<"**********Student 1***************"<<endl;
    cout << "Student 1 Name: " << s1.name << endl;
    cout << "Student 1 Age: " << s1.age << endl;
    if (s1.gender == 1)
        {cout << "Student 1 Gender: Male ";}
    else
        {cout << "Student 1 Gender: Female ";}
    cout<<endl;
    cout<<endl;
    cout<<"**********Student 2***************"<<endl;
    cout << "Student 2 Name: " << s2.name << endl;
    cout << "Student 2 Age: " << s2.age << endl;
    if (s2.gender == 1)
        cout << "Student 2 Gender: Male ";
    else
        cout << "Student 2 Gender: Female ";

    return 0;
}
