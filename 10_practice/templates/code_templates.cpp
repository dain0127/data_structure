#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <stack>
using namespace std;

// ========================================
// 기본 템플릿
// ========================================

// 빠른 입출력 설정
void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

// 디버깅용 출력 함수
template<typename T>
void debugPrint(const T& container, const string& name = "") {
    if (!name.empty()) cout << name << ": ";
    for (const auto& item : container) {
        cout << item << " ";
    }
    cout << endl;
}

// ========================================
// 배열 관련 템플릿
// ========================================

// 2D 배열 초기화
vector<vector<int>> create2DArray(int rows, int cols, int defaultValue = 0) {
    return vector<vector<int>>(rows, vector<int>(cols, defaultValue));
}

// 배열 출력
void printArray(const vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i];
        if (i < arr.size() - 1) cout << " ";
    }
    cout << endl;
}

// 배열 역순 출력
void printArrayReverse(const vector<int>& arr) {
    for (int i = arr.size() - 1; i >= 0; i--) {
        cout << arr[i];
        if (i > 0) cout << " ";
    }
    cout << endl;
}

// ========================================
// 연결 리스트 템플릿
// ========================================

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

// 연결 리스트 생성
ListNode* createLinkedList(const vector<int>& values) {
    if (values.empty()) return nullptr;
    
    ListNode* head = new ListNode(values[0]);
    ListNode* current = head;
    
    for (int i = 1; i < values.size(); i++) {
        current->next = new ListNode(values[i]);
        current = current->next;
    }
    
    return head;
}

// 연결 리스트 출력
void printLinkedList(ListNode* head) {
    ListNode* current = head;
    while (current) {
        cout << current->val;
        if (current->next) cout << " -> ";
        current = current->next;
    }
    cout << endl;
}

// 연결 리스트 메모리 해제
void deleteLinkedList(ListNode* head) {
    while (head) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }
}

// ========================================
// 트리 템플릿
// ========================================

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// 이진 트리 생성 (레벨 순서)
TreeNode* createBinaryTree(const vector<int>& values) {
    if (values.empty() || values[0] == -1) return nullptr;
    
    TreeNode* root = new TreeNode(values[0]);
    queue<TreeNode*> q;
    q.push(root);
    
    int i = 1;
    while (!q.empty() && i < values.size()) {
        TreeNode* current = q.front();
        q.pop();
        
        // 왼쪽 자식
        if (i < values.size() && values[i] != -1) {
            current->left = new TreeNode(values[i]);
            q.push(current->left);
        }
        i++;
        
        // 오른쪽 자식
        if (i < values.size() && values[i] != -1) {
            current->right = new TreeNode(values[i]);
            q.push(current->right);
        }
        i++;
    }
    
    return root;
}

// 트리 메모리 해제
void deleteTree(TreeNode* root) {
    if (!root) return;
    deleteTree(root->left);
    deleteTree(root->right);
    delete root;
}

// ========================================
// 해시 테이블 템플릿
// ========================================

// 빈도수 계산
unordered_map<int, int> getFrequency(const vector<int>& arr) {
    unordered_map<int, int> freq;
    for (int num : arr) {
        freq[num]++;
    }
    return freq;
}

// 중복 요소 찾기
vector<int> findDuplicates(const vector<int>& arr) {
    unordered_set<int> seen;
    vector<int> duplicates;
    
    for (int num : arr) {
        if (seen.find(num) != seen.end()) {
            duplicates.push_back(num);
        } else {
            seen.insert(num);
        }
    }
    
    return duplicates;
}

// ========================================
// 정렬 템플릿
// ========================================

// 커스텀 정렬 (pair 기준)
void sortBySecond(vector<pair<int, int>>& pairs) {
    sort(pairs.begin(), pairs.end(), 
         [](const pair<int, int>& a, const pair<int, int>& b) {
             return a.second < b.second;
         });
}

// 부분 정렬 (상위 k개)
vector<int> getTopK(const vector<int>& arr, int k) {
    vector<int> result = arr;
    partial_sort(result.begin(), result.begin() + k, result.end(), greater<int>());
    return vector<int>(result.begin(), result.begin() + k);
}

// ========================================
// 그래프 템플릿
// ========================================

// 인접 리스트 그래프 생성
vector<vector<int>> createGraph(int vertices) {
    return vector<vector<int>>(vertices);
}

