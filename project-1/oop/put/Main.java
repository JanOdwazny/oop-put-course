package oop.put;


import oop.put.shapes.*;
import oop.put.utils.*;

import java.io.IOException;
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;


public class Main {
    public static void main(String[] args) throws IOException {

        List<Gift> gifts = new ArrayList<>();


        Scanner scanner = new Scanner(System.in);
        int choice = 1;

        while (choice == 1) {
            System.out.println("Please specify shape of the Gift (Ball, Box, Cylinder)");
            String shape = scanner.nextLine();

            //BALL
            if (shape.equalsIgnoreCase("Ball")) {

                System.out.println("Radius:");
                //String r = scanner.nextLine();
                int nr = Integer.parseInt(scanner.nextLine());
                System.out.println("who is the gift for");
                String name = scanner.nextLine();

                Gift gift1 = new Ball(name, nr);
                gifts.add(gift1);
                gift1.changeArea(gift1.calculateArea());
                gift1.changePaperRequirement(gift1.calculatePaperRequirement());

                //System.out.println(gifts.get(0));

            }

            //BOX
            if (shape.equalsIgnoreCase("Box")) {
                System.out.println("provide dimensions separated by space (width length height)");
                String input = scanner.nextLine();
                String[] dims = input.split(" ");
                int width = Integer.parseInt(dims[0]);
                int length = Integer.parseInt(dims[1]);
                int height = Integer.parseInt(dims[2]);

                System.out.println("who is the gift for");
                String name = scanner.nextLine();
                Gift gift2 = new Box(name, length, height, width);
                gift2.changeArea(gift2.calculateArea());
                //System.out.println(gift1.getArea());
                gift2.changePaperRequirement(gift2.calculatePaperRequirement());
                gifts.add(gift2);
               // System.out.println(gift2);
               // System.out.println(gifts.get(0));

            }
            //CYLINDER
            if (shape.equalsIgnoreCase("Cylinder")) {
                System.out.println("provide dimensions separated by space (radius height)");
                String input = scanner.nextLine();
                String[] dims = input.split(" ");
                int radius = Integer.parseInt(dims[0]);
                int height = Integer.parseInt(dims[1]);

                System.out.println("who is the gift for");
                String name = scanner.nextLine();
                Gift gift3 = new Cylinder(name, radius, height);
                gift3.changeArea(gift3.calculateArea());
                //System.out.println(gift1.getArea());
                gift3.changePaperRequirement(gift3.calculatePaperRequirement());
                gifts.add(gift3);
               // System.out.println(gift3);
               // System.out.println(gifts.get(0));
            }
            System.out.println("do you want do add another present? (1  - YES, 0 - NO)");
            choice = Integer.parseInt(scanner.nextLine());

        }
        for (Gift gift : gifts) {
            System.out.println(gift + "\n");

        }
    }
}