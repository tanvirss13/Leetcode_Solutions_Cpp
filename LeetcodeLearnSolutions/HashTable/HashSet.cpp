//Using Linked List as Buckets


class MyHashSet {
public:
    struct LinkedList{
        int val;
        LinkedList *next;
        LinkedList(): val(0), next(nullptr){}
        LinkedList(int x): val(x), next(nullptr){}
        LinkedList(int x, LinkedList *next): val(x), next(next){}
    };
    
    
    LinkedList* head;
    MyHashSet() {
        head = new LinkedList(-1);
    }
    
    void add(int key) {
        LinkedList* temp = new LinkedList(key);
        
        LinkedList* curr = head;
        
        while(curr->next){
            if(curr->next->val==key){
                return;
            }
            curr = curr->next;
        }
        curr->next=temp;
    }
    
    void remove(int key) {
        LinkedList* temp = head;
        while(temp && temp->next){
            if(temp->next->val==key){
                temp->next=temp->next->next;
            }
            temp = temp->next;
        }
    }
    
    bool contains(int key) {
        LinkedList* temp=head;
        while(temp){
            if(temp->val==key){
                return true;
            }
            temp=temp->next;
        }
        return false;
    }
};
