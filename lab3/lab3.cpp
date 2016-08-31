#include <iostream>
using namespace std;

int main()
{
     int num1_59 = 0;
     float num = 0;
     char charact;
     string verb;
     string noun;
     string adj;
     string verb_ed;
     string verb_ed2;
     string noun2;
     string adj2;
     
     
    cout<<"Kirsten's MadLib!"<<endl<<"Please enter a word accordingly." << endl;
    cout<<"Noun: ";
    cin >> noun;
    cout<<"Verb: ";
    cin >> verb;
    cout<<"Adjective: ";
    cin >> adj;
    cout<<"Past tense verb: ";
    cin >> verb_ed;
    cout<<"Second noun: ";
    cin >> noun2;
    cout<<"Symbol such as ! or *: ";
    cin >> charact;
    cout<<"Number between 1 and 59: ";
    cin >> num1_59;
    cout<<"Second adjective: ";
    cin >> adj2;
    cout<<"Second past tense verb: ";
    cin >> verb_ed2;
    cout<<"Decimal number: ";
    cin >> num;
    cout<< endl;
    
    cout << "One day, the " << noun << " took a " << verb<< "." << endl;
    cout << "While " << verb << "ing, " << noun << " " << verb_ed << " on a " << adj << " " << noun2 <<"." << endl;
    cout << noun2 << " cried for " << num1_59 << " minutes before realizing it was " <<adj2<< "." <<endl;
    cout << noun2 << ", now " << adj2 << ", " << verb_ed2 << " " << num << " feet in the sky." << endl;
    cout << noun << " and " << noun2 << " became friends and got matching " << charact << " tattoos." << endl;

}