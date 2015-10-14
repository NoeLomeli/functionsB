// Name: Noe Lomeli
// Date: October 13, 2015
// Project: GitHub Functions
#include <iostream>
#include <string>
#include <cassert>
using namespace std;

double feetToInches(double val);//converts feet to inches
void feetToInch(double& val);// converts feet to inches void
double computeRectangle(double valA, double valB);//area of a rectangle
void computeArea(double valA, double valB, double& valC);//area of a rectangle void
void computePerimeter(double valA, double valB, double& valArea, double& valPerimeter); //computes area and perimeter 
void  stats(double valA, double valB, double valC, double valD, double& valE, double& valF); // computes average and sum of four numbers
void calcAreaPerimeter(double radius, double& area, double& perimeter);// calculates area and perimeter of a circle
double calcArea(double length, double width); // calculates area of a rectangle
int main ()
{

    assert(feetToInches(5) == 60);
    assert(feetToInches(-3) == -1);//if a negative number is given
    assert(feetToInches(5.5) == 66);
    double test1 = 5.5;
    double test2 = -5;    
    feetToInch(test1);
    cout << "test1 result expected: 66 -- " << test1 << endl;    
    feetToInch(test2);
    cout << "test2 result expected: -1 -- " << test2 << endl;
    
    
    assert(computeRectangle(5, 6) == 30);
    assert(computeRectangle(5, 0) == -1);//invalid input
    double test3a = 5;
    double test3b = 6;
    double valC = 0;    
    computeArea(test3a, test3b, valC);
    cout << "test3a result expected: 30 -- " << valC << endl;        
    double test4a = -5;
    double test4b = 6;
    double valD = -1;        
    computeArea(test4a, test4b, valD);
    cout << "test2 result expected: -1 -- " << valD << endl;
    
    double test5a = 5;
    double test5b = 6;
    double valArea1 = 0; 
    double valPerimeter1 = 0;       
    computePerimeter(test5a, test5b, valArea1, valPerimeter1);
    cout << "test3 result area expected: 30 -- " << valArea1 << endl;
    cout << "test3 result perimeter expected: 22 -- " << valPerimeter1 << endl;   
    double test6a = -3;
    double test6b = 6;
    double valArea = 0; 
    double valPerimeter = 0;       
    computePerimeter(test6a, test6b, valArea, valPerimeter);
    cout << "test3 result area expected: -1 -- " << valArea << endl;//invalid input
    cout << "test3 result perimeter expected: -1 -- " << valPerimeter << endl;
    
    double test7a = 23;
    double test7b = 6;
    double test7c = 9;
    double test7d = 2;
    double valE = 0; 
    double valF = 0;       
    stats(test7a, test7b, test7c, test7d, valE, valF);
    cout << "test4 result average expected: 10 -- " << valE << endl;
    cout << "test4 result sum expected: 40 -- " << valF << endl;
    double test8a = 23;
    double test8b = -6;
    double test8c = 9;
    double test8d = 0;
    double valG = 0; 
    double valH = 0;       
    stats(test8a, test8b, test8c, test8d, valG, valH);
    cout << "test5 result average expected: 6.5 -- " << valG << endl;
    cout << "test5 result sum expected: 26 -- " << valH << endl;
    
    double radius = 5;    
    double valI = 0; 
    double valJ = 0;       
    calcAreaPerimeter(radius, valI, valJ);
    cout << "test6 result area expected: 78.5 -- " << valI << endl;
    cout << "test6 result perimeter expected: 31.4 -- " << valJ << endl;
    double radius1 = -5;    
    double valK = 0; 
    double valL = 0;       
    calcAreaPerimeter(radius1, valK, valL);
    cout << "test6 result area expected: -1 -- " << valK << endl;
    cout << "test6 result perimeter expected: -1 -- " << valL << endl;//invalid input
     
    assert(calcArea(5, 6) == 30);
    assert(calcArea(5, 0) == -1);
    cout<< "it works" << endl;

    return 0;
}//main
double feetToInches(double val)
{  
    if (val > 0)
    {
       return (val * 12);        
    }//if
    else
        return -1;
   
}//feetToInches
void feetToInch(double& val)
{
    if (val > 0)
    {
        val = val * 12;
    }
    else
        val = -1;
    return;

}//feetToInch
double computeRectangle(double valA, double valB)
{
   
    if ((valA > 0) && (valB > 0))
    {
        return valA * valB;
    }
    else
        return -1;
    
}//computeRectangle
void computeArea(double valA, double valB, double& valC)
{
    if ((valA > 0) && (valB > 0))
    {
        valC = valA * valB;
    }
    else
        valC = -1;
    return;

}//computeArea
void computePerimeter(double valA, double valB, double& valArea, double& valPerimeter)
{
     if ((valA > 0) && (valB > 0))
    {
        valArea = valA * valB;
        valPerimeter = (2 * (valA + valB));
    }//if
    else
    {
        valArea = -1;
        valPerimeter = -1;
    }//else
    return;

}//computePerimeter
void  stats(double valA, double valB, double valC, double valD, double& valE, double& valF)
{
    valE = (valA + valB + valC + valD) / 4;
    valF = valA + valB + valC + valD;
    return;
}//stats
void calcAreaPerimeter(double radius, double& area, double& perimeter)
{
     const double PI = 3.14;
     if (radius > 0)
    {
        area = PI * radius * radius;
        perimeter = 2 * PI * radius;
    }//if
    else
    {
        area = -1;
        perimeter = -1;
    }//else
    return;   

}//calcAreaPerimeter
double calcArea(double length, double width)
{
     if ((length > 0) && (width > 0))
    {
        return length * width;
    }
    else
        return -1;


}//calcArea

