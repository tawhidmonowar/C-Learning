#include <bits/stdc++.h>
using namespace std;
#define maxn 1000

int main()
{
    int i,n,e;
    cout << "Enter the number of nodes: ";
    cin >> n;
    cout << "Enter the number of edges: ";
    cin >> e;

    vector<int>adj[maxn];

    for(i=0;i<e;i++)
    {
        int a,b;
        cin >>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    queue <int> que;
    int start,temp;
    cout << "Enter Starting node: ";
    cin >> start;
    que.push(start);
    int vis[maxn]={0};

    while(!que.empty())
    {
        temp = que.front();
        cout << temp<<",";
        que.pop();

        for(i=0;i<adj[temp].size();i++)
        {
            if(!vis[adj[temp][i]])
            {
                vis[adj[temp][i]]=1;
                que.push(adj[temp][i]);
            }
        }
    }

    return 0;
}