// 무방향 그래프에 간선 추가
void addEdge(vector<vector<int>>& graph, int u, int v) {
    graph[u].push_back(v);
    graph[v].push_back(u);
}

// 방향 그래프에 간선 추가
void addDirectedEdge(vector<vector<int>>& graph, int u, int v) {
    graph[u].push_back(v);
}

// ========================================
// BFS/DFS 템플릿
// ========================================

// BFS 템플릿
vector<int> bfs(const vector<vector<int>>& graph, int start) {
    vector<int> result;
    vector<bool> visited(graph.size(), false);
    queue<int> q;
    
    q.push(start);
    visited[start] = true;
    
    while (!q.empty()) {
        int current = q.front();
        q.pop();
        result.push_back(current);
        
        for (int neighbor : graph[current]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
    
    return result;
}

// DFS 템플릿 (재귀)
void dfsRecursive(const vector<vector<int>>& graph, int node, 
                  vector<bool>& visited, vector<int>& result) {
    visited[node] = true;
    result.push_back(node);
    
    for (int neighbor : graph[node]) {
        if (!visited[neighbor]) {
            dfsRecursive(graph, neighbor, visited, result);
        }
    }
}

// DFS 템플릿 (반복문)
vector<int> dfsIterative(const vector<vector<int>>& graph, int start) {
    vector<int> result;
    vector<bool> visited(graph.size(), false);
    stack<int> s;
    
    s.push(start);
    
    while (!s.empty()) {
        int current = s.top();
        s.pop();
        
        if (!visited[current]) {
            visited[current] = true;
            result.push_back(current);
            
            // 역순으로 스택에 추가 (순서 유지)
            for (int i = graph[current].size() - 1; i >= 0; i--) {
                int neighbor = graph[current][i];
                if (!visited[neighbor]) {
                    s.push(neighbor);
                }
            }
        }
    }
    
    return result;
}

// ========================================
// 유틸리티 템플릿
// ========================================

// 문자열 분할
vector<string> split(const string& str, char delimiter) {
    vector<string> tokens;
    string token;
    istringstream tokenStream(str);
    
    while (getline(tokenStream, token, delimiter)) {
        tokens.push_back(token);
    }
    
    return tokens;
}

// 문자열 조인
string join(const vector<string>& tokens, const string& delimiter) {
    if (tokens.empty()) return "";
    
    string result = tokens[0];
    for (int i = 1; i < tokens.size(); i++) {
        result += delimiter + tokens[i];
    }
    
    return result;
}

// 숫자 자릿수 계산
int countDigits(int num) {
    if (num == 0) return 1;
    return static_cast<int>(log10(abs(num))) + 1;
}

// 팩토리얼 계산
long long factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

// 최대공약수 (GCD)
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// 최소공배수 (LCM)
int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

// ========================================
// 테스트 템플릿
// ========================================

// 테스트 함수 템플릿
void runTest(const string& testName, function<void()> testFunction) {
    cout << "Running test: " << testName << endl;
    try {
        testFunction();
        cout << "✓ Test passed: " << testName << endl;
    } catch (const exception& e) {
        cout << "✗ Test failed: " << testName << " - " << e.what() << endl;
    }
    cout << endl;
}

// 성능 측정 템플릿
template<typename Func>
double measureTime(Func func) {
    auto start = chrono::high_resolution_clock::now();
    func();
    auto end = chrono::high_resolution_clock::now();
    
    chrono::duration<double, milli> duration = end - start;
    return duration.count();
}

// ========================================
// 메인 함수 예시
// ========================================

int main() {
    fastIO();
    
    // 테스트 예시
    runTest("Array Operations", []() {
        vector<int> arr = {1, 2, 3, 4, 5};
        printArray(arr);
        printArrayReverse(arr);
    });
    
    runTest("LinkedList Operations", []() {
        vector<int> values = {1, 2, 3, 4, 5};
        ListNode* head = createLinkedList(values);
        printLinkedList(head);
        deleteLinkedList(head);
    });
    
    runTest("Hash Table Operations", []() {
        vector<int> arr = {1, 2, 2, 3, 3, 3, 4};
        auto freq = getFrequency(arr);
        for (const auto& pair : freq) {
            cout << pair.first << ": " << pair.second << endl;
        }
    });
    
    return 0;
} 