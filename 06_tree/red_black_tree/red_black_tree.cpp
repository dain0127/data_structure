#include "red_black_tree.h"

// 생성자
RedBlackTree::RedBlackTree() {
    // TODO: NIL 노드와 root 초기화
}

// 소멸자
RedBlackTree::~RedBlackTree() {
    // TODO: 트리 전체 메모리 해제
}

// ========================================
// ADT 핵심 연산
// ========================================

// 삽입 연산
void RedBlackTree::insert(int value) {
    // TODO: 레드-블랙 트리 삽입 구현
    // 1. 일반 BST 삽입
    // 2. 새 노드를 빨간색으로 설정
    // 3. insertFixup 호출하여 속성 복원
}

// 삭제 연산
void RedBlackTree::remove(int value) {
    // TODO: 레드-블랙 트리 삭제 구현
    // 1. 일반 BST 삭제
    // 2. 삭제된 노드의 색상 확인
    // 3. deleteFixup 호출하여 속성 복원
}

// 중위 순회로 출력
void RedBlackTree::print() {
    // TODO: 중위 순회로 모든 노드 출력
}

// ========================================
// 내부 헬퍼 함수들
// ========================================

// 좌회전
void RedBlackTree::leftRotate(RBNode* x) {
    // TODO: 노드 x를 기준으로 좌회전 구현
    // 1. x의 오른쪽 자식 y 설정
    // 2. y의 왼쪽 서브트리를 x의 오른쪽으로 이동
    // 3. x를 y의 왼쪽 자식으로 설정
    // 4. 부모 포인터 업데이트
}

// 우회전
void RedBlackTree::rightRotate(RBNode* y) {
    // TODO: 노드 y를 기준으로 우회전 구현
    // 1. y의 왼쪽 자식 x 설정
    // 2. x의 오른쪽 서브트리를 y의 왼쪽으로 이동
    // 3. y를 x의 오른쪽 자식으로 설정
    // 4. 부모 포인터 업데이트
}

// 삽입 후 속성 복원
void RedBlackTree::insertFixup(RBNode* k) {
    // TODO: 삽입 후 레드-블랙 트리 속성 복원
    // 케이스 1: 삼촌이 빨간색
    // 케이스 2: 삼촌이 검은색 (삼각형)
    // 케이스 3: 삼촌이 검은색 (선형)
}

// 삭제 후 속성 복원
void RedBlackTree::deleteFixup(RBNode* x) {
    // TODO: 삭제 후 레드-블랙 트리 속성 복원
    // 케이스 1: 형제가 빨간색
    // 케이스 2: 형제가 검은색, 형제의 자식들이 모두 검은색
    // 케이스 3: 형제가 검은색, 형제의 왼쪽 자식이 빨간색, 오른쪽 자식이 검은색
    // 케이스 4: 형제가 검은색, 형제의 오른쪽 자식이 빨간색
}

// 최소값 찾기
RBNode* RedBlackTree::findMin(RBNode* node) {
    // TODO: 주어진 서브트리에서 최소값 노드 반환
    return NIL;
}

// 최대값 찾기
RBNode* RedBlackTree::findMax(RBNode* node) {
    // TODO: 주어진 서브트리에서 최대값 노드 반환
    return NIL;
}

// 노드 교체
void RedBlackTree::transplant(RBNode* u, RBNode* v) {
    // TODO: 노드 u를 노드 v로 교체
    // 1. u의 부모와 v 연결
    // 2. v의 부모 포인터 설정
}

// 중위 순회 헬퍼
void RedBlackTree::inorderHelper(RBNode* node) {
    // TODO: 재귀적 중위 순회 구현
}

// 트리 메모리 해제 헬퍼
void RedBlackTree::destroyTree(RBNode* node) {
    // TODO: 재귀적으로 트리 메모리 해제
}

// ========================================
// 테스트 함수
// ========================================

void testRedBlackTree() {
    RedBlackTree rbt;
    
    // TODO: 각 연산들을 테스트하는 코드 작성
    cout << "Red-Black Tree Test" << endl;
}

int main() {
    testRedBlackTree();
    return 0;
} 