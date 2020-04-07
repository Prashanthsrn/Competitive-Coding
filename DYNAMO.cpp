#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;

		long long unsigned int a;
		cin >> a;

		long long unsigned int temp = 1;
		for(int i = 0; i < n; i++){
			temp = temp * 10;
		}

		long long unsigned int s = a + 2 * temp ;
		cout << s << endl;
		fflush(stdout);

		long long unsigned int b;
		cin >> b;

		long long unsigned int c = temp - b;
		cout << c << endl;
		fflush(stdout);

		long long unsigned int d;
		cin >> d;

		long long unsigned int e = temp - d;
		cout << e << endl;
		fflush(stdout);

		int correct;
		cin >> correct;
		if(correct == -1){
			break;
		}
	}


}
