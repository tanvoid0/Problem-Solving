package com.tanvoid0.algorithm;

public class Prime {
  static private boolean[] arr;
  final private int max = 100000001;
  static boolean init = false;
  Prime() {
    arr = new boolean[max];
    for(int i=0; i< max; i++)
      arr[i] = true;
    for(int p=2; p*p < max; p++){
      // if arr[p] is not changed, then it is a prime
      if(arr[p]) {
        // update all multiples of p
        for(int i=p*p; i< max; i+=p)
          arr[i] = false;
      }
    }
    init = true;
  }
  public static boolean sieve(int n) {
    if(!init)
      new Prime();
    return arr[n];
  }
}