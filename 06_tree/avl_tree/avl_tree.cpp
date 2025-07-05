#include <iostream>
#include <algorithm>
using namespace std;

struct AVLNode {
    int data;
    AVLNode* left;
    AVLNode* right;
    int height;
    
    AVLNode(int val) : data(val), left(nullptr), right(nullptr), height(1) {}
};

class AVLTree {
private:
    AVLNode* root;
    
    // 헬퍼 함수들
    int getHeight(AVLNode* node);
    int getBalance(AVLNode* node);
    AVLNode* rightRotate(AVLNode* y);
    AVLNode* leftRotate(AVLNode* x);
    AVLNode* insertHelper(AVLNode* node, int value);
    AVLNode* removeHelper(AVLNode* root, int value);
    void inorderHelper(AVLNode* node);
    void destroyTree(AVLNode* node);
    
public:
    // 생성자
    AVLTree() {
        // TODO: root 초기화
    }
    
    // 소멸자
    ~AVLTree() {
        // TODO: 트리 전체 메모리 해제
    }
    
    // ADT 핵심 연산
    void insert(int value) {
        // TODO: AVL 트리에 값 삽입
    }
    
    void remove(int value) {
        // TODO: AVL 트리에서 값 삭제
    }
    
    void print() {
        // TODO: 중위 순회로 모든 노드 출력
    }
};

// 테스트 함수
void testAVLTree() {
    AVLTree avl;
    
    // TODO: 각 연산들을 테스트하는 코드 작성
    cout << "AVL Tree Test" << endl;
}

int main() {
    testAVLTree();
    return 0;
} 