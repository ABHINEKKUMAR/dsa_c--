#include<iostream>
using namespace std;


class Node{
    public:  // scope resolution 

    int data;
    Node* next; // these will store the address od next pointer 


    Node(int val){//creating contructor for value storing 
        data= val;// insert the data in val
        next =NULL; // insert the  next  with null value

    }

}; // these is single complete linked list 

class List{
      Node* head;
      Node*tail; // creating head and tail for linklist class

public:
   List(){
    head =tail =NULL;//insilize will null both tail and head 
} // here  we have  two codition 
   //1. linkedlist will be empty 
   //2. linkedlist have some element 

  void push_front(int val){
    Node* newNode =new Node(val);// create a neww node and assing  value in it 
    if(head ==NULL){
        head=tail=newNode;
        return;
    }else{
      newNode->next =head;// pointer to the next pointer 
     head =newNode;
    }
  }

  void push_back(int val){ // tp add element last 
    Node* newNode = new Node(val); // create new node and assign them 
    if(head==NULL){ //head  will be NULL so we insert single element to newNode 
      head =tail=newNode;
    }else{
      tail->next = newNode; //
      tail =newNode;
    } 
  }

  void pop_front(){ // these will delete from front
    if(head==NULL){ // first we check the elemet present or not if single 
      cout<<"LL is empty";
    }
    Node* temp =head; //create a temp to assign head 
    head=head->next; //assign head to next node
    temp->next =NULL; // now assign the temp with null to free the node
    delete temp; // delete temp which have value of the node
}


  void pop_back(){// these will work to delete from last 
    if(head==NULL){ // check element present or not 
      cout<<"LL is empty \n";
      return;
    }
    Node* temp =head;  // assign the value 
    while(temp->next != tail){// 
      temp=temp->next;
    }
    temp->next= NULL;
    delete tail;
    tail=temp;
  }

  void insert(int val, int pos){ // inserting the val in paticular postion
    if(pos<0){ // first condition
      cout<<"invalid pos\n";
    }
    if(pos==0){// 2nd condition
      push_front(val);
      return;
    }

    Node*temp =head;
    for(int i=0;i<pos-1;i++){
      if(temp==NULL){
        cout<<"inalid ps\n";
        return;
      }
      temp =temp->next;
    }
    Node* newNode = new Node(val);
    newNode->next = temp->next;
    temp->next = newNode;
  }

  
  void printll(){// these class for pinting the value 
    Node* temp = head;

    while (temp!=NULL){
      cout<<temp->data<<"->";
      temp =temp->next;
    }
    cout<<"NULL"<<endl;
  }

  int search( int key){
    Node*temp=head;
    int idx=0;
    
    while(temp!=NULL){
      if(temp->data==key){
        return idx;
      }
      temp= temp->next;
      idx++;
    }
  return -1;
  }
};

int main(){ // main class from here  compiler start reading
List ll;
ll.push_front(1);// assiging value
ll.push_front(2);//assining value
ll.push_front(3);//assinging value 
ll.push_back(4);
ll.pop_front();
ll.printll(); // calling the class 
ll.pop_back();
ll.printll();
ll.insert(4,1);
ll.printll();
cout<<ll.search(1)<<endl;
return 0;
}