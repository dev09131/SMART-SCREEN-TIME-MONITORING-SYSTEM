/    void saveLog()
    {
        ofstream file("store.txt", ios::app);
        if(!file)
        {
            cout << "\n File Error!";
            return;
        }

        file << "\n================================\n";
        file << "SMART SCREEN TIME REPORT\n";
        file << "================================\n";
        file << "Name : " << name << endl;
        file << "Age  : " << age << endl;
        file << "Gaming Usage : "<< gamingUsed << " minutes\n";
        file << "Social Media Usage : "<< socialUsed << " minutes\n";
        file << "Total Screen Time  : "<< gamingUsed + socialUsed << " minutes\n";
        file << "================================\n";

        file.close();

        cout << "\n Activity Saved!";
        cout << "\n File: store.txt\n";
    }
};