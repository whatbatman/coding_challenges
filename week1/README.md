# Challenge 1
https://leetcode.com/problems/middle-of-the-linked-list/

Given a non-empty, singly linked list with head node head, return a middle node of linked list.

If there are two middle nodes, return the second middle node.

 

 Example 1:
```
 Input: [1,2,3,4,5]
 Output: Node 3 from this list (Serialization: [3,4,5])
 The returned node has value 3.  (The judge's serialization of this node is [3,4,5]).
 Note that we returned a ListNode object ans, such that:
 ans.val = 3, ans.next.val = 4, ans.next.next.val = 5, and ans.next.next.next = NULL.
```
 Example 2:
```
 Input: [1,2,3,4,5,6]
 Output: Node 4 from this list (Serialization: [4,5,6])
 Since the list has two middle nodes with values 3 and 4, we return the second one.
``` 

Note:
```
  The number of nodes in the given list will be between 1 and 100.
```

# Challenge 2
URL: https://leetcode.com/problems/longest-common-prefix/


Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

 

Example 1:
```
Input: strs = ["flower","flow","flight"]
Output: "fl"
```
Example 2:
```
Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
```
 

Constraints:
```
    0 <= strs.length <= 200
    0 <= strs[i].length <= 200
    strs[i] consists of only lower-case English letters.
```

