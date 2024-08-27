#include <iostream>
using namespace std;
class Marks{
    private:
    int rno;
    float perc;
    public:
    Marks(){
        rno= 0;
        perc=0; 
    }
    Marks(int r, float p){
        rno= r;
        perc= p;
    }
    void printDetails(){
        cout<<"Roll no:"<<rno<<endl;
         cout<<"Percentage:"<<perc<<endl;
    }    
};
class Student{
    private:
    Marks objM;
    string name;
    public:
    void SetName(){
        cout<<"Enter the name:"<<endl;
        cin>>name;
    }
    void getResults(Marks obj){
        objM= obj;
        cout<<name;
        objM.printDetails();
    }
};
int main(){
    Marks Mks[5]= {Marks(2001,81),
    Marks(2002,53),
    Marks(2003,87), 
    Marks(2004,67), 
    Marks(200,47) };
    Student std[5];
    for(int i=0; i<5; i++){
        std[i].SetName();
    }
    for(int i=0; i<5; i++ ){
        std[i].getResults(Mks[i]);
    }
    
}
