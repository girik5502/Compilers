public class NonStaticEmployee {

	String name;
	int empid;
	String company;
	
	public NonStaticEmployee(int empid, String name, String company)
	{
		this.empid = empid;
		this.name = name;
		this.company = company;
	}
	
	public void display()
	{
	  System.out.println("The details of the employee is employee id: "+empid+", employee name: "+name+", company:"+company);
	}
	
	public static void main(String[] args)
	{
		NonStaticEmployee emp1 = new NonStaticEmployee(1001,"Aakash Pathak","Webcodegeeks");
		NonStaticEmployee emp2 = new NonStaticEmployee(1002,"Robert Bernes","Webcodegeeks");
		emp1.display();
		emp2.display();
	}
}