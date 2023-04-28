#include<iostream>
#include<string>
using namespace std;
int main()
{
	int k,i,ch;
	string str,temp="";
	cout<<"enter the key:";
	cin>>k;
	cout<<"enter the plaintext: ";
	cin>>str;
	cout<<"1. ENCRYPTION"<<"\n";
	cout<<"2. DECRYPTION"<<"\n";
	cout<<"Enter ur choice:";
	cin>>ch;
	switch(ch)
	{

	case 1:
	for(i=0;i<str.length();i++)
	{
		temp+=(str[i]-'A'+k)%26+'A';
	}
	cout<<"Encrypted text: "<<temp;
	break;
 case 2:
		for(i=0;i<str.length();i++)
	{
		temp+=(str[i]-'A'-k)%26+'A';
	}
	cout<<"Decrypted text: "<<temp;
	break;

case 3:

cout<<"invalid choice..";
break;
}

}
