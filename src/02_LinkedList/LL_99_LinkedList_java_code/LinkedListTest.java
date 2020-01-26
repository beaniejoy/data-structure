package datastructure;

public class LinkedListTest {
	private Node head;
	private Node cur;
	private Node before;
	private int totalNum;

	public LinkedListTest() {
		head = new Node();
		cur = null;
		before = null;
		totalNum = 0;
	}

	private class Node {
		private Object data;
		private Node next;

		public Node() {
			data = null;
			next = null;
		}

		public Node(Object newData) {
			data = newData;
			next = null;
		}

		public Object getData() {
			return data;
		}

		public void setNext(Node otherNode) {
			next = otherNode;
		}

		public Node getNext() {
			return next;
		}
	}

	public void insert(Object data) {
		Node newNode = new Node(data);

		newNode.setNext(head.getNext());
		head.setNext(newNode);

		totalNum++;
	}

	public boolean isFirst() {
		boolean isExist = false;

		if (head.getNext() == null) {
			return isExist;
		}

		before = head;
		cur = head.getNext();
		isExist = true;

		return isExist;
	}

	public boolean isNext() {
		boolean isExist = false;

		if (cur.getNext() == null) {
			return isExist;
		}

		before = cur;
		cur = cur.getNext();
		
		isExist = true;
		return isExist;
	}

	public Object remove() {
		Object rData = cur.getData();

		before.setNext(cur.getNext());
		cur = before;

		totalNum--;

		return rData;
	}

	public Object getCurData() {
		return cur.getData();
	}

	public Node getHead() {
		return head;
	}

	public void setHead(Node head) {
		this.head = head;
	}

	public Node getCur() {
		return cur;
	}

	public void setCur(Node cur) {
		this.cur = cur;
	}

	public Node getBefore() {
		return before;
	}

	public void setBefore(Node before) {
		this.before = before;
	}

	public int getTotalNum() {
		return totalNum;
	}

	public void setTotalNum(int totalNum) {
		this.totalNum = totalNum;
	}

}
