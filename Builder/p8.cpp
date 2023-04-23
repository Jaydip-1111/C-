#include <iostream>
using namespace std;
        
class Bank
{
public:
    double account;
    int mobile_no;
    string mail;
    string name;
    double balance;
    double withdraw;
    void setdata(double p, int q, string r, string s)
    {
        account = p;
        mobile_no = q;
        mail = r;
        name = s;
    }
    double getAcc()
    {
        return account;
    }
    int getmobile_no()
    {
        return mobile_no;
    }
    string getMail()
    {
        return mail;
    }
    string getName()
    {
        return name;
    }
};

int main()
{
    Bank b[100];
    char choice;
    int count = 0, flag;
    double account;
    int mobile_no;
    string mail;
    string name;
    string user_id, password;

  

    cout << endl
         << "\t\t\t  -: BANK MANAGMENT SYSTEM :-" << endl;
    cout << "          ---------------------------------------------------------------" << endl
         << endl;

    cout << "\t\t\t  -: Desigmed N Programed By :-" << endl;
    cout << "          ---------------------------------------------------------------" << endl;
    cout << "\t\t\t\t KHUSHI G BEIADIYA     " << endl
         << endl
         << endl;

    cout << "\t\t\t\t -: Trainer :-" << endl;
    cout << "          ---------------------------------------------------------------" << endl;
    cout << "\t\t\t\t ASHISH SOLANKI" << endl
         << endl;
    cout << "\t\t\t Press Any Key N Enter To Continue..." << endl
         << endl;
    cin.get();

    

    while (choice = 'A' & 'S')
    {
        cout << "\t          ----------------------------------------------------";
        cout << endl
             << "\t         -: Press A for Administrator or S to Log as Staff :-" << endl;
        cout << "\t          ----------------------------------------------------" << endl;
        cin >> choice;

       

        switch (choice)
        {
        case 'A':
            cout << "Welcome to Admistrator Page: " << endl;

            cout << "Enter Your user id : ";
            cin >> user_id;

            cout << "Enter Your password : ";
            cin >> password;

            if (user_id == "rachit parmar" && password == "@rachit")
            {
                cout << "Successfully log in as a Administrator" << endl;
            }
            else
            {
                cout << endl
                     << "Your Password or User-Id not match" << endl;
            }
            break;
        case 'S':
            cout << "\t          ----------------------------------------------------";
            cout << endl
                 << "\t\t\t\t   -: Welcome as STAFF :-" << endl;
            cout << "\t          ----------------------------------------------------" << endl;

            cout << "Enter the your name :"<<endl;
            cin >> name;
            cout << "Enter the Account number :"<<endl;
            cin >> account;
            cout << "Enter the Mobile number :"<<endl;
            cin >> mobile_no;
            cout << "Enter the Email id :"<<endl;
            cin >> mail;
            b[count].setdata(account, mobile_no, mail, name);

            cout << endl
                 << " -: Data Successfully Added in staff database :-" << endl;
           
            

            int choice1;
            cout << "-------------------------------------------------------------------------------------- " << endl;
            cout << "   Name :" << name << endl;
            cout << "   Account No :" << account << endl;
            cout << "   Phone No :" << mobile_no << endl;
            cout << "   E-mail :" << mail << endl<<endl;
            cout << "-------------------------------------------------------------------------------------- " << endl<<endl;
            cout << "Press [1] to Deposite the money:" << endl;
            cout << "Press [2] to Tranfer the money:" << endl;
            cout << "Press [3] to Withdraw the money:" << endl;

            cin >> choice1;

    

            switch (choice1)
            {
            case 1:
                int ac_balance;
                cout << "Enter the amount you want to add as balance :";
                cin >> ac_balance;
                b[flag].balance = b[flag].balance + ac_balance;
                cout << "Amount is added in your account!!!";
                break;
            case 2:
                int withdraw;
                cout << "Enter the amount you want to Withdraw money"<<endl;
                cin >> withdraw;
                if (b[flag].balance < withdraw)
                {
                    cout << "Amount more the balance!!";
                }
                else
                {
                    b[flag].balance = b[flag].balance - withdraw;
                    cout << " Take the money from the withdraw box"<<endl;
                }
                break;
            case 3:
                int withdraw1;
                cout << "Enter the amount you want to tranfer"<<endl;
                cin >> withdraw1;
                if (b[flag].balance < withdraw1)
                {
                    cout << "Amount more the balance!!"<<endl;
                }
                else
                {
                    b[flag].balance = b[flag].balance - withdraw1;
                    cout << " Tranfer the money from your account";
                }
                break;
            default:
                break;
            }
        }
        break;
    }
    if (choice == 2)
    {
        count++;
    }
}
