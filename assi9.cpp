INPUT : 
#include <iostream>
#include <map>
using namespace std;
struct Student {
    char name[50];
};
int main() {
    map<long long, Student> studentMap;
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        long long prn;
        char temp[50];
        cout << "\nEnter PRN of student " << i + 1 << ": ";
        cin >> prn;
        cout << "Enter name of student " << i + 1 << ": ";
        cin >> ws; // ignore whitespace
        cin.getline(temp, 50);
        // Manual copy of name 
        Student s;
        int j = 0;
        while (temp[j] != '\0' && j < 49) {
            s.name[j] = temp[j];
            j++;
        }
        s.name[j] = '\0'; 
        studentMap[prn] = s;
    }
    cout << "\n--- Student Database Created ---\n";
    long long searchPRN;
    cout << "\nEnter PRN to search: ";
    cin >> searchPRN;
    auto it = studentMap.find(searchPRN);
    if (it != studentMap.end()) {
        cout << "Student Found! Name: " << it->second.name << endl;
    } else {
        cout << "Student with PRN " << searchPRN << " not found." << endl;
    }
    return 0;
}
