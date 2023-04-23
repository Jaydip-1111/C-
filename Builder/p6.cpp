#include <iostream>
using namespace std;
class Market
{
private:
    int item_no;
    string item_name;
    int qty;
    float tax;
    int discount;

public:
    void setdata(int a, string b, int c, float d, int e)
    {
        this->item_no = a;
        this->item_name = b;
        this->qty = c;
        this->tax = d;
        this->discount = e;
    }
    void setitem_no(int x)
    {
        this->item_no = x;
    }
    int getitem_no()
    {
        return item_no;
    }
    string getItem_name()
    {
        return item_name;
    }
    int getqty()
    {
        return qty;
    }
    int gettax()
    {
        return tax;
    }
    int getdiscount()
    {
        return discount;
    }
};

int main()
{
    Market m[300], q;
    int item_no;
    string item_name;
    int qty;
    float tax;
    int discount;
    string user_id;
    string password;
    int n;

    cout << "User Id :makwana jaydip"<<endl;
    cout << "Password :@jaydip"<<endl;
    cout << "\nEnter the User Id : "<<endl;
    cin >> user_id;
    cout << "\nEnter the Password : "<<endl;
    cin >> password;

    if (user_id == "makwana jaydip" && password == "@jaydip")
    {
        while (n < 2)
        {
            static int count = 0;

            cout << "enter 1 for Add Item\n enter 2 for View the items"<<endl;
            cin >> n;

            switch (n)
            {
            case 1:
                cout << "Enter the Item Details :"<<endl;

                cout << "Enter the item _id:-";
                cin >> item_no;
                cout << "Enter the item Name :-";
                cin >> item_name;
                cout << "Enter the qty :-";
                cin >> qty;
                cout << "Enter the tax :-";
                cin >> tax;
                cout << "Enter the Discount :-"<<endl;
                cin >> discount;
                cout << "=========================="; 
                m[count].setdata(item_no, item_name, qty, tax, discount);
                break;
            case 2:
                cout << "Details of Item are:"<<endl;

                cout << "Item No\tItem_name\tqty\ttax\tdiscount"<<endl;

                for (int i = 0; i < count; i++)
                {
                    for (int j = i + 1; j < count; j++)
                    {
                        int temp = 0;
                        if (m[i].getitem_no() > m[j].getitem_no())
                        {
                            q.setdata(m[i].getitem_no(), m[i].getItem_name(), m[i].getqty(), m[i].gettax(), m[i].getdiscount());
                            m[i].setdata(m[j].getitem_no(), m[j].getItem_name(), m[j].getqty(), m[j].gettax(), m[j].getdiscount());
                            m[j].setdata(q.getitem_no(), q.getItem_name(), q.getqty(), q.gettax(), q.getdiscount());
                        }
                    }
                }
                for (int i = 0; i < count; i++)
                {
                    cout << " " << m[i].getitem_no() << " \t " << m[i].getItem_name() << "   \t " << m[i].getqty()
                         << " \t" << m[i].gettax() << " \t " << m[i].getdiscount() << "\n";
                }
            default:
                break;
            }

            if (n == 1)
            {
                count++;
            }
        }
    }
    else
    {
        cout << "Your Password or User id not matched";
    }
}
