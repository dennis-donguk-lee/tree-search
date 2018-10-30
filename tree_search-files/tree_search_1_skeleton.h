#ifndef TREE_SEARCH_1_H
#define TREE_SEARCH_1_H
#include <iostream>
#include <vector>
#include <deque>

template <typename T>
struct TNode
{
    T data = T();
    std::vector< TNode<T> * > children = {};
};

// recursive implementation of DFS
template <typename T>
TNode<T> const *        // returns first found node that is equal to val
tree_depth_first_search_rec( TNode<T> const * pRoot, T const & val )
{
}

// iterative implementation of DFS
// use stack (push,top,pop) or vector(push_back,back,pop_back)
// when inserting children, make sure they will be dicovered in the same
// order as in TNode's array children
template <typename T>
TNode<T> const *        // returns first found node that is equal to val
tree_depth_first_search_iter( TNode<T> const * pRoot, T const & val )
{
    ... openlist;
    openlist.push_back( pRoot );

    while ( openlist.size() > 0 ) {
        ...

        // insert children in the order ( 0,1,2,3,... )
        // reverse to make it "left-to-right"
        openlist.insert( openlist.end(), p->children.rbegin(), p->children.rend() );
    }

    return nullptr; // failed
}

// iterative implementation of BFS
// simple change from tree_depth_first_search_iter (previous)
// change container type to deque
template <typename T>
TNode<T> const *        // returns first found node that is equal to val
tree_breadth_first_search_iter( TNode<T> const * pRoot, T const & val )
{
}

#endif
