#include <iostream>
#include "listacircular.cpp"

using namespace std;

int main()
{
    ListaCircular<int> l;

    for(int i = 0; i < 10; i++) l.add(i);

    cout << l.get(4);

    return 0;
}
