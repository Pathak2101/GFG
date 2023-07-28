//{ Driver Code Starts
//Initial Template for Java

import java.util.*;
import java.lang.*;
import java.io.*;

class Node
{
    int data;
    Node next;
    Node(int key)
    {
        data = key;
        next = null;
    }
}

class Driverclass
{
    
    public static void main (String[] args) 
    {
        Scanner sc= new Scanner(System.in);
        int t = sc.nextInt();
        
        while(t-- > 0)
        {
            int n = sc.nextInt();
            Node head = new Node(sc.nextInt());
            Node tail = head;
            while(n-- > 1){
		        tail.next = new Node(sc.nextInt());
		        tail = tail.next;
		    }
		   
		      head = new Solution().mergeSort(head);
		     printList(head);
		    System.out.println();
        }
    }
    public static void printList(Node head)
    {
        if(head == null)
           return;
           
        Node temp = head;
        while(temp != null)
        {
            System.out.print(temp.data + " ");
            temp = temp.next;
        }
    }
}



// } Driver Code Ends


//User function Template for Java
/*
class Node
{
    int data;
    Node next;
    Node(int key)
    {
        this.data = key;
        next = null;
    }
} */

class Solution
{
    static Node mergeSort(Node head)
    {
        if(head == null || head.next == null)
            return head;
        
        Node slow = head;    
        Node fast = head;
        Node beforeMid = head;
        while(fast != null && fast.next != null)
        {
            beforeMid = slow;
            slow = slow.next;
            fast = fast.next.next;
        }
        Node mid = slow;
        beforeMid.next = null;
        
        Node left = mergeSort(head);
        Node right = mergeSort(mid);
        
        return sortedList(left,right);
    }
    
    static Node sortedList(Node a,Node b)
    {
        if(a == null)
            return b;
        if(b == null)
            return a;
        Node head = null;
        Node tail = null;
        
        if(a.data <= b.data)
        {
            head = a;
            tail = a;
            a = a.next;
        }
        else
        {
            head = b;
            tail = b;
            b = b.next;
        }
        
        while(a != null && b != null)
        {
            if(a.data<=b.data)
            {
                tail.next = a;
                tail = a;
                a = a.next;
            }
            else
            {
                tail.next = b;
                tail = b;
                b = b.next;
            }
        }
        
        if(a != null)
        {
           tail.next = a;
           tail = a;
        }
        if(b != null)
        {
           tail.next = b;
           tail = b;
        }
        return head;
    }
}


