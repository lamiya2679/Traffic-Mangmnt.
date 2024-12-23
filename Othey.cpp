//Helpline Information and nearby hospitals
        cout<<"* WELCOME TO *"<<endl;
        cout<<"* TRAFFIC MANAGEMENT SYSTEM *"<<endl;
        cout<<"* ----Helpline Info And Nearby Healthcare Centres---- *"<<endl;
        cout<<"* *"<<endl;
        cout<<"* Enter Your desired Option :- *"<<endl;
        cout<<"* *"<<endl;
        cout<<"* Press 1 to get the helpline number *"<<endl;
        cout<<"* Press 2 to get info of the hospitals in Cuttack *"<<endl;
        cout<<"* Press 2 to get info of the hospitals in Puri *"<<endl;
        cout<<"* *"<<endl;
        cout<<"* Press 0 if you want to go back to home *"<<endl;
        cout<<"* Enter your desired choice___ *"<<endl;
        cout<<"* *"<<endl;
        int CChoice{0};
        cin>>CChoice;
        switch (CChoice)
        {
        case 0:
            system("clear");
            welcome();
            break;
        case 1:
        {
            system("clear");
            string para;
            ifstream myfile("/home/lamecodes/CLionProjects/untitled/cmake-build-debug/HelplineNumbers.txt");
            if (myfile.is_open())
            {
                while (getline(myfile, para))
                {
                    cout << para << '\n';
                }
                myfile.close();
            }
            else cout << "Error!!!! 403!";
            int ch;
            cout << endl << "Press 1 if you want to go back to the Home Page" << endl;
            cin >> ch;
            if (ch == 1)
            {
                system("clear");
                welcome();
            }
            else
            {
                cout << endl << "Please Enter Valid option !!";
                cout << endl << endl << "Press 1 if you want to go back to the Home Page" << endl;
                cin >> ch;
                if (ch == 1)
                {
                    system("clear");
                    welcome();
                }
            }
            break;
        }
        case 2:
        {
            system("clear");
            string line;
            ifstream myfile("/home/lamecodes/CLionProjects/untitled/cmake-build-debug/HCuttack.txt");
            if (myfile.is_open())
            {
                while (getline(myfile, line))
                {
                    cout << line << '\n';
                }
                myfile.close();
            }
            else cout << "Error!!!! 403!";
            int ch;
            cout << endl << "Press 1 if you want to go back to the Home Page" << endl;
            cin >> ch;
            if (ch == 1)
            {
                system("clear");
                welcome();
            }
            else
            {
                cout << endl << "Please Enter Valid option !!";
                cout << endl << endl << "Press 1 if you want to go back to the Home Page" << endl;
                cin >> ch;
                if (ch == 1)
                {
                    system("clear");
                    welcome();
                }
            }
        }
        break;
        case 3:
        {
            system("clear");
            string line;
            ifstream myfile("/home/lamecodes/CLionProjects/untitled/cmake-build-debug/HPuri.txt");
            if (myfile.is_open())
            {
                while (getline(myfile, line))
                {
                    cout << line << '\n';
                }
                myfile.close();
            }
            else cout << "Error!!!! 403!";
            int ch;
            cout << endl << "Press 1 if you want to go back to the Home Page" << endl;
            cin >> ch;
            if (ch == 1)
            {
                system("clear");
                welcome();
            }
            else
            {
                cout << endl << "Please Enter Valid option !!";
                cout << endl << endl << "Press 1 if you want to go back to the Home Page" << endl;
                cin >> ch;
                if (ch == 1)
                {
                    system("clear");
                    welcome();
                }
            }
            break;
        }
        }
        return 0;
    }
};
int main()
{
    TrafficManagementSystem ob1;
    ob1.welcome();
}

