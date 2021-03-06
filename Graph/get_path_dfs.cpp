#include<iostream>
#include<vector>
using namespace std;


vector<int>* getPath_DFS(int **edge,int v,int sv,int ev,bool *visited){

    if(sv == ev){
        vector<int>* output = new vector<int> ();
        output->push_back(ev);
        return output;
    }
    visited[sv]=true;

    for(int i=0;i<v;i++){
        if(edge[sv][i] && !visited[i]){
            vector<int>* smallOutput = getPath_DFS(edge,v,i,ev,visited);
            if(smallOutput!=NULL){
                smallOutput->push_back(sv);
                return smallOutput;
            }
        }
    }

    return NULL;

}


int main(){
    int v,e;

    int **edge = new int*[v];
    for(int i = 0 ; i<v ; i ++){
        edge[i] = new int [v];

        for(int j = 0; j<v ; j++)
        edge[i][j] = 0;
    }

    for(int i=0;i<e;i++){
        int f,s;
        cin>>f>>s;
        edge[f][s]=1;
        edge[s][f]=1;
    }

    bool *visited = new bool[v];
    for(int i=0;i<v;i++){
        visited[i]=false;
    }

    int sv,en;
    cin>>sv>>en;
 
    vector<int> *output = getPath_DFS(edge,v,sv,en,visited);
    if(output!=NULL){
        for(int i=0;i<output->size();i++){
            cout<<output->at(i)<<" ";
        }
    }

}
