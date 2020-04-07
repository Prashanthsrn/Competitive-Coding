#include <ostream>
#include <bits/stdc++.h> 
#include <sstream>
using namespace std;

int main(){
	int t = 0;
	string s1;

	cin >> t;
	
	cin >> s1;
	int i = 0;



	while(i < t){

		string year(s1.begin(), s1.begin() + 4);
		string month(s1.begin() + 5, s1.begin() + 7);
		string day(s1.begin() + 8, s1.begin() + 10);

		stringstream year1(year);
		stringstream month1(month);
		stringstream day1(day);
		
		int y = 0, m = 0, d = 0;
		year1 >> y;
		month1 >> m;
		day1 >> d;

		int temp = (date % 2 == 0)?15:16;

		// check whether leap year or not
		int leap = 0;
		if(y % 4 == 0 )
			if(y % 100 != 0)
				leap = 1;
			
			if(y % 400 == 0)
					leap = 1;
					

		//jan(1), mar(3), may(5), july(7), august(8), oct(10), dec(12)

		
		if((m == 1 || m == 3 || m == 5 || m == 7 || m == 8 ||  m == 10 || m == 12)){
			cout << 1 + (31 - d)/2 << endl; 
		}
	

		else if((m == 4 || m == 6 || m == 9 || m == 11 )){
			cout << 1 + (30 - d)/2 + temp << endl;
		}
	
		else if(m == 2){
			if(leap == 1){
				cout << (29 - d)/2 + 1 << endl;
			}	
			else if(leap == 0){
				cout << temp + (28 - d)/2 + 1 << endl;
			}
		}
		i++;
	}	
}