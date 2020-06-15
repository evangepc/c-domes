#ifndef HASHTABLE_H
#define HASHTABLE_H

class hashtable {

	public:
	    hashtable(int in_Size);
        void Insert();
        int Search();
        friend int mkascii(char* word)
	private:
	    char** Table;
	    int Size;
};

#endif // HASHTABLE_H
