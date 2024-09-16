#include <iostream>
#include "list.cpp"

using namespace std;

int main()
{
    List<int> listaSE;
    listaSE.add(11);
    listaSE.add(22);
    listaSE.add(34);

    listaSE.printList();

    listaSE.removeAll();
    listaSE.printList();

    return 0;
}
