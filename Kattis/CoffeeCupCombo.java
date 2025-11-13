class CoffeeCupCombo {
  private static void solve(Kattio io){
    int n = io.getInt();
    String[] lectures = io.getWord().split("");
    io.println(n);
    io.println(lectures);
    io.println(lectures.length);
  }

  public static void main(String[] args){
    Kattio io = new Kattio(System.in, System.out);
    solve(io);
    io.close();
  }
} 
