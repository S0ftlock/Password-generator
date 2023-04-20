#include <iostream>
#include <cstdlib>          //for rand() and srand()
#include <ctime>            //for time()
using namespace std;

const char set[]="0123456789!@#$%^&*()_+-=abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";   //set from which password will be generated

int main()
{ 
    int length=0;
    int setlength=sizeof(set);

    cout<<"How long do you want the password? : "<<endl;
    cin>>length;

    srand(time(0));     //sets the time function to start from current time from the computer, inducing as much randomness as possible
                        //without this, password generated might be the same by chance if the seed is the same.
    
    cout<<"Your password is : ";
    for( int i=0;i<length;i++)          //loop to generate password
    {
        cout<< set[rand() % setlength];    
    }
return 0;
}
