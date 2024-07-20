#include "TreeNode.h"
#include <iostream>
#include <string>

TreeNode::TreeNode(int nNodePos,int id,std::string name,int age,double income ,int postCode) 
	// : NodeChronologicalID{id},
    //   NodeOrderID{nNodePos}
	// , Name{name}
	// , Age{age}
	// , Income{income}
	// , PostCode{postCode}
	// , left{nullptr}
	// , right{nullptr}
	// , parent{nullptr}
	// , red{true}
{
		NodeChronologicalID = id;
		NodeOrderID = nNodePos ;
		Name = name;
		Age = age;
		Income = income;
		PostCode = postCode;
		red = true;
		left = nullptr;
		right = nullptr;
		parent = nullptr;
}

int TreeNode::getNodeChronologicalID() const {
 return this->NodeChronologicalID;
}

int TreeNode::getNodeOrderID() const {
	return this->NodeOrderID;
}

std::string TreeNode::getName() const {
	return this->Name;
}

void TreeNode::setName(std::string nName){
	this->Name = nName;
}

int TreeNode::getAge() const {
	return this->Age;
}

void TreeNode::setAge(int nAlter){
	this->Age = nAlter;
}

double TreeNode::getIncome() const {
	return this->Income;
}

void TreeNode::setIncome(double nIN){
	this->Income = nIN;
}

int TreeNode::getPostCode() const {
	return this->PostCode;
}

void TreeNode::setPostCode(int nPLZ){
	this->PostCode = nPLZ;
}

TreeNode* TreeNode::getLeft() const {
	return this->left;
}

void TreeNode::setLeft(TreeNode* nLeft){
	this->left = nLeft;
}

TreeNode * TreeNode::getRight() const {
	return this->right;
}

void TreeNode::setRight(TreeNode* nRight){
	this->right = nRight;
}
bool TreeNode::getRed()const{
	return this-> red;
}
void TreeNode::setRed(bool nRed){
	this->red = nRed;
}
TreeNode * TreeNode::getParent() const {
	return this->parent;
}

void TreeNode::setParent(TreeNode* nParent){
	this->parent = nParent;
}

void TreeNode::print() const
{
	std::cout <<  "NodeID: " << this->NodeOrderID
	     <<  ", Name: " << this->Name 
		 <<  ", Alter: "<<this->Age
		 <<  ", Einkommen: " << this->Income
		 <<  ", PLZ: " << this->PostCode
		 <<  ", PosID: " << this->NodeChronologicalID << std::endl;
}
