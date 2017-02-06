#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;


int main()
{
    cout << "this is a test!" << endl;

    vector<int> intvector;
    for(int i = 0; i < 10; ++i)
    {
        intvector.push_back(i);
    }
    
    copy(intvector.begin(), intvector.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    return 0;
}
