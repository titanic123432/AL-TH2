#include <iostream>
#include <stack>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char** argv) 
{
	stack <char> s;	
	char l[100001];
	cin >> l;
	int st;
	for(int i = 0; i < l[i]; i++)
	{
		if(l[i] == '(')
		{
			s.push(l[i]);		
		}
		else
		{
			if(l[i - 1] == '(')
			{
				s.pop();
				st += s.size();
			}
			else
			{
				s.pop();
				st++;
			}
		}
	}
	cout << st;			
	return 0;
}
