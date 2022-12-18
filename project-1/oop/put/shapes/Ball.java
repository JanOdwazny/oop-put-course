package oop.put.shapes;

import oop.put.utils.Gift;

import java.io.IOException;

public class Ball extends Gift {
    double radius;
    public Ball( String receiver, double radius) {
        super( receiver);
        this.radius=radius;

    }
    @Override
    public double calculateArea(){


        return Math.pow(radius, 2)* Math.PI * 4;
    }
    public double calculatePaperRequirement() throws IOException {
        if(2*Math.PI*radius>=100){
            System.out.println("the gift won't fit the standard packing paper");
            return -1;
        }else{
           return  2*Math.PI*radius * 1.05;
        }
    }

}

