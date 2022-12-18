package oop.put.utils;

import java.io.IOException;

public abstract class Gift{

    String receiver;

    Double area;
    Double paperRequirement;
    public Gift( String receiver){

        this.receiver=receiver;
        area=0.00;
        paperRequirement=0.0;

    }

    public void changeArea(Double area){
        this.area=area;

    }
    public void changePaperRequirement(Double req){
        this.paperRequirement=req;
    }
    @Override
    public String toString() {
        return "Gift for " + this.receiver + " requires " + Math.ceil(this.area) + " cm^2 of paper or " + Math.ceil(this.paperRequirement) +
                " cm cut from standard roll of packing paper";
    }
    public abstract double calculateArea();

    public abstract double calculatePaperRequirement() throws IOException;
}
