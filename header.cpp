#include "header.h"
#include <iostream>


void initialize(node_t **root, const std::vector<std::string> &array){

    root->name_ = *&array[0];
    root->left_->name_ = array[1];
    root->left_->left_->name_ = array[2]; root->left_->left_->left_->name_ = array[3];
    root->left_->left_->left_->left_->name_=array[4];
    root->left_->left_->left_->left_->left_->name_=array[5];
    root->right_->name_ = array[6];
    root->left_->left_->left_->left_->left_->left_->name_=array[7];
    root->left_->left_->left_->left_->left_->left_->left_->name_=array[8];
    root->left_->left_->left_->left_->left_->left_->left_->left_->name_=array[9];
    
   
    

}
node_t *bsearch(node_t *root, const std::string search_val){

}
void sort(node_t **root, std::vector<std::string> &array){

}
unsigned int height(node_t *root){

}
void print(node_t *root){
while(root){
 std:: cout << "rootl :\n" <<root->name_ << std:: endl;
 root = root->left_;
}
std:: cout << "rootr:\n" <<root->right_->name_ << std:: endl;
}
void clear(node_t *root){

}