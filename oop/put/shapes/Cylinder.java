package oop.put.shapes;
import oop.put.utils.Gift;
import oop.put.utils.*;

import java.io.IOException;

public class Cylinder extends Gift {
    double radius;
    double height;
    public Cylinder(String receiver, double r, double h ){
        super(receiver);
        this.radius=r;
        this.height=h;



    }
    @Override
    public double calculateArea() {
        return (Math.PI * Math.pow(radius,2) * 2) + (height*radius*Math.PI*2);
    }

    public double calculatePaperRequirement() throws IOException {
        double ans1=2*Math.PI*radius * 1.05;
        double ans2= height+(2*radius) * 1.05;
        int err=0;
        if(ans1>=100 &&ans2 >=100){
            System.out.println("the gift won't fit the standard packing paper");
            return -1;
        }else if (ans1>=100){
            return ans1;
        }else if (ans2>=100){
            return ans2;
        }else {
            return Math.min(ans1,ans2);
        }

    }
}
