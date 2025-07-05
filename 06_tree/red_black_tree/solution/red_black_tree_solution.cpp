#include "red_black_tree_solution.h"

// 생성자
RedBlackTree::RedBlackTree() {
    NIL = new RBNode(0);
    NIL->color = BLACK;
    root = NIL;
}

// 소멸자
RedBlackTree::~RedBlackTree() {
    destroyTree(root);
    delete NIL;
}

// ========================================
// ADT 핵심 연산
// ========================================

// 삽입 연산
void RedBlackTree::insert(int value) {
    RBNode* z = new RBNode(value);
    z->left = NIL;
    z->right = NIL;
    
    RBNode* y = nullptr;
    RBNode* x = root;
    
    // BST 삽입 위치 찾기
    while (x != NIL) {
        y = x;
        if (z->data < x->data) {
            x = x->left;
        } else {
            x = x->right;
        }
    }
    
    z->parent = y;
    if (y == nullptr) {
        root = z; // 트리가 비어있음
    } else if (z->data < y->data) {
        y->left = z;
    } else {
        y->right = z;
    }
    
    // 새 노드를 빨간색으로 설정하고 속성 복원
    z->color = RED;
    insertFixup(z);
}

// 삭제 연산
void RedBlackTree::remove(int value) {
    RBNode* z = root;
    
    // 삭제할 노드 찾기
    while (z != NIL && z->data != value) {
        if (value < z->data) {
            z = z->left;
        } else {
            z = z->right;
        }
    }
    
    if (z == NIL) {
        cout << "값 " << value << "을(를) 찾을 수 없습니다." << endl;
        return;
    }
    
    RBNode* y = z;
    RBNode* x;
    Color yOriginalColor = y->color;
    
    if (z->left == NIL) {
        x = z->right;
        transplant(z, z->right);
    } else if (z->right == NIL) {
        x = z->left;
        transplant(z, z->left);
    } else {
        y = findMin(z->right);
        yOriginalColor = y->color;
        x = y->right;
        
        if (y->parent == z) {
            x->parent = y;
        } else {
            transplant(y, y->right);
            y->right = z->right;
            y->right->parent = y;
        }
        
        transplant(z, y);
        y->left = z->left;
        y->left->parent = y;
        y->color = z->color;
    }
    
    delete z;
    
    if (yOriginalColor == BLACK) {
        deleteFixup(x);
    }
}

// 중위 순회로 출력
void RedBlackTree::print() {
    cout << "중위 순회: ";
    inorderHelper(root);
    cout << endl;
}

// ========================================
// 내부 헬퍼 함수들
// ========================================

// 좌회전
void RedBlackTree::leftRotate(RBNode* x) {
    RBNode* y = x->right;
    x->right = y->left;
    
    if (y->left != NIL) {
        y->left->parent = x;
    }
    
    y->parent = x->parent;
    
    if (x->parent == nullptr) {
        root = y;
    } else if (x == x->parent->left) {
        x->parent->left = y;
    } else {
        x->parent->right = y;
    }
    
    y->left = x;
    x->parent = y;
}

// 우회전
void RedBlackTree::rightRotate(RBNode* y) {
    RBNode* x = y->left;
    y->left = x->right;
    
    if (x->right != NIL) {
        x->right->parent = y;
    }
    
    x->parent = y->parent;
    
    if (y->parent == nullptr) {
        root = x;
    } else if (y == y->parent->left) {
        y->parent->left = x;
    } else {
        y->parent->right = x;
    }
    
    x->right = y;
    y->parent = x;
}

// 삽입 후 속성 복원
void RedBlackTree::insertFixup(RBNode* k) {
    RBNode* u;
    
    while (k->parent != nullptr && k->parent->color == RED) {
        if (k->parent == k->parent->parent->right) {
            u = k->parent->parent->left; // 삼촌
            if (u->color == RED) {
                // 케이스 1: 삼촌이 빨간색
                u->color = BLACK;
                k->parent->color = BLACK;
                k->parent->parent->color = RED;
                k = k->parent->parent;
            } else {
                if (k == k->parent->left) {
                    // 케이스 2: 삼촌이 검은색 (삼각형)
                    k = k->parent;
                    rightRotate(k);
                }
                // 케이스 3: 삼촌이 검은색 (선형)
                k->parent->color = BLACK;
                k->parent->parent->color = RED;
                leftRotate(k->parent->parent);
            }
        } else {
            u = k->parent->parent->right; // 삼촌
            if (u->color == RED) {
                // 케이스 1: 삼촌이 빨간색
                u->color = BLACK;
                k->parent->color = BLACK;
                k->parent->parent->color = RED;
                k = k->parent->parent;
            } else {
                if (k == k->parent->right) {
                    // 케이스 2: 삼촌이 검은색 (삼각형)
                    k = k->parent;
                    leftRotate(k);
                }
                // 케이스 3: 삼촌이 검은색 (선형)
                k->parent->color = BLACK;
                k->parent->parent->color = RED;
                rightRotate(k->parent->parent);
            }
        }
        
        if (k == root) {
            break;
        }
    }
    
    root->color = BLACK;
}

