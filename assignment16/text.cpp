#include <iostream>
#include <vector>

using namespace std;
void display(vector<vector<int>> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[0].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}
void change(vector<vector<int>> &v, int a, int b)
{
    for (int i = 0; i < v.size(); i++)
    {
        v[i][b] = 0;
    }
    for (int j = 0; j < v[0].size(); j++)
    {
        v[a][j] = 0;
    }
}
int main()
{
    int a, b;
    vector<vector<int>> v = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[0].size(); j++)
        {
            if (v[i][j] == 0)
            {
                a = i;
                b = j;

                break;
            }
        }
    }
    change(v, a, b);

    display(v);
}