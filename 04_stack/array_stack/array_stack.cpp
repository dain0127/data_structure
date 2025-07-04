#include <iostream>
using namespace std;

class ArrayStack {
private:
    int* arr;
    int capacity;
    int top;
    
public:
    // 생성자
    ArrayStack(int size) {
        // TODO: 배열과 변수들 초기화
    }
    
    // 소멸자
    ~ArrayStack() {
        // TODO: 메모리 해제
    }
    
    // Push 연산
    void push(int value) {
        // TODO: 스택에 값 삽입, 오버플로우 체크
    }
    
    // Pop 연산
    int pop() {
        // TODO: 스택에서 값 삭제하고 반환, 언더플로우 체크
        return -1;
    }
    
    // Peek 연산
    int peek() {
        // TODO: top 값 반환 (삭제하지 않음)
        return -1;
    }
    
    // 스택이 비어있는지 확인
    bool isEmpty() {
        // TODO: 스택이 비어있으면 true 반환
        return false;
    }
    
    // 스택이 가득 찬지 확인
    bool isFull() {
        // TODO: 스택이 가득 찬지 확인
        return false;
    }
    
    // 스택 크기 반환
    int getSize() {
        // TODO: 현재 스택에 저장된 요소 개수 반환
        return 0;
    }
    
    // 스택 용량 반환
    int getCapacity() {
        return capacity;
    }
    
    // 스택 출력
    void display() {
        // TODO: 스택의 모든 요소 출력 (top부터 bottom까지)
    }
    
    // 스택 초기화
    void clear() {
        // TODO: 스택을 비우기 (top을 -1로 설정)
    }
};

// 테스트 함수
void testArrayStack() {
    ArrayStack stack(5);
    
    // TODO: 각 연산들을 테스트하는 코드 작성
    cout << "Array Stack Test" << endl;
}

int main() {
    testArrayStack();
    return 0;
} 