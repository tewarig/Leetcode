/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} l1
 * @param {ListNode} l2
 * @return {ListNode}
 */

var mergeTwoLists = function(l1, l2) {
    let main = new ListNode();
    let temp = main;
       while((l1 != null) & (l2 != null)){
         let final = new ListNode();
           main.next = final;

           if(l1.val > l2.val){
               final.val = l2.val;
               l2 = l2.next;
               
           }else if(l1.val<l2.val){
               final.val = l1.val;
               l1 = l1.next;
           }else if(l1.val == l2.val){
               final.val = l1.val;
               l1 = l1.next;
           }else{
               
           }
           main = main.next;
       }
      while(l1 != null){
          let final = new ListNode();
          final.val = l1.val;
          main.next = final;
          main = main.next;
          l1 = l1.next;
      }
    while(l2 != null){
          let final = new ListNode();
          final.val = l2.val;
          main.next = final;
          main = main.next;
          l2 = l2.next;
      }
    
    return temp.next;
};