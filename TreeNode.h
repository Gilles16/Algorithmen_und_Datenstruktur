/*************************************************
* ADS Praktikum 3
* TreeNode.h
* Erweiterung um Hilfsattribute und -funktionen gestattet, wenn erforderlich.
*************************************************/
#pragma once
#include <string>

class TreeNode{
	
private:
		///////////////////////////////////////
		// Ihr Code hier:	
		int NodeChronologicalID;
		int NodeOrderID;
		std::string Name;
		int Age;
		double Income;
		int PostCode;
		bool red;
		TreeNode * left;
		TreeNode * right;
		TreeNode* parent;
		//
		////////////////////////////////////
	
public:
		///////////////////////////////////////
		// Ihr Code hier:
		
		TreeNode(int nNodePos, int id, std::string name, int age, double income, int postCode);
		int getNodeChronologicalID() const;
		int getNodeOrderID() const;
		int getAge() const;
		void setAge(int nAlter);
		double getIncome() const;
		void setIncome(double nIN);
		int getPostCode() const;
		void setPostCode(int nPL);
		std::string getName() const;
		void setName(std::string nName);
		TreeNode* getLeft() const;
		TreeNode* getRight() const;
		void setLeft(TreeNode* nLeft);
		void setRight(TreeNode* nRight);
		void print() const;		
		bool getRed()const;
		void setRed(bool nRed);
		TreeNode* getParent() const;
		void setParent(TreeNode* nParent);
		//
		////////////////////////////////////
};
