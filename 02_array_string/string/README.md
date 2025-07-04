# 문자열(String)

## 개념
- 문자들의 배열로 구성된 자료구조
- C++에서는 char 배열 또는 string 클래스 사용
- 문자열 끝에는 null 문자('\0')가 자동으로 추가됨

## C++에서의 문자열 표현
1. **char 배열**: C 스타일 문자열
2. **string 클래스**: C++ 표준 라이브러리

## C++ 구현 예제
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    // C 스타일 문자열
    char cStr[] = "Hello";
    
    // C++ string 클래스
    string cppStr = "World";
    
    // 문자열 연결
    string result = cppStr + " " + cppStr;
    
    // 문자열 길이
    cout << "Length: " << cppStr.length() << endl;
    
    // 문자열 검색
    size_t pos = cppStr.find("or");
    
    return 0;
}
```

## 주요 연산
- 길이 구하기: O(1) (string 클래스)
- 검색: O(n)
- 연결: O(n) 