
#include<iostream>
using namespace std;

class Shape{
    double Circumference,area,sq_area,height,base,tr_area;
    const float pi = 3.14;

 public:

 int calculateCircleRadius(){

    cout<<"Enter the Circumference is  ";
    cin>>Circumference;
    
double circle_radius;


circle_radius = (Circumference/(2*pi));

cout<<"Circle of radius is  : "<<circle_radius<<endl;
    
 }

 int  Calculate_Square_Area(){
    cout<<"Enter the Area to Calculate Square Area : ";
    cin>>area;
 
 sq_area = area*area;

 cout<<"Square Area is : "<< sq_area<<endl; 

 }

 int  Calculate_Triangle_Area(){
 cout<<"Enter the height to  Calculate Triangle Area : ";
 cin>>height;

 cout<<"Enter the base to  Calculate Triangle Area : ";
 cin>>base;

tr_area = (height*base)/2;

cout<<"Triangle Area is : "<<tr_area<<endl;

 }
};

int main(){
int choice;
Shape obj;

cout<<"Prees 1 to Calculate Circle Radius ."<<endl;
cout<<"Prees 2 to Calculate Square Area ."<<endl;
cout<<"Prees 3 to Calculate Triangle Area ."<<endl;
cout<<"             Enter the choices is : ";
cin>>choice;

switch (choice)
{
case 1:
   obj.calculateCircleRadius();
    break;
case 2:
obj.Calculate_Square_Area();
break;
case 3:
obj.Calculate_Triangle_Area();
break;
default:
    break;
}


return 0;
}