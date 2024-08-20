#include <iostream>
using namespace std;
class Circle{
    private: 
      float radius;
      const float PI= 3.14;
      static int count;
    public:
    Circle(){
        radius=0.0;
    }
    Circle (float r){
        radius= r;
    }
    float circleArea(){
        return PI* radius * radius;
    }
    float circCircumference(){
        return 2* PI * radius;
    }
    static int counter(){
        return count;
    }
};
int Circle :: count =0;
 int main() {
    Circle c1;
    Circle c2(3.0);
    Circle c3(6.0);
    cout << "Area of circle c1:" << c1.circleArea() << endl;
    cout << "Circumference of circle c1:" << c1.circCircumference() << endl;

    cout << "Area of circle c2:" << c2.circleArea() << endl;
    cout << "Circumference of circle c2:" << c2.circCircumference() << endl;

    cout << "Area of circle c3:" << c3.circleArea() << endl;
    cout << "Circumference of circle c3:" << c3.circCircumference() << endl;
    return 0;
}