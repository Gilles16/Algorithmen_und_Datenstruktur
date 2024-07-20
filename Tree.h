/*************************************************
* ADS Praktikum 3
* Tree.h
* Erweiterung um Hilfsattribute und -funktionen gestattet, wenn erforderlich.
*************************************************/
#pragma once
#include <string>
#include "TreeNode.h"
//#include "catch.h"


class Tree {
	
private: 
	TreeNode * anker;
	int CurrentNodeChronologicalID;
    void balance(TreeNode* node);
    bool split4Node(TreeNode*);
    int proofRBCriterion(TreeNode*);
    bool rotateTreeRight(TreeNode*);
    bool rotateTreeLeft(TreeNode*);


			
public:
	Tree();
    ~Tree();
	bool addNode(std::string Name, int Age, double Income, int PostCode);	
	bool searchNode(std::string);
	void printAll();
    void printLevelOrder(void);
	void printLevelOrder(int niveau);
	void print_preOrder(TreeNode* node);
	void printAll_preOrder(void);
	void start();
	int proofRBCriterion();
	// friend-Funktionen sind f r die Tests erforderlich und m ssen unangetastet bleiben! 
	friend TreeNode * get_anker(Tree& TN);
};
