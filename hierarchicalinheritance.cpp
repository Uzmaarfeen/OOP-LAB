#include <iostream>
using namespace std;
class Person{
    char name[30];
    public:
    void read(){
        cout<<"Enter Name:";
        cin>>name;
    }
    void display(){
        cout<< "Name"<< name<< endl;
    }
};
class Sport: public Person{
    int m;
    public:
    void display(){
    cout<< m;
    Person:: display();
    }
};
class student: public Person{
    public:
    void display(){
        Person:: display();
    }
};
int main(){
    Sport sp;
    student st;
    sp. read();
    st. read();
    sp. display();
    st. display();
    return 0;
}
    