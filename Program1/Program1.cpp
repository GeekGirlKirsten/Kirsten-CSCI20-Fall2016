//Program 1 Variables
//Kirten Provencio
//CSCI 20
//April Browne
//This program calculates a person’s weekly wages based on hourly salary and hours.
//It then prints the person's name, hours, hourly salary, net pay, and gross pay.


#include <iostream>
using namespace std;

int main()
{
    string name;
    float salary = 0.0;
    float hrs_worked = 0.0;
    float gross_pay = 0.0;
    float net_pay = 0.0;
    float tax = .17;
    
    //Input the Name, salary, and hours of an employee
    cout<< "Please enter name of employee: " << endl;
    getline (cin, name);
    cout<< "How many hours did " << name << " work?" << endl;
    cin >> hrs_worked;
    cout<< "What is " << name << "'s hourly wage?" << endl;
    cin >> salary;
    
    //Calulates the gross and net pay
    gross_pay = salary * hrs_worked;
    net_pay = gross_pay * (1 - tax);
    
    //Prints all information
    cout<< name << " worked " << hrs_worked << " hours for $" << salary << " an hour, making $"
    << gross_pay << " before taxes and $" << net_pay << " after taxes." << endl;
}