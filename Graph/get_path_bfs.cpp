#include<iostream>
#include<queue>
#include<unordered_map>

using namespace std;

void get_pathDFS(int ** edges, bool * visited, int sv, int ev){


    int answer = 0;

    unordered_map<int, int> map;

    queue <int> pendingVertices;

    pendingVertices.push(sv);

    visited[sv] = true;

    map[sv] = -1;

    while(!pendingVertices.empty()){

        int currentVertex = pendingVertices.front();
        pendingVertices.pop();

        for(int i = 0; i<n ; i++{
            if(i == currentVertex)
            continue;

            if(edges[currentVertex][i] == 1){
                if(visited[currentVertex])
                continue;

                map[i] = currentVertex;
                
                pendingVertices.push(i);
                visited[i] = true;

                if(i == ev){
                    answer = 1;
                    break
                }
            }
        }
    }


    if(answer){
        for(int i=ev;i!=-1;){
        cout<< i << endl;
        i=map.at(i);
        }
    }
    else
    cout << "NO PATH FOUND";
}

void BFS(int **edges, int n, int start, int end){
    bool* visited = new bool[n];

    for(int i = 0; i<n ; i++){
        visited[i] = false;
    }

    get_pathDFS(edges,visited,start,end);


}

int main(){
    int n,e;

    cin >> n >> e;

    int **edges = new int * [n];

    cout << " ENTER THE START AND END PATH";

    for(int i = 0; i<n ; i++){
        edges[i] = new int[n];

        for(int j = 0; j<n ; j++)
        edges[i][j] = 0;
    }

    int end,start;

    cin >> start;
    cin >> end;

    BFS(edges,n, start, end);

}