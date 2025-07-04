#include <iostream>
using namespace std;

class StaticArray {
private:
    static const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int size;
    
public:
    // 생성자
    StaticArray() {
        // TODO: 배열 초기화
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
    
    // 삽입 연산
    bool insert(int index, int value) {
        // TODO: 지정된 인덱스에 값 삽입, 성공하면 true 반환
        return false;
    }
    
    // 삭제 연산
    bool remove(int index) {
        // TODO: 지정된 인덱스의 값 삭제, 성공하면 true 반환
        return false;
    }
    
    // 순회 연산
    void traverse() {
        // TODO: 배열의 모든 요소 출력
    }
    
    // 배열 크기 반환
    int getSize() {
        return size;
    }
    
    // 배열이 비어있는지 확인
    bool isEmpty() {
        // TODO: 배열이 비어있으면 true 반환
        return false;
    }
    
    // 배열이 가득 찬지 확인
    bool isFull() {
        // TODO: 배열이 가득 찬지 확인
        return false;
    }
};

// 테스트 함수
void testStaticArray() {
    StaticArray arr;
    
    // TODO: 각 연산들을 테스트하는 코드 작성
    cout << "Static Array Test" << endl;
}

int main() {
    testStaticArray();
    return 0;
} 