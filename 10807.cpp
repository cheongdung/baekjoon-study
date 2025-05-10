#include <iostream>
using namespace std;

int main(){
	int N, v;
	cin >> N;
	int* arr = new int[N];
	for(int i=0; i<N; i++){
		cin >> arr[i];
	}
	cin >> v;
	int count = 0;
	for(int i=0;i<N; i++){
		if (arr[i] == v){
			count++;
		}
	} 
	cout << count << endl;
	
	delete[] arr;
	return 0;
}
