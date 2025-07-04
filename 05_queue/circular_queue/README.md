# 원형 큐(Circular Queue)

## 개념
- 배열의 끝과 시작을 연결하여 원형으로 사용하는 큐
- 메모리 공간을 효율적으로 재사용
- front와 rear 포인터가 배열의 끝에 도달하면 처음으로 돌아감

## 구조
```cpp
class CircularQueue {
private:
    int* arr;
    int capacity;
    int front;
    int rear;
    int size;
};
```

## C++ 구현 예제
```cpp
#include <iostream>
using namespace std;

class CircularQueue {
private:
    int* arr;
    int capacity;
    int front;
    int rear;
    int size;
    
public:
    CircularQueue(int cap) {
        capacity = cap;
        arr = new int[capacity];
        front = 0;
        rear = -1;
        size = 0;
    }
    
    ~CircularQueue() {
        delete[] arr;
    }
    
    bool isEmpty() {
        return size == 0;
    }
    
    bool isFull() {
        return size == capacity;
    }
    
    void enqueue(int val) {
        if (isFull()) {
            cout << "Queue is Full!" << endl;
            return;
        }
        rear = (rear + 1) % capacity;
        arr[rear] = val;
        size++;
    }
    
    int dequeue() {
        if (isEmpty()) {
            cout << "Queue is Empty!" << endl;
            return -1;
        }
        int val = arr[front];
        front = (front + 1) % capacity;
        size--;
        return val;
    }
    
    int peek() {
        if (isEmpty()) return -1;
        return arr[front];
    }
    
    void display() {
        if (isEmpty()) return;
        int i = front;
        do {
            cout << arr[i] << " ";
            i = (i + 1) % capacity;
        } while (i != (rear + 1) % capacity);
        cout << endl;
    }
};
```

## 장점
- 메모리 효율적 재사용
- 배열 공간 낭비 방지 