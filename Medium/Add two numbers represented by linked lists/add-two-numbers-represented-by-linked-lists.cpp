//{ Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

Node* reverse(Node* n){
    
    Node* prev = NULL;
    Node* tmp = NULL;
    while(n){
        tmp = n->next;
        n->next = prev;
        prev = n;
        n = tmp;
    }
    return prev;
}

class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        first = reverse(first);
        second = reverse(second);
        int extra = 0;
        Node* answer = new Node(0);
        Node* ans = answer;
        while(first||second){
            if(first){
                extra += first->data;
                first = first->next;
            }
            if(second){
                extra += second->data;
                second = second->next;
            }
            if(extra>=10){
                answer -> next = new Node(extra%10);
                answer = answer->next;
                extra = 1;
            }
            else{
                answer -> next = new Node(extra);
                answer = answer->next;
                extra = 0;
            }
        }
        if(extra>0){
            answer -> next = new Node(extra);
        }
        return reverse(ans->next);
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends