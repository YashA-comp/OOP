#include <iostream>

using namespace std;

class bank_acc {
    string name, acc_type;
    int acc_no;
    float balance;

public:
  //  void accept();
    bank_acc(string na,string account_type,int account_num,int balancee){
        name=na;
        acc_type=account_type;
        acc_no=account_num;
        balance=balancee;
    }
    void display();
    void depositt();
    void withdraww();
};

//void bank_acc::accept() {
   // cout << "Enter The Name : ";
    //cin >> na;
    //cout << "Enter Account Type : ";
    //cin >> acc_type;
    
   
    
      //  cout << "Enter Account Number (positive integer): ";
        
        //if (acc_no <= 0) {
          //  cout << "Invalid account number! Try again.\n";
        //}
        //else{
          //  cin>>acc_no;
        //}   

   
    
        //cout << "Enter Account Balance (non-negative): ";
        //if (balance < 0) {
         //   cout << "Invalid balance! Try again.\n";
        //}
        //else{
          //  cin>>balance;
        //}


void bank_acc::display() {
    cout << "\nAccount Details:\n";
    cout << "Name: " << name << endl;
    cout << "Account Type: " << acc_type << endl;
    cout << "Account Number: " << acc_no << endl;
    cout << "Account Balance: " << balance << endl;
}

void bank_acc::depositt() {
    float deposit;
    cout << "Enter Amount To Deposit: ";
    cin >> deposit;
    if (deposit > 0) {
        balance += deposit;
        cout << "Your Current Balance Is: " << balance << endl;
    } else {
        cout << "Invalid deposit amount!" << endl;
    }
}

void bank_acc::withdraww() {
    float withdraw;
    cout << "Enter Amount To Withdraw: ";
    cin >> withdraw;
    if (withdraw > 0 && withdraw <= balance) {
        balance -= withdraw;
        cout << "Your Balance After Withdraw is: " << balance << endl;
    } else if (withdraw > balance) {
        cout << "Insufficient balance!" << endl;
    } else {
        cout << "Invalid withdraw amount!" << endl;
    }
}

int main() {
    string na,account_type;
    cout<<"Enter Name:"<<endl;
    cin>>na;
  
    cout<<"Enter Account Type:"<<endl;
    cin>>account_type;
    int account_num,balancee;
    cout<<"Enter Account Number:"<<endl;
    cin>>account_num;
    cout<<"Enter Account balance:"<<endl;
    cin>>balancee;
    bank_acc mem1(na,account_type,account_num,balancee);
    //mem1.accept();
    mem1.display();

    int options;
    do {
        cout << "\nEnter 1 For Deposit, 2 For Withdraw, and 3 to Exit: ";
        cin >> options;

        switch (options) {
            case 1:
                mem1.depositt();
                break;
            case 2:
                mem1.withdraww();
                break;
            case 3:
                cout << "Logged Out" << endl;
                break;
            default:
                cout << "Invalid Option! Please try again." << endl;
        }
    } while (options != 3);

    return 0;
}
