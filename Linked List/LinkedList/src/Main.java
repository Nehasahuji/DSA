
public class Main {
	
	
	public static void traverse(Node head) {
		Node curr=head;
		while(curr!=null) {
			System.out.print(curr.data + " ");
			curr=curr.next;
		}		
	}
	
	public static void insert(int data,Node head,int pos) {
		Node newNode = new Node(data);
		
		if(pos==0) {
			newNode.next = head;
			head=newNode;
		}
		
		Node prev =head;
		
		for(int i=0;i<pos-1;i++) {
			prev=prev.next;
		}
		
		newNode.next=prev.next;
		prev.next=newNode;
	}

	public static void main(String[] args) {
		
		Node n1 = new Node(5);
		Node n2 = new Node(10);
		Node n3 = new Node(15);
		Node n4 = new Node(20);
		Node n5 = new Node(25);
		Node n6 = new Node(30);
		
	   Node head = n1;
	   n1.next = n2;
	   n2.next = n3;
	   n3.next = n4;
	   n4.next = n5;
	   n5.next = n6;
	   n6.next = null;
	   
	   traverse(head);
	   System.out.println();
	   
	   insert(1,head,2);
	   
	   traverse(head);
	   
	   
	}
}
