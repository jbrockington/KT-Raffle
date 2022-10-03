#include <iostream>
#include "raffle.hpp"
#include <vector>

using namespace std;

int main()
{
    cout<<"Welcome to the KicksToo's $50 raffle for the September Story Sale! For access to the raffle, please enter the password.\n";
    
    enterportal();
    
    string names;
    vector<string> namepool;
     
    while(names != "Q" && names != "q"){
    cout << "Please enter your first name to be entered into the draw. Enter Q when you are finished entering names.\n";
    cin >> names;
//Conditional statement allows for the Q to not be added to the line queue and have the names stored into line queue.
    if(names != "Q" && names != "q"){
        namepool.push_back(names);
    }
        
}
    
    cout << "Thank you for participating in our raffle! We appreciate the support that has been given thus far.\n";
    cout << "We will now choose the winner below to be chosen for $50 cash prize!\n";
    cout << "The name of this raffle's winner is:" << endl;
    
    string next;
    cin >> next;
    
    int randonum = rand() % namepool.size() + 1;
    
    cout << namepool[randonum];
    
    
    cout << "Thank you for entering! The winner will be contacted after this is posted. More giveaways coming soon!";
    
    
    
    

    return 0;
}
