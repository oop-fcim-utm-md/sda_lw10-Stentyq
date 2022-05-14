#ifndef _HEADER_H_
#define _HEADER_H_

#include <string>
#include <vector>

struct node_t
{
    std::string name_;
    node_t *left_{nullptr};
    node_t *right_{nullptr};
};

void initialize(node_t **root, const std::vector<std::string> &array);
node_t *bsearch(node_t *root, const std::string search_val);
void sort(node_t **root, std::vector<std::string> &array);
unsigned int height(node_t *root);
void print(node_t *root);
void clear(node_t *root);

#endif
