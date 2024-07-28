

#include <iostream>
using namespace std;

class Account{

    private:
    string owner;
    double balance;
    
    public:
    Account(string o,double b=0)
    {
     this->owner=o;
     this->balance=b;
    }
    
   
    void withDraw(double amnt)
    {
        if(this->balance<amnt)
        {
            cout<<"Insufficient Funds"<<endl;
        }
        else
        {
            this->balance-=amnt;
            cout<<"Amount withdrawn successfully!"<<endl<<"Remaining Balance is: "<<this->balance<<endl;
        }
    }

    void deposit(double money)
    {
      this->balance+=money;
    }

    double getBalance()
    {
        return this->balance;
    }

};
int main() {
  Account A1("Tarik");
  A1.deposit(50000);
  cout<<"Balance: "<<A1.getBalance()<<endl;

  A1.withDraw(5000);
  A1.withDraw(25000);
  A1.withDraw(25000);

  cout << A1.balance;  // This will give a compilation error because balance is private

}
