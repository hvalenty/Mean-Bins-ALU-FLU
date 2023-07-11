import java.util.Scanner;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.PrintWriter;
import java.io.FileOutputStream;

public class AsymmetryXFRebin
{
  public static void main(String args[])
  {
    Scanner inputStream = null;
    
    double[][] n1 = new double[100][100];
    double[][] n2 = new double[100][100];
    double[][] phi = new double[100][100];
    double[][] a = new double[100][100];
    double[][] error = new double[100][100];
    int[] count = new int[100];
    int[] sum = new int[100];
    
    int x = 0;    
    double p = 0.869;
    
    
    
    try //Table 8
    {
      inputStream =
        new Scanner(new FileInputStream("FitMethodReBin08xF.txt"));
    }
    catch(FileNotFoundException e)
    {
      System.exit(0);
    }
 
    while(inputStream.hasNextDouble())
    {
      phi[7][count[7]] = inputStream.nextDouble();
      n1[7][count[7]] = inputStream.nextDouble();
      n2[7][count[7]] = inputStream.nextDouble();
      count[7]++;
    }
    inputStream.close();

    try //Table 9
    {
      inputStream =
        new Scanner(new FileInputStream("FitMethodReBin09xF.txt"));
    }
    catch(FileNotFoundException e)
    {
      System.exit(0);
    }
 
    while(inputStream.hasNextDouble())
    {
      phi[8][count[8]] = inputStream.nextDouble();
      n1[8][count[8]] = inputStream.nextDouble();
      n2[8][count[8]] = inputStream.nextDouble();
      count[8]++;
    }
    inputStream.close();
    
    try //Table 10
    {
      inputStream =
        new Scanner(new FileInputStream("FitMethodReBin10xF.txt"));
    }
    catch(FileNotFoundException e)
    {
      System.exit(0);
    }
 
    while(inputStream.hasNextDouble())
    {
      phi[9][count[9]] = inputStream.nextDouble();
      n1[9][count[9]] = inputStream.nextDouble();
      n2[9][count[9]] = inputStream.nextDouble();
      count[9]++;
    }
    inputStream.close();    
    

    try //Table 11
    {
      inputStream =
        new Scanner(new FileInputStream("FitMethodReBin11xF.txt"));
    }
    catch(FileNotFoundException e)
    {
      System.exit(0);
    }
 
    while(inputStream.hasNextDouble())
    {
      phi[10][count[10]] = inputStream.nextDouble();
      n1[10][count[10]] = inputStream.nextDouble();
      n2[10][count[10]] = inputStream.nextDouble();
      count[10]++;
    }
    inputStream.close();
    
    try //Table 12
    {
      inputStream =
        new Scanner(new FileInputStream("FitMethodReBin12xF.txt"));
    }
    catch(FileNotFoundException e)
    {
      System.exit(0);
    }
 
    while(inputStream.hasNextDouble())
    {
      phi[11][count[11]] = inputStream.nextDouble();
      n1[11][count[11]] = inputStream.nextDouble();
      n2[11][count[11]] = inputStream.nextDouble();
      count[11]++;
    }
    inputStream.close();
    
    try //Table 13
    {
      inputStream =
        new Scanner(new FileInputStream("FitMethodReBin13xF.txt"));
    }
    catch(FileNotFoundException e)
    {
      System.exit(0);
    }
 
    while(inputStream.hasNextDouble())
    {
      phi[12][count[12]] = inputStream.nextDouble();
      n1[12][count[12]] = inputStream.nextDouble();
      n2[12][count[12]] = inputStream.nextDouble();
      count[12]++;
    }
    inputStream.close();
    
    try //Table 14
    {
      inputStream =
        new Scanner(new FileInputStream("FitMethodReBin14xF.txt"));
    }
    catch(FileNotFoundException e)
    {
      System.exit(0);
    }
 
    while(inputStream.hasNextDouble())
    {
      phi[13][count[13]] = inputStream.nextDouble();
      n1[13][count[13]] = inputStream.nextDouble();
      n2[13][count[13]] = inputStream.nextDouble();
      count[13]++;
    }
    inputStream.close();
    
    try //Table 15
    {
      inputStream =
        new Scanner(new FileInputStream("FitMethodReBin15xF.txt"));
    }
    catch(FileNotFoundException e)
    {
      System.exit(0);
    }
 
    while(inputStream.hasNextDouble())
    {
      phi[14][count[14]] = inputStream.nextDouble();
      n1[14][count[14]] = inputStream.nextDouble();
      n2[14][count[14]] = inputStream.nextDouble();
      count[14]++;
    }
    inputStream.close();
    
    try //Table 16
    {
      inputStream =
        new Scanner(new FileInputStream("FitMethodReBin16xF.txt"));
    }
    catch(FileNotFoundException e)
    {
      System.exit(0);
    }
 
    while(inputStream.hasNextDouble())
    {
      phi[15][count[15]] = inputStream.nextDouble();
      n1[15][count[15]] = inputStream.nextDouble();
      n2[15][count[15]] = inputStream.nextDouble();
      count[15]++;
    }
    inputStream.close();
    
    try //Table 17
    {
      inputStream =
        new Scanner(new FileInputStream("FitMethodReBin17xF.txt"));
    }
    catch(FileNotFoundException e)
    {
      System.exit(0);
    }
 
    while(inputStream.hasNextDouble())
    {
      phi[16][count[16]] = inputStream.nextDouble();
      n1[16][count[16]] = inputStream.nextDouble();
      n2[16][count[16]] = inputStream.nextDouble();
      count[16]++;
    }
    inputStream.close();
    
    try //Table 18
    {
      inputStream =
        new Scanner(new FileInputStream("FitMethodReBin18xF.txt"));
    }
    catch(FileNotFoundException e)
    {
      System.exit(0);
    }
 
    while(inputStream.hasNextDouble())
    {
      phi[17][count[17]] = inputStream.nextDouble();
      n1[17][count[17]] = inputStream.nextDouble();
      n2[17][count[17]] = inputStream.nextDouble();
      count[17]++;
    }
    inputStream.close();
    
    try //Table 19
    {
      inputStream =
        new Scanner(new FileInputStream("FitMethodReBin19xF.txt"));
    }
    catch(FileNotFoundException e)
    {
      System.exit(0);
    }
 
    while(inputStream.hasNextDouble())
    {
      phi[18][count[18]] = inputStream.nextDouble();
      n1[18][count[18]] = inputStream.nextDouble();
      n2[18][count[18]] = inputStream.nextDouble();
      count[18]++;
    }
    inputStream.close();
    
    try //Table 20
    {
      inputStream =
        new Scanner(new FileInputStream("FitMethodReBin20xF.txt"));
    }
    catch(FileNotFoundException e)
    {
      System.exit(0);
    }
 
    while(inputStream.hasNextDouble())
    {
      phi[19][count[19]] = inputStream.nextDouble();
      n1[19][count[19]] = inputStream.nextDouble();
      n2[19][count[19]] = inputStream.nextDouble();
      count[19]++;
    }
    inputStream.close();
    
    try //Table 21
    {
      inputStream =
        new Scanner(new FileInputStream("FitMethodReBin21xF.txt"));
    }
    catch(FileNotFoundException e)
    {
      System.exit(0);
    }
 
    while(inputStream.hasNextDouble())
    {
      phi[20][count[20]] = inputStream.nextDouble();
      n1[20][count[20]] = inputStream.nextDouble();
      n2[20][count[20]] = inputStream.nextDouble();
      count[20]++;
    }
    inputStream.close();
    
    try //Table 22
    {
      inputStream =
        new Scanner(new FileInputStream("FitMethodReBin22xF.txt"));
    }
    catch(FileNotFoundException e)
    {
      System.exit(0);
    }
 
    while(inputStream.hasNextDouble())
    {
      phi[21][count[21]] = inputStream.nextDouble();
      n1[21][count[21]] = inputStream.nextDouble();
      n2[21][count[21]] = inputStream.nextDouble();
      count[21]++;
    }
    inputStream.close();
    
	try //Table 23
    {
      inputStream =
        new Scanner(new FileInputStream("FitMethodReBin23xF.txt"));
    }
    catch(FileNotFoundException e)
    {
      System.exit(0);
    }
 
    while(inputStream.hasNextDouble())
    {
      phi[22][count[22]] = inputStream.nextDouble();
      n1[22][count[22]] = inputStream.nextDouble();
      n2[22][count[22]] = inputStream.nextDouble();
      count[22]++;
    }
    inputStream.close();
        
    
    
    PrintWriter outputStream = null;
   
    try //Output Table 8
    {
      outputStream =
        new PrintWriter(new FileOutputStream("bin8AA-OutxF.txt")); 
    }
    catch(FileNotFoundException e)
    {
      System.exit(0);
    }
     while (x < 8)
   {
   sum[x] = 1;
   x++;
   }
   while (sum[7] < count[7])
    {
      a[7][sum[7]]= (1/p)*(n2[7][sum[7]]-n1[7][sum[7]])/(n1[7][sum[7]]+n2[7][sum[7]]);
      error[7][sum[7]]= (2/p)*Math.sqrt((n1[7][sum[7]]*n2[7][sum[7]])/(Math.pow(n1[7][sum[7]]+n2[7][sum[7]],3)));
      outputStream.println(phi[7][sum[7]] + "    " + a[7][sum[7]] + "    " + error[7][sum[7]]);
      sum[7]++;
    }
   outputStream.close();

    try //Output Table 9
    {
      outputStream =
        new PrintWriter(new FileOutputStream("bin9AA-OutxF.txt")); 
    }
    catch(FileNotFoundException e)
    {
      System.exit(0);
    }
   while (sum[8] < count[8])
    {
      a[8][sum[8]]= (1/p)*(n2[8][sum[8]]-n1[8][sum[8]])/(n1[8][sum[8]]+n2[8][sum[8]]);
      error[8][sum[8]]= (2/p)*Math.sqrt((n1[8][sum[8]]*n2[8][sum[8]])/(Math.pow(n1[8][sum[8]]+n2[8][sum[8]],3)));
      outputStream.println(phi[8][sum[8]] + "    " + a[8][sum[8]] + "    " + error[8][sum[8]]);
      sum[8]++;
    }
   outputStream.close();

    try //Output Table 10
    {
      outputStream =
        new PrintWriter(new FileOutputStream("bin10AA-OutxF.txt")); 
    }
    catch(FileNotFoundException e)
    {
      System.exit(0);
    }
   while (sum[9] < count[9])
    {
      a[9][sum[9]]= (1/p)*(n2[9][sum[9]]-n1[9][sum[9]])/(n1[9][sum[9]]+n2[9][sum[9]]);
      error[9][sum[9]]= (2/p)*Math.sqrt((n1[9][sum[9]]*n2[9][sum[9]])/(Math.pow(n1[9][sum[9]]+n2[9][sum[9]],3)));
      outputStream.println(phi[9][sum[9]] + "    " + a[9][sum[9]] + "    " + error[9][sum[9]]);
      sum[9]++;
    }
   outputStream.close();

    try //Output Table 11
    {
      outputStream =
        new PrintWriter(new FileOutputStream("bin11AA-OutxF.txt")); 
    }
    catch(FileNotFoundException e)
    {
      System.exit(0);
    }
   while (sum[10] < count[10])
    {
      a[10][sum[10]]= (1/p)*(n2[10][sum[10]]-n1[10][sum[10]])/(n1[10][sum[10]]+n2[10][sum[10]]);
      error[10][sum[10]]= (2/p)*Math.sqrt((n1[10][sum[10]]*n2[10][sum[10]])/(Math.pow(n1[10][sum[10]]+n2[10][sum[10]],3)));
      outputStream.println(phi[10][sum[10]] + "    " + a[10][sum[10]] + "    " + error[10][sum[10]]);
      sum[10]++;
    }
   outputStream.close();

    try //Output Table 12
    {
      outputStream =
        new PrintWriter(new FileOutputStream("bin12AA-OutxF.txt")); 
    }
    catch(FileNotFoundException e)
    {
      System.exit(0);
    }
   while (sum[11] < count[11])
    {
      a[11][sum[11]]= (1/p)*(n2[11][sum[11]]-n1[11][sum[11]])/(n1[11][sum[11]]+n2[11][sum[11]]);
      error[11][sum[11]]= (2/p)*Math.sqrt((n1[11][sum[11]]*n2[11][sum[11]])/(Math.pow(n1[11][sum[11]]+n2[11][sum[11]],3)));
      outputStream.println(phi[11][sum[11]] + "    " + a[11][sum[11]] + "    " + error[11][sum[11]]);
      sum[11]++;
    }
   outputStream.close();

    try //Output Table 13
    {
      outputStream =
        new PrintWriter(new FileOutputStream("bin13AA-OutxF.txt")); 
    }
    catch(FileNotFoundException e)
    {
      System.exit(0);
    }
   while (sum[12] < count[12])
    {
      a[12][sum[12]]= (1/p)*(n2[12][sum[12]]-n1[12][sum[12]])/(n1[12][sum[12]]+n2[12][sum[12]]);
      error[12][sum[12]]= (2/p)*Math.sqrt((n1[12][sum[12]]*n2[12][sum[12]])/(Math.pow(n1[12][sum[12]]+n2[12][sum[12]],3)));
      outputStream.println(phi[12][sum[12]] + "    " + a[12][sum[12]] + "    " + error[12][sum[12]]);
      sum[12]++;
    }
   outputStream.close();

    try //Output Table 14
    {
      outputStream =
        new PrintWriter(new FileOutputStream("bin14AA-OutxF.txt")); 
    }
    catch(FileNotFoundException e)
    {
      System.exit(0);
    }
   while (sum[13] < count[13])
    {
      a[13][sum[13]]= (1/p)*(n2[13][sum[13]]-n1[13][sum[13]])/(n1[13][sum[13]]+n2[13][sum[13]]);
      error[13][sum[13]]= (2/p)*Math.sqrt((n1[13][sum[13]]*n2[13][sum[13]])/(Math.pow(n1[13][sum[13]]+n2[13][sum[13]],3)));
      outputStream.println(phi[13][sum[13]] + "    " + a[13][sum[13]] + "    " + error[13][sum[13]]);
      sum[13]++;
    }
   outputStream.close();

    try //Output Table 15
    {
      outputStream =
        new PrintWriter(new FileOutputStream("bin15AA-OutxF.txt")); 
    }
    catch(FileNotFoundException e)
    {
      System.exit(0);
    }
   while (sum[14] < count[14])
    {
      a[14][sum[14]]= (1/p)*(n2[14][sum[14]]-n1[14][sum[14]])/(n1[14][sum[14]]+n2[14][sum[14]]);
      error[14][sum[14]]= (2/p)*Math.sqrt((n1[14][sum[14]]*n2[14][sum[14]])/(Math.pow(n1[14][sum[14]]+n2[14][sum[14]],3)));
      outputStream.println(phi[14][sum[14]] + "    " + a[14][sum[14]] + "    " + error[14][sum[14]]);
      sum[14]++;
    }
   outputStream.close();

    try //Output Table 16
    {
      outputStream =
        new PrintWriter(new FileOutputStream("bin16AA-OutxF.txt")); 
    }
    catch(FileNotFoundException e)
    {
      System.exit(0);
    }
   while (sum[15] < count[15])
    {
      a[15][sum[15]]= (1/p)*(n2[15][sum[15]]-n1[15][sum[15]])/(n1[15][sum[15]]+n2[15][sum[15]]);
      error[15][sum[15]]= (2/p)*Math.sqrt((n1[15][sum[15]]*n2[15][sum[15]])/(Math.pow(n1[15][sum[15]]+n2[15][sum[15]],3)));
      outputStream.println(phi[15][sum[15]] + "    " + a[15][sum[15]] + "    " + error[15][sum[15]]);
      sum[15]++;
    }
   outputStream.close();

    try //Output Table 17
    {
      outputStream =
        new PrintWriter(new FileOutputStream("bin17AA-OutxF.txt")); 
    }
    catch(FileNotFoundException e)
    {
      System.exit(0);
    }
   while (sum[16] < count[16])
    {
      a[16][sum[16]]= (1/p)*(n2[16][sum[16]]-n1[16][sum[16]])/(n1[16][sum[16]]+n2[16][sum[16]]);
      error[16][sum[16]]= (2/p)*Math.sqrt((n1[16][sum[16]]*n2[16][sum[16]])/(Math.pow(n1[16][sum[16]]+n2[16][sum[16]],3)));
      outputStream.println(phi[16][sum[16]] + "    " + a[16][sum[16]] + "    " + error[16][sum[16]]);
      sum[16]++;
    }
   outputStream.close();

    try //Output Table 18
    {
      outputStream =
        new PrintWriter(new FileOutputStream("bin18AA-OutxF.txt")); 
    }
    catch(FileNotFoundException e)
    {
      System.exit(0);
    }
   while (sum[17] < count[17])
    {
      a[17][sum[17]]= (1/p)*(n2[17][sum[17]]-n1[17][sum[17]])/(n1[17][sum[17]]+n2[17][sum[17]]);
      error[17][sum[17]]= (2/p)*Math.sqrt((n1[17][sum[17]]*n2[17][sum[17]])/(Math.pow(n1[17][sum[17]]+n2[17][sum[17]],3)));
      outputStream.println(phi[17][sum[17]] + "    " + a[17][sum[17]] + "    " + error[17][sum[17]]);
      sum[17]++;
    }
   outputStream.close();

    try //Output Table 19
    {
      outputStream =
        new PrintWriter(new FileOutputStream("bin19AA-OutxF.txt")); 
    }
    catch(FileNotFoundException e)
    {
      System.exit(0);
    }
   while (sum[18] < count[18])
    {
      a[18][sum[18]]= (1/p)*(n2[18][sum[18]]-n1[18][sum[18]])/(n1[18][sum[18]]+n2[18][sum[18]]);
      error[18][sum[18]]= (2/p)*Math.sqrt((n1[18][sum[18]]*n2[18][sum[18]])/(Math.pow(n1[18][sum[18]]+n2[18][sum[18]],3)));
      outputStream.println(phi[18][sum[18]] + "    " + a[18][sum[18]] + "    " + error[18][sum[18]]);
      sum[18]++;
    }
   outputStream.close();

    try //Output Table 20
    {
      outputStream =
        new PrintWriter(new FileOutputStream("bin20AA-OutxF.txt")); 
    }
    catch(FileNotFoundException e)
    {
      System.exit(0);
    }
   while (sum[19] < count[19])
    {
      a[19][sum[19]]= (1/p)*(n2[19][sum[19]]-n1[19][sum[19]])/(n1[19][sum[19]]+n2[19][sum[19]]);
      error[19][sum[19]]= (2/p)*Math.sqrt((n1[19][sum[19]]*n2[19][sum[19]])/(Math.pow(n1[19][sum[19]]+n2[19][sum[19]],3)));
      outputStream.println(phi[19][sum[19]] + "    " + a[19][sum[19]] + "    " + error[19][sum[19]]);
      sum[19]++;
    }
   outputStream.close();

    try //Output Table 21
    {
      outputStream =
        new PrintWriter(new FileOutputStream("bin21AA-OutxF.txt")); 
    }
    catch(FileNotFoundException e)
    {
      System.exit(0);
    }
   while (sum[20] < count[20])
    {
      a[20][sum[20]]= (1/p)*(n2[20][sum[20]]-n1[20][sum[20]])/(n1[20][sum[20]]+n2[20][sum[20]]);
      error[20][sum[20]]= (2/p)*Math.sqrt((n1[20][sum[20]]*n2[20][sum[20]])/(Math.pow(n1[20][sum[20]]+n2[20][sum[20]],3)));
      outputStream.println(phi[20][sum[20]] + "    " + a[20][sum[20]] + "    " + error[20][sum[20]]);
      sum[20]++;
    }
   outputStream.close();

    try //Output Table 22
    {
      outputStream =
        new PrintWriter(new FileOutputStream("bin22AA-OutxF.txt")); 
    }
    catch(FileNotFoundException e)
    {
      System.exit(0);
    }
   while (sum[21] < count[21])
    {
      a[21][sum[21]]= (1/p)*(n2[21][sum[21]]-n1[21][sum[21]])/(n1[21][sum[21]]+n2[21][sum[21]]);
      error[21][sum[21]]= (2/p)*Math.sqrt((n1[21][sum[21]]*n2[21][sum[21]])/(Math.pow(n1[21][sum[21]]+n2[21][sum[21]],3)));
      outputStream.println(phi[21][sum[21]] + "    " + a[21][sum[21]] + "    " + error[21][sum[21]]);
      sum[21]++;
    }
   outputStream.close();

   try //Output Table 23
    {
      outputStream =
        new PrintWriter(new FileOutputStream("bin23AA-OutxF.txt")); 
    }
    catch(FileNotFoundException e)
    {
      System.exit(0);
    }
   while (sum[22] < count[22])
    {
      a[22][sum[22]]= (1/p)*(n2[22][sum[22]]-n1[22][sum[22]])/(n1[22][sum[22]]+n2[22][sum[22]]);
      error[22][sum[22]]= (2/p)*Math.sqrt((n1[22][sum[22]]*n2[22][sum[22]])/(Math.pow(n1[22][sum[22]]+n2[22][sum[22]],3)));
      outputStream.println(phi[22][sum[22]] + "    " + a[22][sum[22]] + "    " + error[22][sum[22]]);
      sum[22]++;
    }
   outputStream.close();
  
  }
}
