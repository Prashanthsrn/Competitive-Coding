#include <bits/stdc++.h>
using namespace std;

int main(){
	int t = 0;
	cin >> t ;
	int k = 0;
	
	
	
	while(k < t){
		int m, n;
		cin >> n >> m;
		int i = 0;
		int check = 1;

		int arr[m]; 
		int count[n];
		for(int i = 0; i < n; i++){
			count[i] = 0;
		}

		for(int i = 0; i < m; i++){
			cin >> arr[i];
			count[arr[i] - 1]++;
		
			int temp = count[arr[i] - 1];

			for(int j = 0; j < n; j++){
				int temp2 = abs(temp - count[j]);
				
				if(temp2 == 2){
					
					check = 0;

				}
			}

		}	
		if(check == 1)
			printf ("YES\n");
		else
			printf("NO\n");

		k++;
	}	
}	



