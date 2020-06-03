#include <iostream>                                               
#include <string>

using namespace std;


int main (){

    string alphabets{" abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890"};   
    
    string key{"@1234567890qwertyuioplkjhgfdsazxcvbnm`-=,./[];'/&^%$#!*()_+|<>?"};

    bool repeat = true;

    cout << "____________________________________________________________________________" << endl;
    
    cout << "Welcome To the Cipher!" << endl;
    
    cout << "Made By Shankey" << endl;
    
    while (repeat) {
        
         int selection{};
        
        cout << "____________________________________________________________________________"<<endl; 
        cout << endl;
        cout << "1. Encrypt a Message" << endl;
        cout << "2. Decrypt a Message" << endl;
        cout << "3. Quit" << endl;
        cout << "____________________________________________________________________________"<<endl;
        cout << "Enter from the selection (1/2/3): ";
        
        cin >> selection;
        
        cout << endl;
        cout << endl;

        if (selection == 1 || selection == 2 || selection == 3) {
                
            if (selection == 1){
                string encrypted_message{};
                cout << "Enter the message to encrypt: ";
                string input{};
                cin.ignore();
                getline(cin,input);

                cout << endl;
                for (char c:input) {        //Encryption 
            
                size_t postition = alphabets.find(c);
                if (postition != string::npos){
                    encrypted_message += key.at(postition);
                    }
                else 
                    encrypted_message += c;
                }   
                cout << endl ;
                cout << "------------------------------------------------------"<<endl;
                cout << encrypted_message << endl;
                cout << "------------------------------------------------------"<<endl;
            }

            else if (selection == 2) {
                string decrypted_message{};
                cout << "Enter the message to decrypt: ";
                cin.ignore();
                string input{};
                getline(cin,input);
                
                for (char c : input) {      //Decryption
            
                    size_t position = key.find(c);

                    if (position != string::npos){
                        decrypted_message += alphabets.at(position);
                    } 

                    else
                        decrypted_message += c;

                }   
                cout << endl;
                cout << endl;
                
                cout << "------------------------------------------------------"<<endl;    
                cout << decrypted_message << endl;
                cout << "------------------------------------------------------"<<endl;
            
            
            }       

            else if (selection == 3) {
                break;
            }
        }        

        else {
            cout << endl;
            cout << "____________________________________________________________________________"<<endl;
            cout << endl;
            cout << "Invalid Input!"<<endl;
            
        }
    
    }
    
    return 0;
}