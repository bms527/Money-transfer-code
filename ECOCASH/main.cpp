#include <iostream>

using namespace std;

int main()
{
    int pin,opt1 , opt2 ,opt3,opt4,opt5,opt6,opt7,opt8,s1,s2,s3;
    cout<< "WELCOME TO PEPECASH"<<endl;
    cout<< "please enter your pin"<<endl;
    cin>> pin;
    // pin subject to change
    if(pin == 1738){
        cout<< "please enter one of the following options"<<endl;
        cout<< "1 : send money "<<endl;
        cout<< "2 : make payment"<<endl;
        cout<< "3 : ecocash save "<<endl;
        cout<< "4 : ecocash diaspora"<<endl;
        cout<< "5 : loans"<<endl;
        cout<< "6 : bank transfer"<<endl;
        cout<< "7 : wallet options"<<endl;
        cin>>opt1;}
        else {
            cout<< "invalid pin"<<endl;
        }
        switch(opt1){
        case 1 :
            cout<< " please the enter the amount you want to send "<<endl;
            cin>>s1;
            if(s1 < 50 ){
                cout<< "you have insufficient credit"<<endl;
            }

                else{
                    cout<< "you good to go"<<endl;
                }
                break;
        case 2 :
            cout<< "please select one of the following options"<<endl;
            cout<< "1 : pay bill"<<endl;
            cout<< "2 : pay zesa"<<endl;
            cout<< "3 : pay ordinary bills"<<endl;
            cout<< "4 : regular payments"<<endl;
            cin>>opt2;
            switch(opt2){
            case 1 :
                cout<< "please enter the acc number"<<endl;
                cin>>s2;
                break;
            case 2 :
                cout<< " please enter the meter number "<<endl;
                break;
            case 3 :
                cout<< "please select the following"<<endl;
                cout<< "1 : pay zinara"<<endl;
                cout<< "2 : pay radio licence"<<endl;
                cin>>s3;
                switch(s3){
                case 1 :
                    cout<< "enter the amount"<<endl;
                    break;
                case 2 :
                    cout<< "please select one of the following "<<endl;
                    break;
                default :
                    cout<< "invalid!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
                }

            }
            case 3 :
                cout << "please enter the amount you wish to deposit"<<endl;
                break;
            case 4 :
                cout<< "please select the one of the following"<<endl;
                cout<< "1 : send money"<<endl;
                cout<< "2 : recieve money"<<endl;
                cin>>opt3;
                switch(opt3){
                case 1 :
                    cout<< "please select the region "<<endl;
                    cout<< "1 : europe"<<endl;
                    cout<< "2 : asia"<<endl;
                    cout<< "3 : americas"<<endl;
                    cout<< "4 : others"<<endl;
                case 2 :

                 cout<< "please select the region "<<endl;
                    cout<< "1 : europe"<<endl;
                    cout<< "2 : asia"<<endl;
                    cout<< "3 : americas"<<endl;
                    cout<< "4 : others"<<endl;
                }
                break;
            case 5 :
                cout<< "please enter the amount you wish to be loaned"<<endl;
                cin>>opt4;
                if(opt4 >0){
                    cout<< "proceed"<<endl;
                }else{
                    cout<<"invalid"<<endl;
                }
                break;
            case 6 :
                cout<< "1 : bank to wallet "<<endl;
                cout<< "2 : wallet to bank"<<endl;
                cin>>opt5;
                switch(opt5){
                case 1 :
                    cout<< "please select the bank"<<endl;
                    cout<< " kingdom bank"<<endl;
                    cout<< "cabs"<<endl;
                    break;
                case 2 :

                        cout<< "please select the bank"<<endl;
                    cout<< " kingdom bank"<<endl;
                    cout<< "cabs"<<endl;
                    break;
                default :
                    cout<< "invalid !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
                }
                break;
            case 7 :
                cout<< "1 : check wallet balance"<<endl;
                cout<< "2 : check last transactions"<<endl;
                cin>>s2;
                switch (s2)
                {
                    case 1 :
                    cout<< "You have insuficient funds"<<endl;
                    break;
                    case 2 :
                        cout<< "No transactions so far"<<endl;
                        break;
                }
                break;
            default :
                cout<< "invalid!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;

}
    return 0;
}

