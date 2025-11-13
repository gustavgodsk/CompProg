class ComposedRhythms {
  private static void solve(Kattio io){
    int n = io.getInt();
      int remainder = n % 3;
      int addedLength = remainder == 0 ? 0 : 1;
      int divisionCount = n / 3; 
      int[] outputArray = new int[divisionCount+addedLength];

      for (int i = 0; i < divisionCount; i++){
        outputArray[i] = 3;
      }

    if (remainder  == 2){
      outputArray[divisionCount] = 2;
     
    }
    else if (remainder == 1){
      outputArray[divisionCount-1] = 2;
      outputArray[divisionCount] = 2;
    }
    io.println(outputArray.length);
    for (int i = 0; i < outputArray.length; i++){
      io.print(outputArray[i]);
      io.print(" ");
    }
  }

  public static void main(String[] args){
    Kattio io = new Kattio(System.in, System.out);
    solve(io);
    io.close();
  }
} 
