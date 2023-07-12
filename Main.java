import java.util.Scanner;

public class Main
{
	public static void main(String[] args) {
	    Scanner sc = new Scanner(System.in);
	    int number = sc.nextInt();
	    int sum = 0;
	    int num = number;
	    if(num==1 || num==1){
	        System.out.println(num + " is an armstrong number");
	    }
	    while(num>0){
	        int a= num%10;
	        sum  += Math.pow(a,3);
	        num = num/10;
	    }
	    if(sum==number){
	        System.out.println(" "+number+" is an armstrong number");
	    }
	    else{
	        System.out.println(""+number +" is not an armstrong number");
	    }
	
	}
}
