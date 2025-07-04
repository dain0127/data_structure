# 이중 연결 리스트(Doubly Linked List)

## 개념
- 각 노드가 데이터, 이전 노드 포인터, 다음 노드 포인터를 가지는 선형 자료구조
- 양방향으로 순회 가능하며, 삭제 시 이전 노드 정보가 필요 없음

## 구조
```cpp
struct Node {
    int data;
    Node* prev;
    Node* next;
};
```

## C++ 구현 예제
```cpp
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
    Node(int val) : data(val), prev(nullptr), next(nullptr) {}
};

class DoublyLinkedList {
private:
    Node* head;
    Node* tail;
    
public:
    DoublyLinkedList() : head(nullptr), tail(nullptr) {}
    
    void insertAtEnd(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = tail = newNode;
            return;
        }
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }
    
    void displayForward() {
        Node* current = head;
        while (current) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
    
    void displayBackward() {
        Node* current = tail;
        while (current) {
            cout << current->data << " ";
            current = current->prev;
        }
        cout << endl;
    }
};
```

## 장점
- 양방향 순회 가능
- 삭제 시 O(1) 시간 복잡도 (위치가 주어진 경우) 