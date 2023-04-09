

public class StaticEmployee {

	String name;
	int empid;
	static String company="webcodegeeks";
	
	public StaticEmployee(int empid, String name)
	{
		this.empid = empid;
		this.name = name;
		
	}
	
	public void display()
	{
		System.out.println("The details of the employee is employee id: "+empid+", employee name: "+name+", company:"+company);
	}
	
	public static void main(String[] args)
	{
		StaticEmployee emp1 = new StaticEmployee(1001,"Aakash Pathak");
		StaticEmployee emp2 = new StaticEmployee(1002,"Robert Bernes");
		emp1.display();
		emp2.display();
	}
}