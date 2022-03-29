//done by:ahmed alghazali
//Caesar Cipher


#include <iostream>
#include<iomanip>
#include<istream>
#include<string>

using namespace std;

int main(){
    int choice;
    cout<<"1. Encryption"<<endl <<"2. Decryption"<<endl <<"Enter choice (1,2)"<< endl;
    cin>>choice;
    cin.ignore();

    if(choice==1){
        string msg ;
        cout<< "Message can only be alphabet"<<endl<<"Enter a message: ";
        getline(cin , msg);
        int key ;
        cout<<"Enter key (0-25) ";
        cin>>key;
        cin.ignore();

        string Encrypt_msg=msg;

        for (int i=0 ; i <msg.size(); i++){

            if (msg[i]==32){// 32 is the asci number of space
            continue;

        }else{

            if(msg[i]+key>122){
                int temp =(msg[i]+key)-122;

                Encrypt_msg[i]=96+temp;

                }else if(msg[i]+key>90 && msg[i]<=96){
                    int temp =(msg[i+key])-90;
                    Encrypt_msg[i]= 64+temp;

                }else {
                    Encrypt_msg[i]+=key;


                }

            }

    }cout << "Encrypted Message: " << Encrypt_msg;
    }
    else if(choice ==2){
        string encp_msg;
        cout<< "Message can only be alphabet"<<endl<<"Enter encrypted text: ";
        getline(cin , encp_msg);

        int dcrypt_key;
        cout<<"Enter key (0-25) ";
        cin>>dcrypt_key;
        cin.ignore();
        string decrypted_msg =encp_msg;

        for(int i=0 ; i<encp_msg.size() ; i++){
            if (encp_msg[i]==32){
                continue;
        }
            else {
                if((encp_msg[i] - dcrypt_key) < 97 && (encp_msg[i] - dcrypt_key) > 90){
                    int temp = (encp_msg[i] - dcrypt_key) + 26;
                    decrypted_msg[i] = temp;
                } else if((encp_msg[i] - dcrypt_key) < 65){
                    int temp = (encp_msg[i] - dcrypt_key) + 26;
                    decrypted_msg[i] = temp;
                } else {
                    decrypted_msg[i] = encp_msg[i] - dcrypt_key;
                }
            }
        }

        cout << "Decrypted Message: " << decrypted_msg << endl;
    }

    else {
        cout<<"Invalid  choice "<<endl;
    }
    system("pause>0");

}










