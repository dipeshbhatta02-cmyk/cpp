
#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;

public:
    Rectangle(int l, int w);
    int area();
};

Rectangle::Rectangle(int l, int w) {
    length = l;
    width = w;
}

inline int Rectangle::area() {
    return length * width;
}

int main() {
    Rectangle r(10, 5);
    cout << r.area() << endl;
    return 0;
}
