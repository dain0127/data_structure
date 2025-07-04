# 연결 리스트 기반 큐(Linked Queue)

## 개념
- 연결 리스트를 사용하여 구현한 큐 자료구조
- head와 tail 포인터로 삽입/삭제 위치 관리
- 동적 크기 조절 가능

## 구조
```cpp
struct Node {
    int data;
    Node* next;
};

class LinkedQueue {
private:
    Node* front;
    Node* rear;
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

class LinkedQueue {
private:
    Node* front;
    Node* rear;
    
public:
    LinkedQueue() : front(nullptr), rear(nullptr) {}
    
    bool isEmpty() {
        return front == nullptr;
    }
    
    void enqueue(int val) {
        Node* newNode = new Node(val);
        if (isEmpty()) {
            front = rear = newNode;
            return;
        }
        rear->next = newNode;
        rear = newNode;
    }
    
    int dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow!" << endl;
            return -1;
        }
        Node* temp = front;
        int val = temp->data;
        front = front->next;
        
        if (front == nullptr) {
            rear = nullptr;
        }
        
        delete temp;
        return val;
    }
    
    int peek() {
        if (isEmpty()) return -1;
        return front->data;
    }
    
    ~LinkedQueue() {
        while (!isEmpty()) {
            dequeue();
        }
    }
};
```

## 장점
- 크기 제한 없음
- 메모리 효율적
- 동적 할당 