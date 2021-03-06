#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Graph
{
private:
    int vertices;
    vector<int> *adjarr;
    bool *visited;

public:
    Graph(int data);
    void add_edge(int, int);
    void DFS(int start);
};

Graph::Graph(int data)
{
    vertices = data;
    adjarr = new vector<int>[vertices];
    visited = new bool[vertices];
    for (int i = 0; i < vertices; i++)
    {
        visited[i] = false;
    }
}

void Graph::add_edge(int a, int b)
{
    adjarr[a].push_back(b);
    adjarr[b].push_back(a);
}

// this is the function to print the DFS of the graph
void Graph::DFS(int start)
{
    visited[start] = true;
    cout << start << " ";
    vector<int>::iterator i;
    for (i = adjarr[start].begin(); i != adjarr[start].end(); i++)
    {
        if (!visited[*i])
        {
            DFS(*i);
        }
    }
}

int main()
{
    int v;
    cout << "Enter the no. of vertex you have in the graph(Undirected graph ) ";
    cin >> v;
    char ch;
    Graph g(v);
    do
    {
        int a, b;
        cout << "Enter the two vertex btw which you want to have edges ( like from i to j it will automatically take it as j to i) : ";
        cin >> a >> b;
        g.add_edge(a, b);
        cout << "Enter Y or y to enter the pair of edge .... Else enter any key !!! ";
        cin >> ch;

    } while (ch == 'y' or ch == 'Y');

    cout << "The DFS transerval of the graph is : ";
    g.DFS(0);
    cout << endl;

    return 0;
}