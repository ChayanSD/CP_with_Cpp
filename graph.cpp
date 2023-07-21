#include<bits/stdc++.h>
using namespace std;


void bfs(vector<int> adj[], int start, vector<bool>& visited) {
    queue<int> q;
    q.push(start);
    visited[start] = true;

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        cout << node << " "; // Process the current node

        // Traverse all the adjacent nodes
        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                q.push(neighbor);
                visited[neighbor] = true;
            }
        }
    }
}

void bfsTraversal(vector<int> adj[], int n) {
    vector<bool> visited(n + 1, false); // Mark all nodes as not visited

    // Start BFS from every unvisited node
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            bfs(adj, i, visited);
        }
    }
}




void dfsUtil(vector<int> adj[], int node, vector<bool>& visited) {
    cout << node << " "; // Process the current node
    visited[node] = true; // Mark the current node as visited

    // Traverse all the adjacent nodes
    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            dfsUtil(adj, neighbor, visited);
        }
    }
}

void dfs(vector<int> adj[], int n) {
    vector<bool> visited(n + 1, false); // Mark all nodes as not visited

    // Start DFS from every unvisited node
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            dfsUtil(adj, i, visited);
        }
    }
}

int main()
{
	#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout);
   #endif

        int n, m; //n = nodes m= edges
        cin>>n>>m;

       vector<int> adj[n+1];
       for(int i = 0 ; i<m; i++){
       	int u,v;
       	cin>>u>>v; //Every line edge between u and v.

       	adj[u].push_back(v);
       	adj[v].push_back(u);
       }

       cout<<"DFS traversal"<<endl;
        dfs(adj, n);
	
     cout<<"bfsTraversal"<<endl;
     bfsTraversal(adj,n);
	return 0;
}
