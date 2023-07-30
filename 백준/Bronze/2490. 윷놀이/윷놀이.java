import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int[] num = new int[4];
        int count=0;
        for(int j=0; j<3; j++){
            for(int i=0; i<4; i++){
                num[i] = s.nextInt();
                if(num[i]==1) count++;
            }
        
            if(count==3) System.out.println("A");
            else if(count==2) System.out.println("B");
            else if(count==1) System.out.println("C");
            else if(count==4) System.out.println("E");
            else System.out.println("D");
            
            count=0;
        }
        
    }
}