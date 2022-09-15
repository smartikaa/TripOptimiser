#include "MyForm.h"
#include "Src.h"
#include <vector>
#include <windows.h>
#include <conio.h>
#include <string>
#include <sstream>
#include<iostream>



using namespace System;
using namespace System::Windows::Forms;
using namespace std;
#define n 5
std::vector<int> wt;
std::vector<int> val;
#define Vv 5
#define INF INT_MAX
int graph[Vv][Vv];
int s, d;
std::vector<int> item;
std::vector<int> itemwt;
bool visited[Vv] = {false};
int maximum(int x, int y)
{
    return (x > y) ? x : y;
}

vector<int> in;

vector<string> cities{ "Agra", "Delhi", "Mumbai", "Jaipur", "Chennai" };
void ADD2WT(int weight)
{
	wt.push_back(weight);
}
void ADD2VAL(int value)
{
	val.push_back(value);
}
int minimumCostSimplePath(int u, int destination)
{
    if (u == destination)
        return 0;

    visited[u] = 1;

    int ans = INF;

    for (int i = 0; i < Vv; i++)
    {
        if (graph[u][i] != INF && !visited[i])
        {

            int curr = minimumCostSimplePath(i,
                destination);

            if (curr < INF)
            {

                int temp = ans;
                ans = min(ans, graph[u][i] + curr);
                in.push_back(i);
            }
        }
    }  
  }
vis[u]=0;
    s = u;
    d = destination;
    return ans;
}
string callpk() {
    string a = "";
    for (int i = item.size()-1;i >=0 ;i--)
    {
        a = a+"Item" + " " + to_string(item[i])+"\n ";
    }
    return "You can carry : " + a;
}
string printcity() {
    string a = "";
    int temp = s;
    for (int i = in.size() - 1;i >= 0;i--)
    {
        a = a + cities[temp] + "->" + cities[in[i]] + " (" + to_string(graph[temp][in[i]]) + "Rs)"+"\n";
        temp = in[i];
    }
    return a;
}

string printknapSack()
{
    int i, w;
    int K[n + 1][16];
    for (i = 0; i <= n; i++)
    {
        for (w = 0; w <= 15; w++)
        {
            if (i == 0 || w == 0)
                K[i][w] = 0;
            else if (wt[i - 1] <= w)
                K[i][w] = max(val[i - 1] +
                    K[i - 1][w - wt[i - 1]],
                    K[i - 1][w]);
            else
                K[i][w] = K[i - 1][w];
        }
    }

    int res = K[n][15];

    w = 15;
    for (i = n; i > 0 && res > 0; i--)
    {

        if (res == K[i - 1][w])
            continue;
        else
        {
            item.push_back(i);
            itemwt.push_back(wt[i - 1]);
            res = res - val[i - 1];
            w = w - wt[i - 1];
        }
    }
   
    return callpk();

   
}

[STAThreadAttribute]
void main() {
    for (int i = 0; i < Vv; i++)
    {
        for (int j = 0; j < Vv; j++)
        {
            graph[i][j] = INF;
        }
    }

    bool visited[Vv] = { 0 };

    graph[0][1] = 400;
    graph[0][3] = 200;
    graph[1][2] = 70;
    graph[2][0] = 150;
    graph[3][2] = 650;
    graph[4][3] = 490;
    graph[0][4] = 250;

	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	TripOptimiser::MyForm form;
	Application::Run(% form);
   
}

