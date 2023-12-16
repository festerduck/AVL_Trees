#include <cstdlib>
#include <ctime>
#include <iostream>
#include "AVL.h"

using namespace std;

int main () {
  cout << "Testing the main" << endl;
  AVL<int> tree1;
  srand(time(NULL));
  tree1.insert(1);
  tree1.insert(3);
  tree1.insert(5);
  tree1.insert(11);
  tree1.insert(23);
  tree1.insert(25);
  tree1.insert(2000);
  cout << "Searching for entered key 1: " << tree1.search(1) << endl; 
  cout << "Searching for entered key 3: " << tree1.search(3) << endl;
  cout << "Searching for wrong key: " << tree1.search(1700) << endl;
  cout <<"Traversing InOrder: " << endl;
  tree1.traverse_inOrder();
  tree1.traverse_preOrder();
  cout << endl;
  
    

  return 0;
} 
