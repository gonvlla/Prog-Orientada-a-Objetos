#include <iostream>
#include "bimap.cpp"

using namespace std;

int main()
{
    Bimap<char,int> bm;

    bm.add('K',33);
    bm.add('S',22);

    cout << bm.getKey(33) << endl;
    cout << bm.getValue('K') << endl;



    return 0;
}
