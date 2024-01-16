 import java.util.Scanner;
class base{
    int x;
   public void printt(){
    System.out.println("base");
  public int getx(){
    return x;
  }
  public void setx(int x){
    this.x=x;
  }

   }
}
class derived extends base{
int y;
public int gety(){
  return y;
}
public void setx(int y){
  this.y=y;
}
}
public class inheri {
public static void main(String [] args ){
base b=new base();
b.printt();
Scanner vaibhav=new Scanner(System.in);
String pn=vaibhav.nextLine();


}    
}
