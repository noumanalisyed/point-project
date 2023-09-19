#include <iostream>
using namespace std;

class Point {
public :
    Point(){
        x = 0;
        y = 0;
        cout<<"Point -- Default constructor called"<<endl;
    }
    Point(int a,int b){
        x = (a >= 0 && a <= 100) ? a : 0;
        y = (b >= 0 && b <= 100) ? b : 0; // ternary operator
        cout<<"Point -- Overloaded constructor called"<<endl;
    }
    void print(){
        cout<<"[ "<<x<<" , "<<y<<" ] "<<endl;
    }

    int getX(){
        return x;
    }
    void setX(int a){
        x = (a >= 0 && a <= 100) ? a : 0;
    }
    int getY(){
        return y;
    }
    void setY(int a){
        y = (a >= 0 && a <= 100) ? a : 0;
    }
private:
    int x;
    int y;
};
int main() {
    Point point;
    Point point1(110,90);
    point.print();
    point1.print();
   // point1.y = 990;
    point1.print();
    point.setX(199);
    point.setY(210);
    point.print();
    return 0;
}
