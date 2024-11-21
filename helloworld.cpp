#include <iostream>

using namespace std;

int main()
{
  string str = "Hello World";
  cout << str << endl;

  int a = 15, b = 20;
  cout << a + b << endl;
  return 0;
}
// Note : C++의 문자를 출력하기 위해서 cout << str << endl 형태로 작성해야 한다.
//        Rust의 fn main()과 유사하다 볼 수 있지만 Scope내 데이터 타입 정의 방식은 조금 더 단순한 느낌이다.
//        같은 데이터 타입을 가진 변수를 여러개 지정 하고자 할 경우 , 를 사용해서 여러 정의를 명시가 가능하다.