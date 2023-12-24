#pragma once
#include <iostream>
#include <list>
#include <queue>
#include <stack>

using namespace std;

class graph{
private: 
    int n;
    int **adjacency;
public:
    graph(int);
    ~graph();
    void add_edge(int, int);
    void remove_edge(int,int);
    void bfs(int);
    void dfs(int,int);
    list<int> out_edge(int);
    list<int> in_edge(int);
};