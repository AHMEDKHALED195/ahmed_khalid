#include <iostream>
#include <sstream>
#include <string>
#include<algorithm>
#include<cstdlib>
#include<cmath>
#include<vector>
using namespace std;
int main()
{
	bool y = 1;
	int score = 0, arr[5]={ 10,11,12,13,14 };
	string Q[] = { "What color is the sky ?","what animal says meow ?","what is the opposite of hot ?","what is the capital city of france?","what is 2+2 ?" };
	string ans[] = { "blue","cat","cold","paris","4" };
	srand(time(0));
	for (int j = 0; j < 5; )
	{
		y = 1;
		int x = rand() % 5;
		for (int i = 0; i < 5; i++) {
			if (arr[i] == x ) { y = 0; break; }
		}
		if (y == 1) {
			arr[j] = x;
			j++;
		}
	
		}
	
		
     

	
	for (int i=0; i < 5; i++)
	{
		
		 cout << "Question" << i + 1 << ":" << Q[arr[i]] << endl;
		string answer;
		cin >> answer;
		if (answer == ans[arr[i]])
			{
				cout << "correct"<<endl;
			score++;
			}
		else 
		{
			cout << "incorrect" << " the correct answer is " << ans[arr[i]]<<endl;
		}


		}
	cout<<"score = " << score <<"of 5" << endl;
	
  return 0;
}