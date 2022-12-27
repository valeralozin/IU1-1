package org.example;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner console =  new Scanner(System.in);
        int[] arr;
        arr=new int [4];
        for (int i = 0; i<4; i++ ){
            arr[i] = console.nextInt();
        }
        int m = -100000000;
        for (int i=0;i<4;i++){
            if (m<arr[i]){
                m=arr[i];
            }
        }
        System.out.println(m);

    }
}