#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    cin >> s;

    vector<pair<char,int>> v;

    for(char ch : s){

        if(ch>='a' && ch<='z')
            v.push_back({ch,0});

        else{

            int pi = v.size()-1;
            v[pi].second = v[pi].second*10 + (ch-'0');
        }
    }

    for(auto [ch,rpt] : v){

        if(rpt==0)
            rpt=1;

        while(rpt--)
            cout<<ch;
    }
}
