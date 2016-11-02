package Search;

import java.io.BufferedReader;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Map;
import java.util.Iterator;
import java.util.Scanner;

import javax.xml.crypto.dsig.spec.HMACParameterSpec;

public class Search {

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		FileInputStream fis = null;
		InputStreamReader isr = null;
		BufferedReader br = null;
		fis = new FileInputStream("C:\\Users\\Administrator\\Desktop\\encode.txt");// FileInputStream
		isr = new InputStreamReader(fis);// InputStreamReader ���ֽ���ͨ���ַ���������,
		br = new BufferedReader(isr);
		String str="";
		String[][] matrix=new String[200][];
		int k=0;
		 while ((str = br.readLine()) != null) {
			// System.out.println(str);
			 matrix[k]=str.split(" ");
			// System.out.println(k);
			 k++;
		 }
		 br.close();
		 isr.close();
		 fis.close();
		// System.out.println(k);
		 Map<String,ArrayList<String>> map=new HashMap<String,ArrayList<String>>();
		 for(int i=0;i<k;i++)
		 {
			 ArrayList<String>  arrayList =new ArrayList<String>();
			 for(int j=0;j<matrix[i].length;j++)
			 {
				 
				 if(j!=2)
					 arrayList.add(matrix[i][j]);
			 }
			 map.put(matrix[i][2], arrayList);
		 }
		 Iterator iter = map.entrySet().iterator();
		/* while(iter.hasNext())
		 {
			 
			 Map.Entry entry = (Map.Entry) iter.next();
			 Object key=entry.getKey();
			 Object value=entry.getValue();
			 System.out.println(key);
		 }*/
		 
		 fis = new FileInputStream("C:\\Users\\Administrator\\Desktop\\feasible_solution.txt");// FileInputStream
		 isr = new InputStreamReader(fis);// InputStreamReader ���ֽ���ͨ���ַ���������,
		 br = new BufferedReader(isr);
		 String str1="";
			String[][] matrix1=new String[200][];
			//System.out.println(matrix1[1][0]);
			
			int k1=0;
			 while ((str1 = br.readLine()) != null) 
			 {
				 matrix1[k1]=new String[str1.length()];
				// System.out.println(str1);
				for(int i=0;i<str1.length();i++)
				{
					
					if(str1.charAt(i)==':')
					{
						
						int col=str1.charAt(i-1)-'0';
						// System.out.println(String.valueOf(str1.charAt(i+1)));
						matrix1[k1][col]=String.valueOf(str1.charAt(i+1));
						
					//System.out.print(col+":"+matrix1[k1][col]+"  ");
					}
					
				}
				matrix1[k1][str1.length()-1]="1";
				//System.out.println(); 
				 k1++;
			 }	//System.out.println(k1); 
			 br.close();
			 isr.close();
			 fis.close();
			
			/* for(int i=0;i<k1;i++)
			 {
				 for(int j=0;j<matrix1[i].length;j++)
				 {
					 if(matrix1[i][j]!=null)
					 System.out.print(j+":"+matrix1[i][j]+"  ");
				 }
				 System.out.println();
			 }*/
			
			 Scanner sc = new Scanner(System.in);
			 String s="";
			 ArrayList<String> res=null;
			 int cout=3;
			 HashSet<String> hSet=new HashSet<String>();
			 int sum=0;
			 while(cout!=0)
			 {
				  s = sc.nextLine();
				  if(map.get(s)!=null)
				  {
					  res= map.get(s);
					boolean isExist=  hSet.add(res.get(0));
					  if(!isExist)
					  {
						  System.out.println("�������Ѿ�ѡ�˲����ظ�ѡ");
						  continue;
					  }   
					   //�������������ļ��ϱ��0
					   for(int i=0;i<res.get(0).length();i++)
					   {
						   int col= res.get(0).charAt(i)-'0';
						   
						   String val= String.valueOf(res.get(2).charAt(i));
						   
						   for(int row=0;row<k1;row++)
						   {
							   
							   
							   if(matrix1[row][col]!=null&&!matrix1[row][col].equals(val))
							   {
								   matrix1[row][matrix1[row].length-1]="0";
							   }
									   
									   
						   }
						   
					   }
					   sum=0;
						  for(int row=0;row<k1;row++)
						  {
							  sum += Integer.parseInt(matrix1[row][matrix1[row].length-1]);

						  }
						  if(sum==0)
						  {
							 
							  System.out.println("�޷���Ҫ��Ŀ��н�");
							  break;
							  
						  }
					  
  
					 //  System.out.println(res.get(0));
					  // System.out.println(res.get(2));	   
				  }
				  
				  else 
				  {
					  System.out.println("���벻����");
					  continue;
					  
				  }	  
				cout--;
				
			 }
			 if(sum>0)
			 {
				  System.out.println("���ڿ��н�");
			 }
			
			 
			

			
		
		 
		 
	}

}
