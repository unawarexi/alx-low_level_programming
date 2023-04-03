what is singly linked list?

       * collection of data called nodes
                 each nodes is divided into two parts to store data and address
 
       * they're connected through a pointer - and not stored in contigious memory



memory representation

    * the address of the first node is stored in the "head node"
           * the last node points to null - the current node holds the address of th next node


syntax

   * we make use of structures
 struct node
{
      int data; // varaiable type
      struct node* next;

}

 read more about this topic on your spare time
