import java.util.*;

public class BestBubble{
 
  public static void main(String []args){
   
    Scanner sc = new Scanner(System.in);
    int countA=0, countD=0;
    int n = sc.nextInt();
    int[] arrAse = new int[n];
    int[] arrDes = new int[n];
    
    for(int i=0; i<n; i++){
     int j = sc.nextInt();
      arrAse[i] = j;
      arrDes[i] = j;
    }
    
    for(int i=0; i<n-1; i++){
     
      for(int j=0; j<n-i-1; j++){
        
       if(arrAse[j]>arrAse[j+1]){
        countA++;
         int temp = arrAse[j];
         arrAse[j] = arrAse[j+1];
         arrAse[j+1] = temp;
       }
        
        if(arrDes[j]<arrDes[j+1]){
         countD++;
          int temp = arrDes[j];
          arrDes[j] = arrDes[j+1];
          arrDes[j+1] = temp;
        }
        
      }
    }
    
    if(countA>=countD){
      System.out.println(countD);
    }
    else{
     System.out.println(countA); 
    }
    
  }
  
}