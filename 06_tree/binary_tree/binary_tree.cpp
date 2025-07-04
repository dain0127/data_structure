#include <iostream>
#include <queue>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

class BinaryTree {
private:
    Node* root;
    
public:
    // 생성자
    BinaryTree() {
        // TODO: root 초기화
    }
    
    // 소멸자
    ~BinaryTree() {
        // TODO: 트리 전체 메모리 해제
    }
    
    // 삽입 연산
    void insert(int value) {
        // TODO: 트리에 새 노드 삽입
    }
    
    // 검색 연산
    Node* search(int value) {
        // TODO: 값이 있는 노드 반환, 없으면 nullptr
        return nullptr;
    }
    
    // 삭제 연산
    bool remove(int value) {
        // TODO: 값을 가진 노드 삭제, 성공하면 true 반환
        return false;
    }
    
    // 전위 순회
    void preorderTraversal() {
        // TODO: 전위 순회로 모든 노드 출력
    }
    
    // 중위 순회
    void inorderTraversal() {
        // TODO: 중위 순회로 모든 노드 출력
    }
    
    // 후위 순회
    void postorderTraversal() {
        // TODO: 후위 순회로 모든 노드 출력
    }
    
    // 레벨 순회 (BFS)
    void levelOrderTraversal() {
        // TODO: 레벨 순회로 모든 노드 출력
    }
    
    // 트리 높이 계산
    int getHeight() {
        // TODO: 트리의 높이 반환
        return 0;
    }
    
    // 노드 개수 계산
    int getNodeCount() {
        // TODO: 트리의 총 노드 개수 반환
        return 0;
    }
    
    // 리프 노드 개수 계산
    int getLeafCount() {
        // TODO: 리프 노드 개수 반환
        return 0;
    }
    
    // 트리가 비어있는지 확인
    bool isEmpty() {
        // TODO: 트리가 비어있으면 true 반환
        return false;
    }
    
    // 트리 초기화
    void clear() {
        // TODO: 트리 전체 삭제
    }
    
private:
    // 재귀적 전위 순회 헬퍼 함수
    void preorderHelper(Node* node) {
        // TODO: 재귀적 전위 순회 구현
    }
    
    // 재귀적 중위 순회 헬퍼 함수
    void inorderHelper(Node* node) {
        // TODO: 재귀적 중위 순회 구현
    }
    
    // 재귀적 후위 순회 헬퍼 함수
    void postorderHelper(Node* node) {
        // TODO: 재귀적 후위 순회 구현
    }
    
    // 높이 계산 헬퍼 함수
    int heightHelper(Node* node) {
        // TODO: 재귀적으로 높이 계산
        return 0;
    }
    
    // 노드 개수 계산 헬퍼 함수
    int nodeCountHelper(Node* node) {
        // TODO: 재귀적으로 노드 개수 계산
        return 0;
    }
    
    // 리프 노드 개수 계산 헬퍼 함수
    int leafCountHelper(Node* node) {
        // TODO: 재귀적으로 리프 노드 개수 계산
        return 0;
    }
    
    // 트리 삭제 헬퍼 함수
    void clearHelper(Node* node) {
        // TODO: 재귀적으로 트리 삭제
    }
};

// 테스트 함수
void testBinaryTree() {
    BinaryTree tree;
    
    // TODO: 각 연산들을 테스트하는 코드 작성
    cout << "Binary Tree Test" << endl;
}

int main() {
    testBinaryTree();
    return 0;
} 