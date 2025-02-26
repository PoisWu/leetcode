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

class Node
{
public:
    int val;
    Node *next;
    Node *random;

    Node(int _val)
    {
        val = _val;
        next = NULL;
        random = NULL;
    }
};


class Solution
{
public:
    unordered_map<Node *, Node *> map;
    Node *copyRandomList(Node *head)
    {
        if (head == NULL) {
            return NULL;
        }
        Node *newhead = new Node(head->val);
        map[head] = newhead;
        if (head->next != NULL) {
            if (map.find(head->next) != map.end()) {
                newhead->next = map[head->next];
            } else {
                newhead->next = copyRandomList(head->next);
            }
        }
        if (head->random != NULL) {
            if (map.find(head->random) != map.end()) {
                newhead->random = map[head->random];
            } else {
                newhead->random = copyRandomList(head->random);
            }
        }
        return newhead;
    }
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
