import java.util.Scanner;
class calculate{
    private double h,r;
    public void set(double h1,double r2){
        this.h=h1;
        this.r=r2;

    }
    public double getvol(){
        double vl=3.14*r*r*h;
        return vl;
    }
    public double surfaceA()
    {
        double sa=2*3.14*r*(r+h);
        return sa;
    }
}
public class cylinder {
    public static void main(String []args){

Scanner sc=new Scanner(System.in);
System.out.println("Enter the Height and radius of cylinder: ");
double a=sc.nextDouble();
double b=sc.nextDouble();
calculate c1=new calculate();
c1.set(a,b);
System.out.println("vol: " +c1.getvol());
System.out.println("Surgface area = "+ c1.surfaceA());
    }
}
