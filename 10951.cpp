
#include <iostream>
using namespace std;
int main(){
	while(true){
		int A, B;
		cin >> A >> B;
		cout << A+B;
	}
	return 0;
}

단순히 이렇게 짜면 출력 초과가 난다.

몇 개를 입력받는지 알 수 없다는 게 키포인트..

이렇게 주어진 입력 파일만 갖고 입력을 받을 때 더이상 읽을 수 있는 데이터가 없는 경우, 즉 파일의 끝일 때 이를 EOF end of file이라고 함.

**문제 요구사항 : EOF일 때 반복문을 종료하라는 것**

- 참고
    
    입력 스트림이 더이상 읽을 것이 없는 파일의 끝에 도달했을 때를 처리해야 함.
    
    파일의 끝까지 읽었다고 EOF가 되는 것이 아님. 끝까지 읽고난 뒤 다음 파일을 읽으려고 할 때 읽을 데이터가 없으면 EOF가 되는 것.
    
    예를들어 abcd<EOF> ← 이 텍스트를 읽는다면 
    
    단순히 d까지 읽었다고 EOF가 되는 것이 아니라 끝에 도달한 후 더 읽으려고 할 때 EOF
    
    while(!(cin >> A >> B).eof()){}`

    그 전 입력값을 갖고 있기 때문에!! 읽기 시도를 한 후 EOF 검사를 해야 함
    
    while(cin >> A >> B) 도 가능
    

-------------------풀이 1-------------------

#include <iostream>
using namespace std;
int main(){
	int A, B;
	while(!(cin >> A >> B).eof()){
		cout << A+B <<endl;
	}
	return 0;
}

-------------------풀이 2-------------------

#include <iostream>
using namespace std;
int main(){
	int A, B;
	while(cin >> A >> B){
		cout << A+B <<endl;
	}
	return 0;
}


참고 : https://st-lab.tistory.com/257
