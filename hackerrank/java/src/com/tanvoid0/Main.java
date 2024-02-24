package com.tanvoid0;

import com.tanvoid0.algorithm.Algorithm;
import com.tanvoid0.algorithm.Prime;

import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int x;
    if(sc.hasNextInt()){
      x = sc.nextInt();
      boolean res = Prime.sieve(x);
      System.out.println(res ? "prime" : "not prime");
    }
  }
}
