package datastructure;

public class LinkedListDemo {

	public static void main(String[] args) {
		LinkedListTest list = new LinkedListTest();

		list.insert(20);
		list.insert(10);
		list.insert(30);
		list.insert(50);
		list.insert(70);
		list.insert(30);

		System.out.println("total number of current List : " + list.getTotalNum());

		if (list.isFirst()) {
			System.out.printf("%d ", list.getCurData());

			while (list.isNext()) {
				System.out.printf("%d ", list.getCurData());
			}
		}
		System.out.println();
		
		if(list.isFirst()) {
			if(list.getCurData() == Integer.valueOf(30)) {
				list.remove();
			}
			while(list.isNext()) {
				if(list.getCurData() == Integer.valueOf(30)) {
					list.remove();
				}
			}
		}
		
		System.out.println();
		System.out.println("total number of current List : " + list.getTotalNum());

		if (list.isFirst()) {
			System.out.printf("%d ", list.getCurData());

			while (list.isNext()) {
				System.out.printf("%d ", list.getCurData());
			}
		}
	}
}
