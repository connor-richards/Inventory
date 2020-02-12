#include <iostream>
#include <iomanip>
#include "Inventory.h"

using std::string;
using std::ostream;
  
/* Inventory object constructor,
 * initializes member variables */
Inventory::Inventory(string name, float price, int count)
{
  m_name = name;
  m_price = price;
  m_in_stock = count;
}

/* Sell function to maintain stock values */
void Inventory::sell()
{
  if(m_in_stock > 0) {
    m_in_stock--;
  }
  else {
    std::cerr << "Sorry, that item is out of stock" << std::endl;
  }
}

/* Information function to produce output
 * about the inventory item */
ostream& operator<<(ostream& stream, const Inventory& item)
{
  stream << item.m_name 
         << " $"
         << std::fixed << std::setprecision(2) << item.m_price;
  return stream;
}