// 삭제 후 속성 복원
void RedBlackTree::deleteFixup(RBNode* x) {
    RBNode* w;
    
    while (x != root && x->color == BLACK) {
        if (x == x->parent->left) {
            w = x->parent->right;
            if (w->color == RED) {
                // 케이스 1: 형제가 빨간색
                w->color = BLACK;
                x->parent->color = RED;
                leftRotate(x->parent);
                w = x->parent->right;
            }
            
            if (w->left->color == BLACK && w->right->color == BLACK) {
                // 케이스 2: 형제가 검은색, 형제의 자식들이 모두 검은색
                w->color = RED;
                x = x->parent;
            } else {
                if (w->right->color == BLACK) {
                    // 케이스 3: 형제가 검은색, 형제의 왼쪽 자식이 빨간색, 오른쪽 자식이 검은색
                    w->left->color = BLACK;
                    w->color = RED;
                    rightRotate(w);
                    w = x->parent->right;
                }
                // 케이스 4: 형제가 검은색, 형제의 오른쪽 자식이 빨간색
                w->color = x->parent->color;
                x->parent->color = BLACK;
                w->right->color = BLACK;
                leftRotate(x->parent);
                x = root;
            }
        } else {
            w = x->parent->left;
            if (w->color == RED) {
                // 케이스 1: 형제가 빨간색
                w->color = BLACK;
                x->parent->color = RED;
                rightRotate(x->parent);
                w = x->parent->left;
            }
            
            if (w->right->color == BLACK && w->left->color == BLACK) {
                // 케이스 2: 형제가 검은색, 형제의 자식들이 모두 검은색
                w->color = RED;
                x = x->parent;
            } else {
                if (w->left->color == BLACK) {
                    // 케이스 3: 형제가 검은색, 형제의 오른쪽 자식이 빨간색, 왼쪽 자식이 검은색
                    w->right->color = BLACK;
                    w->color = RED;
                    leftRotate(w);
                    w = x->parent->left;
                }
                // 케이스 4: 형제가 검은색, 형제의 왼쪽 자식이 빨간색
                w->color = x->parent->color;
                x->parent->color = BLACK;
                w->left->color = BLACK;
                rightRotate(x->parent);
                x = root;
            }
        }
    }
    
    x->color = BLACK;
}

// 최소값 찾기
RBNode* RedBlackTree::findMin(RBNode* node) {
    while (node->left != NIL) {
        node = node->left;
    }
    return node;
}

// 최대값 찾기
RBNode* RedBlackTree::findMax(RBNode* node) {
    while (node->right != NIL) {
        node = node->right;
    }
    return node;
}

// 노드 교체
void RedBlackTree::transplant(RBNode* u, RBNode* v) {
    if (u->parent == nullptr) {
        root = v;
    } else if (u == u->parent->left) {
        u->parent->left = v;
    } else {
        u->parent->right = v;
    }
    v->parent = u->parent;
}

// 중위 순회 헬퍼
void RedBlackTree::inorderHelper(RBNode* node) {
    if (node != NIL) {
        inorderHelper(node->left);
        cout << node->data << "(" << (node->color == RED ? "R" : "B") << ") ";
        inorderHelper(node->right);
    }
}

// 트리 메모리 해제 헬퍼
void RedBlackTree::destroyTree(RBNode* node) {
    if (node != NIL) {
        destroyTree(node->left);
        destroyTree(node->right);
        delete node;
    }
}

// ========================================
// 테스트 함수
// ========================================

void testRedBlackTree() {
    RedBlackTree rbt;
    
    cout << "=== 레드-블랙 트리 테스트 ===" << endl;
    
    // 삽입 테스트
    cout << "\n1. 삽입 연산 테스트:" << endl;
    int values[] = {7, 3, 18, 10, 22, 8, 11, 26, 2, 6, 13};
    int n = sizeof(values) / sizeof(values[0]);
    
    for (int i = 0; i < n; i++) {
        cout << "삽입: " << values[i] << endl;
        rbt.insert(values[i]);
        rbt.print();
    }
    
    // 삭제 테스트
    cout << "\n2. 삭제 연산 테스트:" << endl;
    int deleteValues[] = {18, 11, 3, 10};
    int deleteN = sizeof(deleteValues) / sizeof(deleteValues[0]);
    
    for (int i = 0; i < deleteN; i++) {
        cout << "삭제: " << deleteValues[i] << endl;
        rbt.remove(deleteValues[i]);
        rbt.print();
    }
    
    cout << "\n=== 테스트 완료 ===" << endl;
}

int main() {
    testRedBlackTree();
    return 0;
} 