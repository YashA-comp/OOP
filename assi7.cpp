#include <iostream>
#include <fstream>
using namespace std;

class Inventory {
private:
    string item_name;
    int item_id;
    float price;
    int quantity;

public:
    void accept() {
        cout << "\nEnter Item ID: ";
        cin >> item_id;
        cin.ignore();
        cout << "Enter Item Name: ";
        getline(cin, item_name);
        cout << "Enter Price: ";
        cin >> price;
        cout << "Enter Quantity: ";
        cin >> quantity;
    }

    void display() {
        cout << "\nItem ID: " << item_id;
        cout << "\nItem Name: " << item_name;
        cout << "\nPrice: " << price;
        cout << "\nQuantity: " << quantity << endl;
    }

    void writeToFile(ofstream &fout) {
        fout << item_id << endl;
        fout << item_name << endl;
        fout << price << endl;
        fout << quantity << endl;
    }

    void readFromFile(ifstream &fin) {
        fin >> item_id;
        fin.ignore();
        getline(fin, item_name);
        fin >> price;
        fin >> quantity;
        fin.ignore();
    }
};

int main() {
    int n;
    cout << "Enter number of items: ";
    cin >> n;
    cin.ignore();

    Inventory items[50];
    for (int i = 0; i < n; i++) {
        cout << "\n--- Enter details for item " << i + 1 << " ---\n";
        items[i].accept();
    }

    ofstream fout("inventory.txt");
    if (!fout) {
        cout << "Error opening file for writing!" << endl;
        return 1;
    }

    for (int i = 0; i < n; i++) {
        items[i].writeToFile(fout);
    }
    fout.close();

    cout << "\nAll records written to file successfully.\n";

    ifstream fin("inventory.txt");
    if (!fin) {
        cout << "Error opening file for reading!" << endl;
        return 1;
    }

    cout << "\n--- Reading Records From File ---\n";
    for (int i = 0; i < n; i++) {
        items[i].readFromFile(fin);
        items[i].display();
    }

    fin.close();
    return 0;
}
