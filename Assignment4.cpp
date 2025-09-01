#include <iostream>
using namespace std;

class comp {
   
    friend istream& operator>>(istream &, comp &);
    friend ostream& operator<<(ostream &, const comp &);

private:
    float real, imaginary;

public:
    comp() : real(0), imaginary(0) {}

   
    comp operator+(const comp &c) const {
        comp temp;
        temp.real = real + c.real;
        temp.imaginary = imaginary + c.imaginary;
        return temp;
    }

    comp operator*(const comp &c) const {
        comp temp;
        temp.real = (real * c.real) - (imaginary * c.imaginary);
        temp.imaginary = (real * c.imaginary) + (imaginary * c.real);
        return temp;
    }
};


istream& operator>>(istream &in, comp &obj) {
    cout << "Enter Real Number: ";
    in >> obj.real;
    cout << "Enter Imaginary Number: ";
    in >> obj.imaginary;
    return in;  
}


ostream& operator<<(ostream &out, const comp &obj) {
    out << obj.real;
    if (obj.imaginary >= 0)
        out << "+";
    out << obj.imaginary << "i";  
    return out;
}

int main() {
    comp C1, C2, result1, result2;

    cout << "Enter Number 1:\n";
    cin >> C1;

    cout << "Enter Number 2:\n";
    cin >> C2;

    result1 = C1 + C2;
    result2 = C1 * C2;

    cout << "Number 1 is: " << C1 << "\n";
    cout << "Number 2 is: " << C2 << "\n";
    cout << "Addition: " << result1 << endl;
    cout << "Multiplication: " << result2 << endl;

    return 0;
}
