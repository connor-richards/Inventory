#ifndef _INVENTORY_
#define _INVENTORY_
#include <iostream>

using std::string;
using std::ostream;

/* Inventory class to keep track of 
 * types of inventory items */
class Inventory
{
  /* Private member vars for an item */
  private:
    string m_name;
    float m_price;
    int m_in_stock;

  /* Public member functions for the class */
  public:
    Inventory(string,float,int);
    void sell();
    friend ostream& operator<<(ostream&, const Inventory&);
};

#endif
