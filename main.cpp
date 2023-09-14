#include <iostream>
using namespace std;

class Point {
public :
    Point(){
        x = 0;
        y = 0;
    }
    Point(int a,int b){
        x = a;
        y = b;
    }
    void print(){
        cout<<"[ "<<x<<" , "<<y<<" ] "<<endl;
    }

private:
    int x;
    int y;
};
int main() {
    Point point;
    Point point1(10,12);
    point.print();
    point1.print();
    return 0;
}
