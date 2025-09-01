#include <iostream>
using namespace std;

class staff {
protected:
    string name, dept;
    int staff_id;
public:
    void accept();
    void display();
};

void staff::accept() {
    cout << "Enter Staff Name: ";
    cin >> name;
    cout << "Enter Staff Id: ";
    cin >> staff_id;
    cout << "Enter Staff Department: ";
    cin >> dept;
}

void staff::display() {
    cout << "Name: " << name << endl;
    cout << "Staff Id: " << staff_id << endl;
    cout << "Department: " << dept << endl;
}

class teacher : public staff {
    string role, experience;
public:
    void accept2();
    void display2();
};

void teacher::accept2() {
    accept();
    cout << "Enter Staff Role: ";
    cin >> role;
    cout << "Enter Staff Experience (in years): ";
    cin >> experience;
}

void teacher::display2() {
    display();
    cout << "Staff Role: " << role << endl;
    cout << "Staff Experience (in years): " << experience << endl;
}

class support : public staff {
    string rolee, section;
public:
    void accept3();
    void display3();
};

void support::accept3() {
    accept();
    cout << "Enter Support Staff Role: ";
    cin >> rolee;
    cout << "Enter Staff Section: ";
    cin >> section;
}

void support::display3() {
    display();
    cout << "Staff Section: " << section << endl;
    cout << "Support Staff Role: " << rolee << endl;
}

int main() {
    int t,s;
    cout << "Enter Number Of Teachers: ";
    cin >> t;
    cout << "Enter Number Of Support Staff: ";
    cin >> s;
    support obj[s];
    teacher obj1[t];  

    cout << "\n Enter Teacher Info \n";
    for (int i = 0; i < t; i++) {
        cout << "Teacher " << i + 1 << endl;
        obj1[i].accept2();
    }
    cout<<"---------------------------------------------------------------------------"<<endl;
     cout << "\n Enter Support Staff Info \n";
    for (int i = 0; i < s; i++) {
        cout << "Support Staff " << i + 1 << endl;
        obj[i].accept3();
    }
     cout<<"---------------------------------------------------------------------------"<<endl;
    cout << "Displaying Teacher Info\n";
    for (int i = 0; i < t; i++) {
        cout << "Teacher " << i + 1 << endl;
        obj1[i].display2();
    }
    cout<<"---------------------------------------------------------------------------"<<endl;
    cout << "Displaying Support Staff Info\n";
    for (int i = 0; i < s; i++) {
        cout << "Support Staff " << i + 1 << endl;
        obj[i].display3();
    }
    cout<<"---------------------------------------------------------------------------"<<endl;

    return 0;
}



