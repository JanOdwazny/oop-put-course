package oop.put.shapes;
import oop.put.utils.Gift;
import oop.put.utils.*;

import java.io.IOException;

public class Box extends Gift {
    double length;
    double height;
    double width;

    public Box(String receiver,double l,double h, double w){
        super(receiver);
        this.length =l;
        this.height=h;
        this.width=w;

    }
    @Override
    public double calculateArea(){

        return 2 * (length *height + length *width + width*height);
    }

    @Override
    public double calculatePaperRequirement() throws IOException {
        double ans1,ans2,ans3 ;
        ans1=width+length *1.05;
        ans2=height+length *1.05;
        ans3=width+height *1.05;

        if(ans1>=100 && ans2>=100 && ans3>=100){
            System.out.println("the gift won't fit the standard packing paper");
            return -1;

        }else if(ans1>=100 && ans2>=100){
            return Math.min(ans1,ans2);
        }else if(ans1>=100 && ans3>=100){
            return Math.min(ans1,ans3);
        }else if(ans2>=100 && ans3>=100){
            return Math.min(ans2,ans3);
        }else if(ans1>=100 ){
            return ans1;
        }else if(ans2>=100 ){
            return ans2;
        }
        else if(ans3>=100 ) {
            return ans3;
        }else{
            return Math.min(ans3,Math.min(ans1,ans2));
        }

    }


}
