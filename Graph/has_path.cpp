#include<iostream>
#include<queue>

using namespace std;

int start, theend;


void printBFS(int ** edges, int n , int sv , bool * visited){

int flag = 0;

queue <int> pendingVertices;

pendingVertices.push(sv);

visited[sv] = true;

while(!pendingVertices.empty()){

    int currentVertex = pendingVertices.front();
    pendingVertices.pop();

    if(currentVertex == theend){
    cout<< " FOUND " << endl;
    flag = 1;
    break;
    }

    for(int i = 0; i<n ; i++){
        if(i == currentVertex)
        continue;

        if(edges[currentVertex][i] == 1){

            if(visited[i] == true)
            continue;

            pendingVertices.push(i);
            visited[i] = true;
        }
    }
}

if(flag == 0)
cout<<" NO PATH FOUND "<< endl;

}

void BFS(int ** edges, int n){

    bool * visited = new bool [n];

    for(int i = 0; i < n ; i++){
        visited[i] = false;
    }

    printBFS(edges,n,start, visited);
}

int main(){
    int n,e;

    cin >> n >> e;

    int **edges = new int * [n];

    cout << " ENTER THE START AND END PATH";

    cin >> start;
    cin >> theend;

    for(int i = 0; i<n ; i++){
        edges[i] = new int[n];

        for(int j = 0; j<n ; j++)
        edges[i][j] = 0;
    }

    BFS(edges,n);

}