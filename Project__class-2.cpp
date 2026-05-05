#include<iostream>
#include<string>
using namespace std;

int main (){

void addGamingTime(int minutes)
    {
        gamingUsed += minutes;
        checkGamingLimit();
    }

    void addSocialTime(int minutes)
    {
        socialUsed += minutes;
        checkSocialLimit();
    }

    void checkGamingLimit()
    {
        if(gamingUsed >= gamingLimit)
            cout << "\nGaming limit exceeded!";
    }

    void checkSocialLimit()
    {
        if(socialUsed >= socialLimit)
            cout << "\nSocial limit exceeded!";
    }

    void showReport()
    {
        cout << "\nName: " << name;
        cout << "\nAge: " << age;
        cout << "\nGaming: " << gamingUsed;
        cout << "\nSocial: " << socialUsed;
    }

    void saveLog()
    {
        ofstream file("store.txt", ios::app);
        file << name << " " << age << " "
             << gamingUsed << " " << socialUsed << endl;
        file.close();
    }

return 0;


