#include <iostream> // Header File을 포함시키는 코드 [Screen Output이나 Keyboard Input 기능 제공]

using namespace std; // C++의 표준 lib이며 라이브러리를 namespace라는 명칭을 사용

int main()
{
  string str = "Hello World";
  cout << str << endl;

  int a = 15, b = 20;
  cout << a + b << endl;
  return 0;
}
// Result : [Thread 5376.0x28ec exited with code 0] / Hello World, 35
// Note : C++의 문자를 출력하기 위해서 cout << str << endl 형태로 작성해야 한다.
//        Rust의 fn main()과 유사하다 볼 수 있지만 Scope내 데이터 타입 정의 방식은 조금 더 단순한 느낌이다.
//        같은 데이터 타입을 가진 변수를 여러개 지정 하고자 할 경우 , 를 사용해서 여러 정의를 명시가 가능하다.