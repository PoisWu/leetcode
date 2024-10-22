#include <algorithm>
#include <array>
#include <bitset>
#include <climits>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <tuple>
#include <unordered_map>
#include <unordered_set>
#include <vector>


using namespace std;
using lli = long long int;

template <typename T>
void print_2d_vector(vector<vector<T> > vvec);
template <typename T>
void print_vector(vector<T> vec);


class MinStack
{
    class node
    {
    public:
        int val;
        node *next;
        int min_val;
        node(int _val)
        {
            val = _val;
            next = NULL;
            min_val = _val;
        }
    };

public:
    node *stack;
    MinStack() { stack = NULL; }

    void push(int val)
    {
        node *tmp = stack;
        stack = new node(val);
        stack->next = tmp;
        if (tmp != NULL) {
            stack->min_val = min(val, tmp->min_val);
        }
    }

    void pop() { stack = stack->next; }

    int top() { return stack->val; }

    int getMin() { return stack->min_val; }
};


int main()
{
    Solution solver;
    vector<int> v1 = {};
    string s1 = "";
    string t1 = "";
    cout << solver.<< endl;
    print_vector(solver.);
    return 0;
}

template <typename T>
void print_vector(vector<T> vec)
{
    for (auto e : vec) {
        cout << e << " ";
    }
    cout << endl;
}

template <typename T>
void print_2d_vector(vector<vector<T> > vvec)
{
    for (auto vec : vvec) {
        for (auto e : vec) {
            cout << e << " ";
        }
        cout << endl;
    }
}
