#include <iostream>
using namespace std;

class DynamicArray {
private:
    int* arr;
    int capacity;
    int size;
    
public:
    // 생성자
    DynamicArray(int initialCapacity = 10) {
        // TODO: 동적 배열 초기화
    }
    
    // 소멸자
    ~DynamicArray() {
        // TODO: 메모리 해제
    }
    
    // 접근 연산
    int access(int index) {
        // TODO: 인덱스 유효성 검사 후 해당 위치의 값 반환
        return 0;
    }
    
    // 검색 연산
    int search(int value) {
        // TODO: 선형 검색으로 값의 인덱스 반환, 없으면 -1
        return -1;
    }
    
    // 끝에 삽입
    void pushBack(int value) {
        // TODO: 배열 끝에 값 삽입, 필요시 크기 확장
    }
    
    // 지정 위치에 삽입
    bool insert(int index, int value) {
        // TODO: 지정된 인덱스에 값 삽입, 성공하면 true 반환
        return false;
    }
    
    // 끝에서 삭제
    int popBack() {
        // TODO: 배열 끝의 값 삭제하고 반환
        return 0;
    }
    
    // 지정 위치에서 삭제
    bool remove(int index) {
        // TODO: 지정된 인덱스의 값 삭제, 성공하면 true 반환
        return false;
    }
    
    // 순회 연산
    void traverse() {
        // TODO: 배열의 모든 요소 출력
    }
    
    // 크기 확장
    void resize(int newCapacity) {
        // TODO: 배열 크기를 newCapacity로 확장
    }
    
    // 배열 크기 반환
    int getSize() {
        return size;
    }
    
    // 배열 용량 반환
    int getCapacity() {
        return capacity;
    }
    
    // 배열이 비어있는지 확인
    bool isEmpty() {
        // TODO: 배열이 비어있으면 true 반환
        return false;
    }
};

// 테스트 함수
void testDynamicArray() {
    DynamicArray arr(5);
    
    // TODO: 각 연산들을 테스트하는 코드 작성
    cout << "Dynamic Array Test" << endl;
}

int main() {
    testDynamicArray();
    return 0;
} 