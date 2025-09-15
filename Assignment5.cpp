#include <iostream>
using namespace std;
class Shape {
protected:
    float x, y;
public:

    virtual void get_data() {
        cout << "Enter 1st Dimension: ";
        cin >> x;
        cout << "Enter 2nd Dimension: ";
        cin >> y;
    }
    
    virtual void display() = 0;
};


class Tri : public Shape {
    float area;
public:
    void display()  {
        area = 0.5 * x * y;
        cout << "Area of Triangle: " << area << endl;
    }
};

class Rect : public Shape {
    float area;
public:
    void display()  {
        area =  x * y;
        cout << "Area of Rectangle: " << area << endl;
    }
};

int main() {
    Shape* st;  
    Tri t;  
    st = &t; 
    st->get_data(); 
    st->display();   
     Shape*rect;  
    Rect p;  
    rect= &p; 
    rect->get_data(); 
    rect->display();  
    return 0;
}
