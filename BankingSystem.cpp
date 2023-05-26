#include<iostream>
using namespace std;

void afterlogin();
void printIntroMenu();

int main()
{   

printIntroMenu();
    return 0;
}

void printIntroMenu()
{
    char menu;
    string name1, word1;
    do
    {
        cout << "Please select an option from the menu below:\33[5m" << endl;
        cout << "l ➙ Login" << endl;
        cout << "c ➙ create account" << endl;
        cout << "q ➙ Quit\n" << endl <<">> ";
        cin >> menu;

        switch(menu)
        {
        case 'c':
        {
            string username1,password1;
            cout << "\n➾*Create account* "<< endl;
            cout << "Enter username : ";
            cin >> username1;
            cout << "Enter password : ";
            cin >> password1;
            cout << endl;
            name1 = username1;
            word1 = password1;
            cout << "\033[92m**your account successfully created**\n\033[0m";
            break;
        }
        case 'l':
        {   cout << "➾*Login account* \n";
            string username2, password2;
            cout << "Enter username ";
            cin>>username2;
            if (username2 == name1)
            {
                cout << "Enter password ";
                cin>>password2;
                cout<<endl;
            }         
            else
            {
                cout<< "\n    \033[31myour username is wrong"<<endl;
            }
            if (username2 == name1 && password2 == word1)
            {
                cout << "\033[92m **you are successfully login**\033[0m\n";
                afterlogin();
                exit(0);
            }
            else
                cout << "\033[91m**** LOGIN FAILED! ****\033[0m\n";
            getchar();
            break;
        }
        case 'q':
        {
            break;
        }
        default:
            cout<<"➵Not valid"<<endl;
            exit(0);
        }
    } while (menu != 'q');

}

void afterlogin()
{
    char ch;
    double totalbal=0;
    do
    {

        cout << "\n";
        cout << "select an option: " << endl;
        cout << "d ➙ Deposit Money " << endl;
        cout << "w ➙ Withdraw Money" << endl;
        cout << "r ➙ Request Balance" << endl;
        cout << "q ➙ Quit" << endl<<">> ";

        cin>>ch;

        switch(ch)
        {
        case 'd':
        {
            double m;
            cout << "Enter amount : ₹ ";
            cin>>m;
            if(m >= 0) {
                totalbal=totalbal + m;
                cout<<"\033[92m₹ "<<m<<" Deposit to your account\033[0m"<<endl;
            }
            else cout<<"not possible\n";
            break;
        }
        case 'w':
        {
            double mo;
            cout << "Enter amount :  ₹ ";
            cin>>mo;
            if (totalbal >= mo)
            {
                if(mo >= 0) {
                    totalbal=totalbal - mo;
                    cout<<"\033[92m₹ "<<mo<<" Withdraw to your account\033[0m"<<endl;
                }
                else cout<<"not possible\n";
            }
            else
            {   cout << "\033[91m";
                cout << "➵ amNot enough balance"<<endl;
                cout << "\033[0m";
            }
            break;
        }
        case 'r':
        {   cout<<"\n\033[92m\n";
            cout << "your balance is:  ₹ ";
            cout << totalbal;
            cout<<"\n\033[0m";
            break;
        }
        case 'q':
        {
            cout << "thanks for visit\n";
            break;
        }
        default:
            cout<<"➵Not valid"<<endl;

        }

    } while (ch!='q');
}