#include <iostream>
#include <string>
#include <sstream>
using namespace std;

// Define an enum for the main menu options
enum MenuOption {
    SEND_MONEY = 1,
    MAKE_PAYMENT = 2,
    ECOCASH_SAVE = 3,
    ECOCASH_DIASPORA = 4,
    LOANS = 5,
    BANK_TRANSFER = 6,
    WALLET_OPTIONS = 7
};

// Define an enum for the payment options
enum PaymentOption {
    PAY_BILL = 1,
    PAY_ZESA = 2,
    PAY_ORDINARY_BILLS = 3,
    REGULAR_PAYMENTS = 4
};

// Define an enum for the ordinary bills options
enum OrdinaryBillsOption {
    PAY_ZINARA = 1,
    PAY_RADIO_LICENCE = 2
};

// Define an enum for the diaspora options
enum DiasporaOption {
    SEND_mONEY = 1,
    RECEIVE_MONEY = 2
};

// Define an enum for the regions
enum Region {
    EUROPE = 1,
    ASIA = 2,
    AMERICAS = 3,
    OTHERS = 4
};

// Define a constant for the pin
const int PIN = 1738;

int main() {
	int pin, option, amount, recipient, accountNumber, meterNumber, billOption, diasporaOption, region;

	cout << "WELCOME TO PEPECASH" << endl;
	cout << "please enter your pin" << endl;
	cin >> pin;

	// Check if the pin is correct
	if (pin == PIN) {
		cout << "please enter one of the following options" << endl;
		cout << "1 : send money " << endl;
		cout << "2 : make payment" << endl;
		cout << "3 : ecocash save " << endl;
		cout << "4 : ecocash diaspora" << endl;
		cout << "5 : loans" << endl;
		cout << "6 : bank transfer" << endl;
		cout << "7 : wallet options" << endl;
		cin >> option;

        // Switch on the main menu option
		switch (option) {
			case SEND_MONEY:
				cout << " please enter the amount you want to send " << endl;
				cin >> amount;

				// Check if the amount is valid
				if (amount > 50) {
					cout << "you have insufficient credit" << endl;
				} else {
					cout << "enter the phone number of the recipient " << endl;
					cin >> recipient;
					//string num = to_string(recipient);
					stringstream ss;
					string str;
					ss << recipient;
					ss >> str;

					// Check if the phone number is valid
					if (str.length > 10) {
						cout << "you entered an invalid phone number" << endl;
					} else {
						cout << "your transaction to " << recipient << " was succesfull" << endl;
					}
				}
				break; // Break after each case

			case MAKE_PAYMENT:
				cout << "please select one of the following options" << endl;
				cout << "1 : pay bill" << endl;
				cout << "2 : pay zesa" << endl;
				cout << "3 : pay ordinary bills" << endl;
				cout << "4 : regular payments" << endl;
				cin >> option;

                // Switch on the payment option
				switch (option) {
					case PAY_BILL:
						cout << "please enter the account number" << endl;
						cin >> accountNumber;
						break;

					case PAY_ZESA:
						cout << " please enter the meter number " << endl;
						cin >> meterNumber;
						break;

					case PAY_ORDINARY_BILLS:
						cout << "please select the following" << endl;
						cout << "1 : pay zinara" << endl;
						cout << "2 : pay radio licence" << endl;
						cin >> billOption;

                        // Switch on the ordinary bills option
						switch (billOption) {
							case PAY_ZINARA:
								cout << "enter the amount" << endl;
								cin >> amount;
								break;

							case PAY_RADIO_LICENCE:
								cout << "please select one of the following " << endl;
								// TODO: Add the options for radio licence
								break;

							default:
								cout << "invalid option" << endl; // Use default case to handle invalid inputs
						}
						break;

					case REGULAR_PAYMENTS:
						// TODO: Add the code for regular payments
						break;

					default:
						cout << "invalid option" << endl; // Use default case to handle invalid inputs
				}
				break; // Break after each case

			case ECOCASH_SAVE:
				cout << "please enter the amount you wish to deposit" << endl;
				cin >> amount;
				break; // Break after each case

			case ECOCASH_DIASPORA:
				cout << "please select one of the following" << endl;
				cout << "1 : send money" << endl;
				cout << "2 : receive money" << endl;
				cin >> diasporaOption;

                // Switch on the diaspora option
				switch (diasporaOption) {
					case SEND_MONEY:
						cout << "please select the region " << endl;
						cout << "1 : europe" << endl;
						cout << "2 : asia" << endl;
						cout << "3 : americas" << endl;
						cout << "4 : others" << endl;
						cin >> region;

                        // Switch on the region
                        switch (region) {
                            case EUROPE:
                                // TODO: Add the code for sending money to Europe
                                break;

                            case ASIA:
                                // TODO: Add the code for sending money to Asia
                                break;

                            case AMERICAS:
                                // TODO: Add the code for sending money to Americas
                                break;

                            case OTHERS:
                                // TODO: Add the code for sending money to other regions
                                break;

                            default:
                                cout << "invalid region" << endl; // Use default case to handle invalid inputs
                        }
						break; // Break after each case

					case RECEIVE_MONEY:
					    cout<< "please select the region "<<endl;
                        cout<< "1 : europe"<<endl;
                        cout<< "2 : asia"<<endl;
                        cout<< "3 : americas"<<endl;
                        cout<< "4 : others"<<endl;
                        cin >> region;

                        // Switch on the region
                        switch (region) {
                            case EUROPE:
                                // TODO: Add the code for receiving money from Europe
                                break;

                            case ASIA:
                                // TODO: Add the code for receiving money from Asia
                                break;

                            case AMERICAS:
                                // TODO: Add the code for receiving money from Americas
                                break;

                            case OTHERS:
                                // TODO: Add the code for receiving money from other regions
                                break;

                            default:
                                cout << "invalid region" << endl; // Use default case to handle invalid inputs
                        }
					    break; // Break after each case

					default:
					    cout<< "invalid option"<<endl; // Use default case to handle invalid inputs
				}
				break; // Break after each case

			case LOANS:
				cout<< "please enter the amount you wish to be loaned"<<endl;
                cin>>amount;

                // Check if the amount is valid
                if(amount >0){
                    cout<< "proceed"<<endl;
                }else{
                    cout<<"invalid"<<endl;
                }
                break; // Break after each case

			case BANK_TRANSFER:
			    // TODO: Add the code for bank transfer
			    break; // Break after each case

			case WALLET_OPTIONS:
			    // TODO: Add the code for wallet options
			    break; // Break after each case

			default:
			    cout<< "invalid option"<<endl; // Use default case to handle invalid inputs
		}}}
