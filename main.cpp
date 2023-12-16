#include <cstdlib>
#include <ctime>
#include <iostream>
#include "AVL.h"

using namespace std;

int main () {
  cout << "Testing the main" << endl;
  AVL<int> tree1;
  srand(time(NULL));
  for(int i = 0; i < 100; i++)
  {
    tree1.insert(rand() % 1000);
  }
  tree1.insert(1);
  tree1.insert(3);
  tree1.insert(10001);
  cout << "Searching for entered key 1: " << tree1.search(1) << endl; 
  cout << "Searching for entered key 3: " << tree1.search(3) << endl;
  cout << "Searching for wrong key: " << tree1.search(10000) << endl;
  cout <<"Traversing InOrder: " << endl;
  tree1.traverse_inOrder();
  cout << endl;
  
    

  return 0;
} 
