#ifndef RED_BLACK_TREE_H
#define RED_BLACK_TREE_H

#include <iostream>
using namespace std;

// 노드 색상 열거형
enum Color { RED, BLACK };

// 레드-블랙 트리 노드 구조체
struct RBNode {
    int data;
    Color color;
    RBNode* left;
    RBNode* right;
    RBNode* parent;
    
    RBNode(int val) : data(val), color(RED),
    left(nullptr), right(nullptr), parent(nullptr) {}
};

class RedBlackTree {
private:
    RBNode* root;
    RBNode* NIL; // NIL 노드 (모든 리프 노드의 자식)
    
    // 내부 헬퍼 함수들
    void leftRotate(RBNode* x);
    void rightRotate(RBNode* y);
    void insertFixup(RBNode* k);
    void deleteFixup(RBNode* x);
    RBNode* findMin(RBNode* node);
    RBNode* findMax(RBNode* node);
    void transplant(RBNode* u, RBNode* v);
    void destroyTree(RBNode* node);
    void inorderHelper(RBNode* node);
    
public:
    // 생성자
    RedBlackTree();
    
    // 소멸자
    ~RedBlackTree();
    
    // ADT 핵심 연산
    void insert(int value);  // 삽입
    void remove(int value);  // 삭제
    void print();           // 중위 순회로 출력

};

#endif // RED_BLACK_TREE_H 