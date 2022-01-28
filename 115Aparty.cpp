#include<bits/stdc++.h>
using namespace std;
int dfs(int cur, vector<bool> &vis, vector<int> &pos, vector<int> g) {
    int rVal; // what value to be returned
    // if(g[cur] == -1) {
    //     pos[cur] = 1;
    //     // cout << cur << " " << pos[cur] << endl;
    //     vis[cur] = true;
    //     return pos[cur];
        
    // }
    if(vis[cur]) {
        // cout << cur << " " << pos[cur] << endl;
        // vis[cur] = true;
        rVal =  pos[cur];
    }
    else {
        pos[cur] = dfs(g[cur], vis, pos, g) + 1;
        rVal = pos[cur];
        // cout << cur << " " << pos[cur] << endl;
        // return pos[cur];
        
    }
    vis[cur] = true;
    return rVal;
    
}
int main() {
    int n;
    cin >> n;
    vector<int> g(n);
    vector<int> pos(n);
    vector<bool> vis(n);
    int x;
    for(int i = 0; i < n; i++) {
        
        cin >> x;
        g[i] = x;
        g[i] = (g[i] == -1) ? g[i] : (g[i] - 1);
    }
    // cout << "here1";
    // for(int a: g)
    //     cout << a << " ";
    cout << "here2";
    for(int i = 0; i < n; i++) {
        cout << "here3";
        if(g[i] == -1) {
            pos[i] = 1;
            vis[i] = true;
        }
        else 
            dfs(i, vis, pos, g);
    }
    cout << *max_element(pos.begin(), pos.end());
}
