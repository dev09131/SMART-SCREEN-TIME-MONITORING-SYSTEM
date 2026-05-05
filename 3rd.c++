int main()
{
    string name;
    int age;
    

    cout << "========================================";
    cout << "\n SMART SCREEN TIME MONITORING SYSTEM";
    cout << "\n========================================\n";

    cout << "\nEnter User Name : ";
    getline(cin, name);

    cout << "Enter Age : ";
    cin >> age;

    while(age <= 0 || age > 100)
    {
        cout << "\n Invalid Age!";
        cout << "\nEnter Correct Age : ";
        cin >> age;
    }

    User user(name, age);

    int choice;
    int minutes;

    do
    {
        cout << "\n================================";
        cout << "\n MAIN MENU";
        cout << "\n================================";

        cout << "\n1. Show Screen Limits";
        cout << "\n2. Add Gaming Time";
        cout << "\n3. Add Social Media Time";
        cout << "\n4. Show Daily Report";
        cout << "\n5. Save Activity Log";
        cout << "\n6. Exit";

        cout << "\n\nEnter Choice : ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                user.showLimits();
                break;

            case 2:
                cout << "\nEnter Gaming Time (minutes) : ";
                cin >> minutes;
                if(minutes > 0) user.addGamingTime(minutes);
                else cout << "\n Invalid Input!";
                break;

            case 3:
                cout << "\nEnter Social Media Time (minutes) : ";
                cin >> minutes;
                if(minutes > 0) user.addSocialTime(minutes);
                else cout << "\n Invalid Input!";
                break;

            case 4:
                user.showReport();
                break;

            case 5:
                user.saveLog();
                break;

            case 6:
                cout << "\n Program Closed Successfully!\n";
                break;

            default:
                cout << "\n Invalid Choice!";
        }

    } while(choice != 6);

    return 0;
}