#include <iostream>
using namespace std;


void monkeys(int monkey_num, string parent, string gender)
    {
        cout << monkey_num << " little monkeys jumping on the bed," << endl;
        cout << "One fell off and bumped " << gender << " head." <<endl;
        cout << parent << " called the Doctor and the Doctor said," << endl;
        cout << "'No more monkeys jumping on the bed!'" << endl;
 
    }

int main()
{
    monkeys(5, "Mama", "his");
    monkeys(4, "Papa", "her");
    monkeys(3, "Mama", "his");
    monkeys(2, "Papa", "her");
    monkeys(1, "Mama", "his");
}