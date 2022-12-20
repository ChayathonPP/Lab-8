//Dialog of the first example is given below.

/*

Fahsai: Sawadee ka...Can you tell me your name?
?????: Luke Skywalker
Fahsai: Wow!!! Luke Skywalker is a really cool name.
Fahsai: I think you are an Engineering student. What is your student ID?
Luke Skywalker: 590610999
Fahsai: I think you may be GEAR 47. I have a free movie ticket for you.
Fahsai: Let's go to the cinema together!!!
Fahsai: What movie do you want to watch?
Luke Skywalker: Star Wars VII
Fahsai: So....which day are you free to go with me?
Luke Skywalker: Next Monday
Fahsai: Next Monday....that is OK!!! I'm looking forward to watching Star Wars VII with you.
Luke Skywalker: May the Force be with you krub
Fahsai: 555+ see you Next Monday. Bye Bye \(^ ^)/
*/
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
{
    string n;
    cout << "Fahsai: Sawadee ka...Can you tell me your name? \n";
    cout << "?????: ";
    getline(cin,n);
    cout << "Fahsai: Wow!!! "<< n <<" is a really cool name.\n";
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n";
    int id;
    cout << n << ": " ;
    cin >> id ;
    cout << "Fahsai: I think you may be GEAR " << (id/10000000)-12 << ". I have a free movie ticket for you.\n";
    cout << "Fahsai: Let's go to the cinema together!!!\n";
    cout << "Fahsai: What movie do you want to watch?\n";
    string c;
    cout << n << ": " ;
    cin.ignore();
    getline(cin,c);
    
    cout << "Fahsai: So....which day are you free to go with me?\n";
    string d;
    cout << n << ": " ;

    getline(cin,d);
    
    cout << "Fahsai: " + d + "....that is OK!!! I'm looking forward to watching "+ c +" with you.\n";
    string b;
    cout << n << ": " ;
    
    getline(cin,b);

    cout << "Fahsai: 555+ see you " << d <<". Bye Bye \\(^ ^)/";
    
    return 0;
}