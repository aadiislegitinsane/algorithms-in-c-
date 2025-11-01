/****************************************************************
    Following is the Linked List node structure

    class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

Node* reverseKGroup(Node* head, int k){
    if(head == NULL){
        return NULL;
    }
    
    //step 1: reverse first k nodes 

    Node* next = NULL;
    Node* curr = head;
    Node* prev = NULL;
    int count = 0;

    while(curr != NULL && count < k){
        next = curr->next;
        curr->next = prev;
        prev= curr;
        curr = next;
        count++;
    }

    // step 2: recursive call for remaining linked list
    if(next != NULL){
        head->next = reverseKGroup(next, k);
    }

    // step 3: return head of linked list 
    return prev;
}