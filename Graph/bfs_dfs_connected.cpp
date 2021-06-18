#include<iostream>
#include<queue>

using namespace std;


void printDFS(int ** edges, int n , int sv , bool * visited){

    cout << sv << endl;

    visited[sv] = true;

    for(int i = 0; i<n ; i++){

        if(i == sv)
        continue;

        if(edges[i][sv] == 1){
            if(visited[i] == 1)
            continue;
        printDFS(edges,n,i,visited);
        }
    }

    delete [] visited;
}

void DFS(int ** edges, int n ){

bool * visited = new bool [n];

for(int i = 0; i<n ; i++)
visited[i] = false;

printDFS(edges, n , 0 , visited);

}

void printBFS(int ** edges, int n , int sv , bool * visited){
    queue <int> pendingVertices;

    pendingVertices.push(sv);

    visited[sv] = true;

    while(!pendingVertices.empty()){
        int currentVertex = pendingVertices.front();
        pendingVertices.pop();

        cout << currentVertex << endl;

        for(int i = 0; i<n ; i++){

            if(edges[currentVertex][i] == 1)

            if(visited[i] == true)
            continue;

            pendingVertices.push(i);
            visited[i] = true;
        }
    }

    delete [] visited;
}

void BFS(int **edges , int n){

bool *visited = new bool[n];

for(int i = 0; i<n ; i++){
    visited[i] = false;
}

printBFS(edges,n,0,visited);

}

int main(){

int n,e;

cin >> n;

cin >> e;

int **edges = new int*[n];

for(int i = 0; i<n ; i++){
    edges[i] = new int[n];

    for(int j = 0; j<n ; j++){
        edges[i][j] = 0;
    }
}

for(int i = 0; i<e ; i++){
int f,s;

cin >> f >> s;

edges[f][s] = 1;
edges[s][f] = 1;

}


cout << " DFS " <<endl;

DFS(edges,n);

cout << " BFS "<<endl;

BFS(edges,n);

return 0;
}