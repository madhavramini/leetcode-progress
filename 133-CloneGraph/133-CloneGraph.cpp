// Last updated: 20/07/2025, 20:57:53
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    unordered_map<Node*,Node*> cloned;
    Node* cloneGraph(Node* node) {
        if(node == nullptr) return nullptr;
        if(cloned.count(node)) return cloned[node];
        Node* newNode = new Node(node->val);
        cloned[node] = newNode;
        vector<Node*> newNeighbors;
        for (Node* n : node->neighbors) newNeighbors.push_back(cloneGraph(n));
        newNode->neighbors = newNeighbors;
        return newNode;
    }
};