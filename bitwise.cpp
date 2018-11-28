//
// Created by Jorge Andrés Esguerra Alarcón on 11/28/18.
//

#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstdio>
#include <stack>
#include <cstring>
#include <vector>
#include <set>
#include <map>


using namespace std;
typedef long long ll;                   // comments that are mixed in with code
typedef pair<int, int> pii;
typedef unsigned long ull;              // are aligned to the right like this
typedef vector<pii> vii;
typedef vector<int> vi;
typedef pair<int,int> ii;
int n, m, k;

// m+1 players
// n soldier types
// k max amount of different bits.

int main ()
{
    int n, m;
    n = 4;
    m = 7;

    // bitwise operations:

    // 1. And
    int And = n & m;


    // 2. Or
    int Or = n | m;

    // 3. Not
    int Not = ~n;

    // 4. XOR
    int Xor = n ^ m;

    //5. Left Shift
    int ls = n << 2;
    int lBoundBreak = n << 33;
    int ls7 = m << 32;

    // 6. Right shift
    int rs = n >> 2;
    int rsBound = n >> 64;

    cout << "AND: " << And << endl;
    cout << "OR: " << Or << endl;
    cout << "NOT: " << Not << endl;
    cout << "XOR: " << Xor << endl;
    cout << "ls: " << ls << endl;
    cout << "LS Bound Break ?: " << lBoundBreak << endl;
    cout << "rs " << rs << endl;
    cout << "RS Bound Break ?: " << rsBound << endl;
    cout << "LS with 7: " << ls7 << endl;



}







