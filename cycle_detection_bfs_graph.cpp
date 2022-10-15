// Topological sorting only possible in DAG Directed Acyclic Graph
// Here we used the Kahn's algorithm of topological sorting and replaced the last part topo with cnt
// if topo sort is not possible(Cyclic) then cnt will not be N 

#include <bits/stdc++.h>
using namespace std;

bool toposort(int N, vector<int> adj[]) {
    queue<int> q;
    vector<int> indegree(N,0);

    for(int i = 0 ; i < N ; i++) {
        for(auto it: adj[i]) {
            indegree[it]++;
        } 
    }

    for(int i = 0 ; i < N ; i++) {
        if(indegree[i]==0) {
            q.push(i);
        }
    }

    // vector<int> topo;
    int cnt = 0;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        // topo.push_back(node);
        cnt++;
        for(auto it: adj[node]) {
            indegree[it]--;
            if(indegree[it]==0) {
                q.push(it);
            }
        }
    }

    if(cnt==N) return false;
    else return true;
    
}

int main(){
    
    return 0;
}
