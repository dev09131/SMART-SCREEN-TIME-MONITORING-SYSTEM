#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// ======================================================
// USER CLASS
// ======================================================
class User
{
private:

    string name;
    int age;

    int gamingLimit;
    int socialLimit;

    int gamingUsed;
    int socialUsed;

public:

    // ==================================================
    // CONSTRUCTOR
    // ==================================================
    User(string n, int a)
    {
        name = n;
        age = a;

        gamingUsed = 0;
        socialUsed = 0;

        // AGE-BASED RULES
        if(age < 10)
        {
            gamingLimit = 60;
            socialLimit = 25;
        }
        else if(age >= 10 && age <= 15)
        {
            gamingLimit = 90;
            socialLimit = 45;
        }
        else
        {
            gamingLimit = 180;
            socialLimit = 60;
        }
    }

    // ==================================================
    // SHOW LIMITS
    // ==================================================
    void showLimits()
    {
        cout << "\n================================";
        cout << "\n SCREEN TIME LIMITS";
        cout << "\n================================";
        cout << "\n Gaming Limit : "<< gamingLimit << " minutes";
        cout << "\n Social Media Limit : "<< socialLimit << " minutes";
        cout << "\n================================\n";
    }

    // ==================================================
    // ADD GAMING TIME
    // ==================================================
    void addGamingTime(int minutes)
    {
        gamingUsed += minutes;

        cout << "\n Gaming Time Added!";
        cout << "\nCurrent Gaming Usage : "<< gamingUsed << " minutes";

        checkGamingLimit();
    }

    // ==================================================
    // ADD SOCIAL MEDIA TIME
    // ==================================================
    void addSocialTime(int minutes)
    {
        socialUsed += minutes;

        cout << "\n Social Media Time Added!";
        cout << "\nCurrent Social Usage : "<< socialUsed << " minutes";

        checkSocialLimit();
    }

    // ==================================================
    // CHECK GAMING LIMIT
    // ==================================================
    void checkGamingLimit()
    {
        int remaining = gamingLimit - gamingUsed;

        if(remaining <= 10 && remaining > 0)
        {
            cout << "\nWARNING!";
            cout << "\nOnly "<< remaining<< " minutes left for gaming.\n";
        }

        if(gamingUsed >= gamingLimit)
        {
            cout << "\n GAMING LIMIT EXCEEDED!";
            cout << "\n Please stop gaming.\n";
        
        }
    }

    // ==================================================
    // CHECK SOCIAL MEDIA LIMIT
    // ==================================================
    void checkSocialLimit()
    {
        int remaining = socialLimit - socialUsed;

        if(remaining <= 10 && remaining > 0)
        {
            cout << "\n WARNING!";
            cout << "\nOnly "
                 << remaining
                 << " minutes left for social media.\n";
        }

        if(socialUsed >= socialLimit)
        {
            cout << "\n SOCIAL MEDIA LIMIT EXCEEDED!";
            cout << "\n Please stop social media.\n";
        }
    }

    // ==================================================
    // SHOW REPORT
    // ==================================================
    void showReport()
    {
        cout << "\n================================";
        cout << "\n DAILY REPORT";
        cout << "\n================================";
        cout << "\n Name : " << name;
        cout << "\n Age  : " << age;
        cout << "\n\n Gaming Usage : "<< gamingUsed << " minutes";
        cout << "\n Social Media Usage : "<< socialUsed << " minutes";
        cout << "\n Total Screen Time  : "<< gamingUsed + socialUsed << " minutes";
        cout << "\n================================\n";
    }
