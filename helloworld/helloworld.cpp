#include <iostream>
#include <vector>
#include <bitset>
using namespace std;

int main(int argc, char const *argv[])
{
  int ia = 1 << 0;  // ROLE_PARENT
  int ib = 1 << 1;  // ROLE_SIBLING

  string sIa = bitset<8>(ia).to_string();
  string sIb = bitset<8>(ib).to_string();

  cout << ia << " -- " << sIa << endl; // 01
  cout << ib << " -- " << sIb << endl; // 10

  return 0;
}
