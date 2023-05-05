#include <iostream>
using namespace std;

class ShopItem
{
    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }

    void getData()
    {
        cout << "Code of this item is " << id << endl;
        cout << "Price of the item is " << price << endl;
    }
};

//        1  2  3
//
//        ^
//        |
//        |
//        ptr
//        ptrTemp

int main()
{
    int size = 3;
    // int *ptr = &size;
    // int *ptr = new int[34];
    /*
        1.General store items
        2.veggies shop items
        2.Hardware shop items
    */

    ShopItem *ptr = new ShopItem[size];
    ShopItem *ptrTemp = ptr;
    int p;
    float q;
    for (int i = 0; i < size; i++)
    {
        cout << " Enter Id and Price of item " << i + 1 << ": " << endl;
        cin >> p >> q;
        ptr->setData(p, q);
        ptr++;
    }

    for (int j = 0; j < size; j++)
    {
        cout << "Item nmber: " << j + 1 << endl;
        ptrTemp->getData();
        ptrTemp++;
    }
    return 0;
}