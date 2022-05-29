#include "header.h"
#include <iostream>


void initialize(node_t ** root, const std::vector<std::string> & array)
{
    for (size_t i = 0; i < array.size(); i++)
    {
        if (!*root)
        {
            *root = new node_t;
            (*root)->data_.id_ = i;
            (*root)->data_.name_ = array[i];
        }
        else
        {
            node_t* current = *root;
            while (current !=nullptr)
            {
                if (current->data_.name_.compare(array[i])>=0)
                {
                    if (current->left_ == nullptr)
                    {
                        current->left_ = new node_t;
                        current->left_->data_.id_=i;
                        current->left_->data_.name_ = array[i];
                        break;
                    }
                    else
                    {
                        current = current->left_;
                    }  
                }
                else
                {
                    if (current->right_ == nullptr)
                    {
                        current->right_ = new node_t;
                        current->right_->data_.id_=i;
                        current->right_->data_.name_ = array[i];
                        break;
                    }
                    else
                    {
                        current = current->right_;
                    }
                }
                
            }
            
            
        }
    }
    
}
node_t *bsearch(node_t *root, const std::string search_val){
    
 
    
    node_t *tmp = root;
    
    while(tmp != NULL){
        
        if(tmp->data_.name_ == search_val){
            return tmp;
        }
        else if (tmp->data_.name_.compare(search_val)>=0){
            tmp = tmp->left_;
        }
        else 
            tmp = tmp->right_;
        
    }
    node_t *none = new node_t;
    none->data_.name_ = "";
    return none;
}
void sort(node_t * root, std::vector<std::string> & array){
    
      static int i = 0;
    if (root->left_ != nullptr)
    {
        sort(root->left_ , array);
    }

    array[i++] = root->data_.name_;
    
    if (root->right_ != nullptr)
    {
        sort(root->right_ , array);
    }

}
unsigned int height(node_t *tree){
    int llevel = 0, rlevel = 0;
    if (!tree) return 0;
    if (tree->left_)
    llevel = height(tree->left_);
    if(tree->right_)
    rlevel = height(tree->right_);
    return (llevel>rlevel ? llevel:rlevel) +1;
}


void print(node_t *Tree)
{
if ( ! Tree ) return; 
print(Tree->left_); 
std::cout << Tree->data_.name_ << std::endl;
print(Tree->right_); 
}

void clear(node_t *root){

 if (root->left_ != nullptr)
    {
        clear(root->left_);
    }
    if (root->right_ != nullptr)
    {
        clear(root->right_);
    }
    delete root;
}