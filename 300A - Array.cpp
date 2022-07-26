#include <bits/stdc++.h>
#define  input cin>>
#define  print cout<<
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace  std;

int main() {
    FIO

    vector<int> all[3] = {{},
                          {},
                          {}}; // 0= smaller , 1= larger ,2 =zero
    int x;
    input x;
    while (x--) {
        int y;
        input y;
        if (y == 0)all[2].push_back(y);
        else if (0 > y) all[0].push_back(y);
        else all[1].push_back(y);
    }
    int s = all[0].size();

    if (all[2].empty()) all[2].push_back(0);

    if (all[0].size() == 2) {


        all[2].push_back(all[0].back());
        all[0].pop_back();
    }

    if (all[0].size() > 1) {
        int n;
        if (all[1].empty()) {
            n = 2;
            while (n--) {
                all[1].push_back(all[0].back());
                all[0].pop_back();

            }

        }
    }
    if (all[0].size() % 2==0) {
        all[2].push_back(all[0].back());
        all[0].pop_back();

    }

    for (auto a: all) {
        print a.size();
        for (int x: a) {
            print " " << x << " ";
        }
        print '\n';


    }
    return 0;


}
