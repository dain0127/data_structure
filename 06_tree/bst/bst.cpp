#include <iostream>
using namespace std;

struct BSTNode {
    int data;
    BSTNode* left;
    BSTNode* right;
    
    BSTNode(int val) : data(val), left(nullptr), right(nullptr) {}
};

class BinarySearchTree {
private:
    BSTNode* root;
    
    // 재귀적 헬퍼 함수들
    BSTNode* insertHelper(BSTNode* node, int value);
    BSTNode* removeHelper(BSTNode* node, int value);
    void inorderHelper(BSTNode* node);
    void destroyTree(BSTNode* node);
    
public:
    // 생성자
    BinarySearchTree() {
        // TODO: root 초기화
    }
    
    // 소멸자
    ~BinarySearchTree() {
        // TODO: 트리 전체 메모리 해제
    }
    
    // ADT 핵심 연산
    void insert(int value) {
        // TODO: BST에 값 삽입
    }
    
    void remove(int value) {
        // TODO: BST에서 값 삭제
    }
    
    void print() {
        // TODO: 중위 순회로 모든 노드 출력
    }
};

// 테스트 함수
void testBST() {
    BinarySearchTree bst;
    
    // TODO: 각 연산들을 테스트하는 코드 작성
    cout << "Binary Search Tree Test" << endl;
}

int main() {
    testBST();
    return 0;
} 