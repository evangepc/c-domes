//https://www.cprogramming.com/tutorial/lesson18.html
#ifndef BINTREE_H
#define BINTREE_H

class bintree{

	public:
	    bintree();
        void insert(int key);
        node *search(int key);
        void delete(int key);


	    struct node{
            int key;
            node *left;
            node *right;};

	protected:
        void insert(int key, node *leaf);
        node *search(int key, node *leaf);
        node *root;

};

#endif // BINTREE_H
