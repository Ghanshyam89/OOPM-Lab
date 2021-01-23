// Lab -20: Create an abstract class called Shape which contains a pure virtual function called find_vol() 
// and a protected attribute named as volume. 
// Create two new derived classes from the above class named as Cube and 
// Sphere having double type attribute named as side and radius respectively. 
// Implement dynamic polymorphism to find out volume of a Cube and a Sphere. 
// Also display the result.

// Developed by: Ghanshyam Prajapti
// Date: 29/12/2020

#include<iostream>
#define PI 3.14
#define VOLUME(a) (4/3)*PI*a*a*a
using namespace std;

class Shape{
    public:
        virtual void find_vol() = 0;
    protected:
        double volume;
};

class Cube : public Shape{
    public:
    double side;
    Cube()
    {
        cout<<"\nEnter the Side of Cube: ";
        cin>>this->side;
    }
    void find_vol(){
        volume = side*side*side;
        cout<<"\nCube\nSide: "<<side;
        cout<<"\nVolume of Cube: "<<volume;
        
    }
};
class Sphere : public Shape{
    public:
    double radius;
    Sphere(){
        cout<<"\nEnter the Radius of Sphere: ";
        cin>>this->radius;
    }
    void find_vol(){
        volume = VOLUME(radius);
        cout<<"\n\nSphere\nRadius: "<<radius;
        cout<<"\nVolume of Sphere: "<<volume;
        cout<<endl;
    }
};
int main(){
    // Cube
    Shape *shape = new Cube();
    shape->find_vol();
    
    // Sphere   
    shape = new Sphere();
    shape->find_vol();

    return 0;
}