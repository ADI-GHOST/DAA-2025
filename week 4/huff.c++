#include <iostream>
#include <queue>
#include <vector>
#include <unordered_map>
using namespace std;

struct Node {
    char ch;
    int freq;
    Node *left, *right;
    Node(char c, int f) : ch(c), freq(f), left(nullptr), right(nullptr) {}
};

struct Compare {
    bool operator()(Node* a, Node* b) {
        return a->freq > b->freq;
    }
};

void printCodes(Node* root, string code) {
    if (!root) return;
    if (!root->left && !root->right)
        cout << root->ch << ": " << code << "\n";
    printCodes(root->left, code + "0");
    printCodes(root->right, code + "1");
}

void HuffmanEncoding(const string& text) {
    unordered_map<char, int> freq;
    for (char c : text) freq[c]++;

    priority_queue<Node*, vector<Node*>, Compare> pq;
    for (auto it = freq.begin(); it != freq.end(); ++it)
        pq.push(new Node(it->first, it->second));

    while (pq.size() > 1) {
        Node* left = pq.top(); pq.pop();
        Node* right = pq.top(); pq.pop();
        Node* merged = new Node('$', left->freq + right->freq);
        merged->left = left;
        merged->right = right;
        pq.push(merged);
    }

    printCodes(pq.top(), "");
}

int main() {
    string text;
    cout << "Enter text: ";
    getline(cin, text);
    HuffmanEncoding(text);
    return 0;
}
