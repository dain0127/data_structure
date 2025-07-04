#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    
    Node(int val) : data(val), next(nullptr) {}
};

class SinglyLinkedList {
private:
    Node* head;
    int size;
    
public:
    // 생성자
    SinglyLinkedList() {
        // TODO: head와 size 초기화
    }
    
    // 소멸자
    ~SinglyLinkedList() {
        // TODO: 모든 노드 메모리 해제
    }
    
    // 접근 연산
    int access(int index) {
        // TODO: 인덱스 위치의 값 반환, 유효하지 않으면 -1
        return -1;
    }
    
    // 검색 연산
    int search(int value) {
        // TODO: 값의 인덱스 반환, 없으면 -1
        return -1;
    }
    
    // 앞에 삽입
    void insertFront(int value) {
        // TODO: 리스트 맨 앞에 노드 삽입
    }
    
    // 뒤에 삽입
    void insertBack(int value) {
        // TODO: 리스트 맨 뒤에 노드 삽입
    }
    
    // 지정 위치에 삽입
    bool insertAt(int index, int value) {
        // TODO: 지정된 인덱스에 노드 삽입, 성공하면 true 반환
        return false;
    }
    
    // 앞에서 삭제
    int deleteFront() {
        // TODO: 맨 앞 노드 삭제하고 값 반환
        return -1;
    }
    
    // 뒤에서 삭제
    int deleteBack() {
        // TODO: 맨 뒤 노드 삭제하고 값 반환
        return -1;
    }
    
    // 지정 위치에서 삭제
    bool deleteAt(int index) {
        // TODO: 지정된 인덱스의 노드 삭제, 성공하면 true 반환
        return false;
    }
    
    // 순회 연산
    void traverse() {
        // TODO: 모든 노드의 값 출력
    }
    
    // 리스트 크기 반환
    int getSize() {
        return size;
    }
    
    // 리스트가 비어있는지 확인
    bool isEmpty() {
        // TODO: 리스트가 비어있으면 true 반환
        return false;
    }
    
    // 리스트 뒤집기
    void reverse() {
        // TODO: 리스트를 역순으로 뒤집기
    }
    
    // 중간 노드 찾기
    Node* findMiddle() {
        // TODO: 중간 노드 반환 (홀수면 중간, 짝수면 중간 두 개 중 뒤쪽)
        return nullptr;
    }
};

// 테스트 함수
void testSinglyLinkedList() {
    SinglyLinkedList list;
    
    // TODO: 각 연산들을 테스트하는 코드 작성
    cout << "Singly Linked List Test" << endl;
}

int main() {
    testSinglyLinkedList();
    return 0;
} 