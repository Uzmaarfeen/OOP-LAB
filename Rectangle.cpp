#include <iostream>
using namespace std;
class rectangle
{
private:
    int length;
    int width;
public:
    rectangle(){
        length=0;
        width=0;
    }
    rectangle(int l){
        length=l;
        width=0;
    }
    rectangle(int l, int w){
        length=l;
        width=w;
    }
    int getSqArea(){
        return length*length;
    }
    int getRectArea(){
        return length*width;
    }};
   int main(){
    rectangle obj1(10);
    rectangle obj2(11,12);
    cout << obj1.getSqArea()<< endl;
    cout << obj2.getRectArea()<< endl;
    return 0;
   }

