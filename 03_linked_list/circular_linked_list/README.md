# 원형 연결 리스트(Circular Linked List)

## 개념
- 마지막 노드가 첫 번째 노드를 가리키는 연결 리스트
- 단일 원형 연결 리스트와 이중 원형 연결 리스트가 있음
- 순환 구조로 인해 특정 응용에 유용

## 구조
```cpp
struct Node {
    int data;
    Node* next;  // 마지막 노드가 head를 가리킴
};
```

## C++ 구현 예제
```cpp
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

class CircularLinkedList {
private:
    Node* head;
    
public:
    CircularLinkedList() : head(nullptr) {}
    
    void insertAtEnd(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
            head->next = head;  // 자기 자신을 가리킴
            return;
        }
        Node* current = head;
        while (current->next != head) {
            current = current->next;
        }
        current->next = newNode;
        newNode->next = head;
    }
    
    void display() {
        if (!head) return;
        Node* current = head;
        do {
            cout << current->data << " ";
            current = current->next;
        } while (current != head);
        cout << endl;
    }
};
```

## 활용
- 원형 버퍼 구현
- 라운드 로빈 스케줄링
- 게임의 플레이어 순서 관리 