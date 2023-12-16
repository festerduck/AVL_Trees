#pragma once
#include "BST.h"

template <class Comparable>
class AVL : public BST<Comparable>{
  public:
    AVL();
    AVL(const AVL<Comparable> &t);
    void insert(const Comparable x);
    void remove(const Comparable x);
    virtual ~AVL();
  private:
    int height(BinaryNode<Comparable>* root) const;
    void insert(const Comparable x, BinaryNode<Comparable>* &root) ;
    void balance(BinaryNode<Comparable>* &root);
    void singleLeftRotation(BinaryNode<Comparable>* &k2);
    void singleRightRotation(BinaryNode<Comparable>* &k2);
    void doubleLeftRotation(BinaryNode<Comparable>* &k3);
    void doubleRightRotation(BinaryNode<Comparable>* &k3);
    void remove(const Comparable &x, BinaryNode<Comparable>* &root); 
  
};
