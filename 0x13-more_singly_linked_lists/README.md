C - More singly linked lists

0.print list size :_t print_listint(const listint_t *h);
1.list length :  size_t listint_len(const listint_t *h);
2.add node :  listint_t *add_nodeint(listint_t **head, const int n);
3.add  node at the end : listint_t *add_nodeint_end(listint_t **head, const int n);
4.free list:  void free_listint(listint_t *head);
5.free :  void free_listint2(listint_t **head);
6.pop :  int pop_istint(listint_t **head);
7.get node at index : listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
8.sum list : int sum_listint(listint_t *head);
9.insert : listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
10.delete at index :  int delete_nodeint_at_index(listint_t **head, unsigned int index);
11.reverse list : listint_t *reverse_listint(listint_t **head);
12.print(safe version): size_t print_listint_safe(const listint_t *head);
13.free 'safe version): size_t free_listint_safe(listint_t **h);
14.find the loop : listint_t *find_listint_loop(listint_t *head);
