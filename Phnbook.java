import java.util.*;

class Phnbook{
    public static void main(String args[]){
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        s.nextLine();
        Map<String,String> book=new HashMap<>();
        for(int i=0;i<n;i++){
            String name=s.nextLine();
            String num=s.nextLine();
            book.put(name,num);
        }
        while(s.hasNext()){
            String fname=s.nextLine();
            if(book.containsKey(fname))
            {
                System.out.println(fname+" = "+book.get(fname));
            }
            else
                System.out.println("Not Found");
        }
    }
}