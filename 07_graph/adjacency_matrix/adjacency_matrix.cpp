#include <iostream>
#include <vector>
using namespace std;

class Graph {
private:
    int V; // 정점의 개수
    vector<vector<int>> adjMatrix; // 인접 행렬
    bool directed; // 방향 그래프 여부
    
public:
    // 생성자
    Graph(int vertices, bool isDirected = false) {
        // TODO: 그래프 초기화
        // 1. 정점 개수 설정
        // 2. 인접 행렬 초기화 (모든 값 0)
        // 3. 방향 그래프 여부 설정
    }
    
    // 소멸자
    ~Graph() {
        // TODO: 메모리 정리 (필요한 경우)
    }
    
    // ADT 핵심 연산
    void addEdge(int u, int v, int weight = 1) {
        // TODO: 정점 u에서 v로 가는 간선 추가
        // 1. adjMatrix[u][v] = weight 설정
        // 2. 무방향 그래프인 경우 adjMatrix[v][u] = weight도 설정
    }
    
    void removeEdge(int u, int v) {
        // TODO: 정점 u에서 v로 가는 간선 제거
        // 1. adjMatrix[u][v] = 0 설정
        // 2. 무방향 그래프인 경우 adjMatrix[v][u] = 0도 설정
    }
    
    void print() {
        // TODO: 인접 행렬을 시각적으로 출력
    }
};

// 테스트 함수
void testAdjacencyMatrix() {
    // TODO: 각 연산들을 테스트하는 코드 작성
    cout << "Adjacency Matrix Graph Test" << endl;
    
    // 예시: 5개 정점의 무방향 그래프 생성
    Graph g(5, false);
    
    // 간선 추가 테스트
    // g.addEdge(0, 1);
    // g.addEdge(0, 2);
    // g.addEdge(1, 2);
    // g.addEdge(1, 3);
    // g.addEdge(2, 3);
    // g.addEdge(3, 4);
}

int main() {
    testAdjacencyMatrix();
    return 0;
} 