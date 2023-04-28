#include<iostream>
using namespace std;
int main()
{
	char alpha[27][3] = { { 'a', 'f' }, { 'b', 'a' }, { 'c', 'g' }, { 'd', 'u' }, {'e', 'n' }, { 'f', 'i' }, { 'g', 'j' }, { 'h', 'k' }, { 'i', 'l' }, {'j', 'm' }, { 'k', 'o' }, { 'l', 'p' }, { 'm', 'q' }, { 'n', 'r' }, {'o', 's' }, { 'p', 't' }, { 'q', 'v' }, { 'r', 'w' }, { 's', 'x' }, {'t', 'y' }, { 'u', 'z' }, { 'v', 'b' }, { 'w', 'c' }, { 'x', 'd' }, {'y', 'e' }, { 'z', 'h' } };
	string input;
	cout<<"ENTER THE PLAIN TEXT : ";
	cin>>input;
	for(int i=0;i<input.length();i++)
	{
		for(int j=0;j<27;j++)
		{
		if(input[i]==alpha[j][0])
		{
			input[i]=alpha[j][1];
		}
		}
	}
	cout<<"ENCRYPTED MESSAGE : "<<input;
}
