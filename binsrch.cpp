#include <iostream>
#include "binsrch.h"

using std::cout;
using std::endl;
using std::cin;
         
int main()
{
    int* keys;
    int nkeys, key, index;
    cout << "\nHow may keys? ";
    cin >> nkeys; 
    keys = new int[nkeys];
    cout << "\nEnter elements (in sorted order)..." << endl;
    for (int i = 0; i < nkeys; i++)    
    {
        cin >> keys[i];
    }

    cout << "\nWhich key to be searched?...(use -1 to terminate) ";
    cin >> key;
    while (key != -1)
    {
        cout << "\nWhich key to be searched?...(use -1 to terminate) ";
        cin >> key;
        index = binsrch(keys, nkeys, key);
        if (index != -1)
        {
            cout << "Key " << key << " found at location " << index <<\
               endl; 
        }
        else 
        {
            cout << "Key " << key << " not found." << endl;
        }
    } 
    delete keys;
    return 0;
}
