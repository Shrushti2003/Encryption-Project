#include<conio.h>
#include <iostream>
using namespace std;

void encrypt(char n[25])//Ex:- Shrushti[8], like shrushti has 8 characters, we can use total 25 characters here.
{
    int a; //confusion key (a)(ex:- 3,so the entered word for ex:- hello,In this each word will shift by 3 letters, resulting in = khoor.
    cout<<"Enter your confusion key = ";
    cin>>a;                                  //string n = hello
    for(char b=0; (b<25 && n[b]!='\0'); b++)//(0<25 && n[0](ex:-h)!='\0'(end of the string))iterate through each character of the input string (n) until it reaches either the end of the string or a maximum length of 25 characters.
    {
        //sum=sum+a;
        n[b]=n[b]+a; //n[0]=n[0]+3 :- h = h+3 ((n)h=k)
    }                //n[1]=n[1]+3 :- e = e+3 ((n)e=h) etc..
    cout<<"Your data is encrypted = " <<n; //data is encrypted as n = khoor
}
void decrypt(char n[25])
{
   int a;
    cout<<"Enter your defusion key = ";// same as 3
    cin>>a;
    for(char b=0; (b<25 && n[b]!='\0'); b++) //khoor
    {
        n[b]=n[b]-a;// n[0]=n[0]-3 :- k = k-3 ((n)k=h)
    }                //n[1]=n[1]-3 :- h = h-3 ((n)h=e) etc..
    cout<<"Your data is decrypted = " <<n;//data is decrypted as n = Hello
}

int main()
{
    int d; //Used to store the user's choice(1 for encryption,2 for decryption).
    char z[25],m;//z->An array of characters(string)to store the user's input(ex:- hello), m-> A character to store the user's choice(y/n) to continue running the program or not.
    while(m != 'n')//(y->the program will repeat the process, n-> loop will exit, and the program will terminate.
    {
    cout<<"Enter your input = ";
    cin>>z;
    cout<<"Press 1-> for Encrypt = "<<endl;
    cout<<"Press 2-> for Decrypt = "<<endl;
    cin>>d;
    switch(d)
    {
    case 1:
        encrypt(z);
        break;
    case 2:
         decrypt(z);
    break;
    defualt:
        cout<<"Input Invalid";
       }
       cout<<"\n Do you want to run more y/n= ";
       cin>>m;
    }
}
