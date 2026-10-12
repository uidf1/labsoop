#include <iostream>

using namespace std;

int main()
{
    enum Color {red=10,black,white};
    Color something[4] = {red,black,white,red};
    for(int i=0;i<4;i++)
    {
        cout << "Элемент " << i << " имеет значение (код): " << something[i] << endl;
    }
}