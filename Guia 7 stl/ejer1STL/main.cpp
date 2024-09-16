#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

int main()
{
    srand(time(NULL));
    vector<int> miVector;
    cout << "Vector original: " << endl;
    for(int i = 0; i < 200; ++i)
    {        //++I
        miVector.push_back(rand()%100);
        cout << miVector[i] << " ";
    }

    sort(miVector.begin(),miVector.end());
    reverse(miVector.begin(), miVector.end());

    cout << endl << "Vector ordenado descendentemente: " << endl;
    for(vector <int>:: iterator i = miVector.begin(); i != miVector.end(); ++i)
        cout << *i << " ";

    sort(miVector.begin() + 9, miVector.end() - 50);
    reverse(miVector.begin(), miVector.end());
    cout << endl << "Vector ordenado descendentemente con restricciones: "<< endl;

    for(vector <int>:: iterator i = miVector.end() - 50; i != miVector.begin() +9; --i)
        cout << *i << " ";

    return 0;
}
