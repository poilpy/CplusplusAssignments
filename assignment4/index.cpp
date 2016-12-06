#include<iostream>
#include<string>
#include<fstream>

using namespace std;

const int MAX_LETTERS = 20;

struct WordType
{
    string words;
    int count = 0;
    void initialize(string letters)
    {
        words = letters;
    }
    void upOne()
    {
        count++;
    }
    string getWord()
    {
        return words;
    }
    int getCount()
    {
        return count;
    }
};






struct TreeNode
{
    WordType value;
    TreeNode* left;
    TreeNode* right;
};





class listType
{
public:
    listType()
    {
        root = NULL;
    }
    ~listType()
    {
        delete root;
    }
    TreeNode* createNode(string letters)
    {
        TreeNode* n = new TreeNode;
        n->value.initialize(letters);
        n->value.upOne();
        n->left = NULL;
        n->right = NULL;
        return n;
    }
    void PutOrIncrement(TreeNode*& tree, string letters)
    {
        if(tree == NULL)
        {
            createNode(letters);
        }
        else if(tree->value.getWord() == letters)
        {
            tree->value.upOne();
        }
//        else if(tree->value.getWord() < letters)
//        {
//            PutOrIncrement(tree->left, letters);
//        }
//        else
//        {
//            PutOrIncrement(tree->right, letters);
//        }

    }
    void print(TreeNode*& tree, ofstream& outFile)
    {
        if(tree != NULL)
        {
            print(tree->left, outFile);
            outFile << tree->value.getWord() << " " << tree->value.getCount() << "." << endl;
            print(tree->left, outFile);
        }
    }
    TreeNode* root;
};




//-------------------------




int main()
{
    listType list;
    TreeNode* t;
    string letters;

    bool eofReached = false;


    string txtFile = "index.in";
    ofstream dataFile;
    dataFile.open("a4indexColinMurphy");
    ifstream read(txtFile.c_str());

    while(!read.eof())
    {
        read >> letters;
        if(letters.length() < 3)
            read >> letters;


        eofReached = read.eof();

        list.PutOrIncrement(t, letters);
    list.print(list.root, dataFile);

    }


    list.print(list.root, dataFile);


    dataFile.close();
    read.close();


}


//-------------------------------------






