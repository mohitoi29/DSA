import java.io.*;
public class BStream{
    public static void main(String Args[])throwsIOException
    {
        FileInputsourceStream=null;
        FileOutputtargetstream=null;
        try{
            sourceStream= new FileInputStream();
            targetStream=new FileOutputstream();
            int temp;
            while((temp=sourceStream.read())!=-1)
                    targetStream.write((byte)temp);
            

        }
        finally{
            if(sourceStream!=null)
                sourceStream.close();
            if(targetStream!=null)
                targetStream.close();   
        }
        
            
    }
}
