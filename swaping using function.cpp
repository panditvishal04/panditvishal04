#include <iostream>
using namespace std;
void swap(int *p1, int *p2)
{
    int *z;
    *z = *p1;
    *p1 = *p2;
    *p2 = *z;
    cout << "after swapping:" << endl;
    cout << *p1 << endl
         << *p2;
}
int main()
{
    int a, b;
    cout << "a =";
    cin >> a;
    cout << "b =";
    cin >> b;
    swap(&a,&b);
    return 0;
}