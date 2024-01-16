class base{
    int phy ,chem,math;
    public void pcm(int phy,int chem,int math){
        this.phy=phy;
        this.chem=chem;
        this.math=math;
    }


}
class calc extends base{
    //supper(phy,chem,math);

    public void print(){
        int sum=phy+chem+math;
        System.out.println(sum);
    }


}
public class sub {
    public static void main(String[] args) {
        calc c = new calc();
        c.pcm(70, 75, 50);
        c.print();


    }
}
