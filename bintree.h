//https://www.cprogramming.com/tutorial/lesson18.html

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

	private:
        void insert(int key, node *leaf);
        node *search(int key, node *leaf);
        node *root;

};
