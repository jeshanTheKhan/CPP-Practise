#include <bits/stdc++.h>
using namespace std;

int main()
{
    int node, edge, start_node;
    cin >> node;
    cin >> edge;

    bool visit[node + 1];
    vector<int> adj[node + 1]; // array of vector

    for (int i = 0; i < edge; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    cin >> start_node;

    for (int i = 0; i <= node; i++)
        visit[i] = false;

    queue<int> q;
    q.push(start_node);
    visit[start_node] = true;

    cout << "BFS result: " << endl;
    while (!q.empty())
    {
        int fr = q.front();
        q.pop();
        // char c
        char ch = char(fr + 'a' - 1);

        if (ch == 'a')
        {
            cout << "apple" << endl;
        }
        else if (ch == 'b')
        {
            cout << "bat" << endl;
        }
        else if (ch == 'c')
        {
            cout << "cat" << endl;
        }
        else if (ch == 'd')
        {
            cout << "dog" << endl;
        }
        else if (ch == 'e')
        {
            cout << "egg" << endl;
        }
        else if (ch == 'f')
        {
            cout << "fox" << endl;
        }
        else if (ch == 'g')
        {
            cout << "goat" << endl;
        }
        else if (ch == 'h')
        {
            cout << "horse" << endl;
        }
        else if (ch == 'i')
        {
            cout << "iguana" << endl;
        }
        else if (ch == 'j')
        {
            cout << "jaguar" << endl;
        }
        else if (ch == 'k')
        {
            cout << "kangaroo" << endl;
        }
        else if (ch == 'l')
        {
            cout << "lion" << endl;
        }
        else if (ch == 'm')
        {
            cout << "monkey" << endl;
        }
        else if (ch == 'n')
        {
            cout << "newt" << endl;
        }
        else if (ch == 'o')
        {
            cout << "owl" << endl;
        }
        else if (ch == 'p')
        {
            cout << "panda" << endl;
        }
        else if (ch == 'q')
        {
            cout << "quokka" << endl;
        }
        else if (ch == 'r')
        {
            cout << "rabbit" << endl;
        }
        else if (ch == 's')
        {
            cout << "snake" << endl;
        }
        else if (ch == 't')
        {
            cout << "tiger" << endl;
        }
        else if (ch == 'u')
        {
            cout << "umbrellabird" << endl;
        }
        else if (ch == 'v')
        {
            cout << "vulture" << endl;
        }
        else if (ch == 'w')
        {
            cout << "wolf" << endl;
        }
        else if (ch == 'x')
        {
            cout << "x-ray tetra" << endl;
        }
        else if (ch == 'y')
        {
            cout << "yak" << endl;
        }
        else if (ch == 'z')
        {
            cout << "zebra" << endl;
        }

        for (int i = 0; i < adj[fr].size(); i++)
        {
            if (!visit[adj[fr][i]])
            {
                visit[adj[fr][i]] = true;
                q.push(adj[fr][i]);
            }
        }
    }
}