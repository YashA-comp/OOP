#include <iostream>
using namespace std;

class Em_id {
    string name, address, department, doj;
    int emp_id;
    long tel_no;
    static int count;

public:
    inline void employ() {
        cout << "\nEmployee Record System\n";
    }

    static void emp_count() {
        cout << "Total Employees: " << count << "\n";
    }

    Em_id() {
        cout << "\nDefault Constructor\n";
        name = "Unknown";
        emp_id = 0;
        department = "Unknown";
        address = "Unknown";
        tel_no = 0;
        doj = "DD/MM/YYYY";
        count++;
    }

    Em_id(string na, int id, string dept, string add, long no, string date) {
        cout << "Parameterized Constructor\n";
        name = na;
        emp_id = id;
        department = dept;
        address = add;
        tel_no = no;
        doj = date;
        count++;
    }

    Em_id(const Em_id &e) {
        cout << "\nCopy Constructor\n";
        name = e.name;
        emp_id = e.emp_id;
        department = e.department;
        address = e.address;
        tel_no = e.tel_no;
        doj = e.doj;
        count++;
    }

    ~Em_id() {
        count--;
        cout << "\nDestructor for Employee ID: " << emp_id << "\n";
    }

    void display() {
        cout << "\n--- Employee Details ---\n";
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << emp_id << endl;
        cout << "Department: " << department << endl;
        cout << "Address: " << address << endl;
        cout << "Contact Number: " << tel_no << endl;
        cout << "Date of Joining: " << doj << endl;
    }
};

int Em_id::count = 0;

int main() {
    string name, dept, address, joining_date;
    int emp_id;
    long contact_no;

    cout << "Enter Employee Details:\n";

   
    cout << "Name: ";
    cin >> name;  

    cout << "Employee ID: ";
    cin >> emp_id;

   
    cin.ignore();

    cout << "Department: ";
    cin >> dept;  

    cout << "Address: ";
    cin >> address;  
    cout << "Contact Number: ";
    cin >> contact_no;

    cout << "Date of Joining (DD/MM/YYYY): ";
    cin >> joining_date;

   
    Em_id employee(name, emp_id, dept, address, contact_no, joining_date);

    employee.employ();
    Em_id::emp_count();
    employee.display();

    Em_id copied_employee(employee);
    Em_id::emp_count();
    copied_employee.display();

    Em_id default_employee;
    Em_id::emp_count();
    default_employee.display();

    Em_id *ptr = new Em_id("Piyush", 23, "Electrical", "MMCOE", 1234567889, "20/01/2025");
    cout << "Displaying New Employee:\n";
    ptr->display();
    delete ptr; 

    return 0;
}
