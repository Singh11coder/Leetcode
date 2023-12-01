/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
    {
        if(list1==nullptr){
            return list2;
        }
        else if(list2==nullptr){
            return list1;
        }
           ListNode* Temp1=list1;
           ListNode* Temp2=list2;
           ListNode* list3=nullptr;
           ListNode* Head=nullptr;
           ListNode* Tail=nullptr;
           while(Temp1!=nullptr && Temp2!=nullptr)
           {
            list3=nullptr;
              if(Temp1->val<=Temp2->val)
              {
                  list3=new ListNode(Temp1->val);
                  Temp1=Temp1->next;
                 
              }
              else
              {
                  list3=new ListNode(Temp2->val);
                  Temp2=Temp2->next;

              }

               if(Head==nullptr)
                  {
                      Head=list3;
                      Tail=list3;
                  }
                  else
                  {
                      Tail->next=list3;
                      Tail=list3;
                  }
           }
           if(Temp1!=nullptr)
           {
               Tail->next=Temp1;
           }
           else if(Temp2!=nullptr)
           {
               Tail->next=Temp2;
           }


           return Head;
    }
};
