#include <iostream>
#include <string>

using namespace std;

int main(){
    int age,Height,Prop;
    string status;
    cout << "Enter your age: ";
    cin >> age;
    if(age <= 20)
    {
        cout << "Enter your height: ";
        cin >> Height;   

        if(Height < 160)
        {   
            status = "UNFRIEND";
        }
        else if(Height < 175)
        {
            status = "FRIEND";
        }
        else
        {
    
           cout << "Enter your property: "; 
           cin >> Prop;

           if(Prop > 69e6)
           {
               status = "MARRIED";
           }
           else
           {
               status = "ONE-NIGHT-STAND";
           }

        }
    }
    else if (age < 30)
    {
        cout << "Enter your property: "; 
        cin >> Prop;
        if(Prop > 10e6)
        {
            status = "BEST FRIEND";
        }
        else
        {
            status = "UNFRIEND";
        }
    }
    else
    {
        status = "UNFRIEND";
    }

    cout << "Your status = " << status;
    
}