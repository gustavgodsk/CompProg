class KnotKnowledge {
  private static void solve(Kattio io){
    int n = io.getInt();
    int[] x = new int[n];
    for (int i = 0; i < n; i++) x[i] = io.getInt();
    int[] y =  new int[n - 1];
    for (int i = 0; i < n - 1; i++) y[i] = io.getInt();
    for (int xi : x){
      boolean found = false;
      for (int yi: y){
        if (xi == yi) found = true;
      }
      if (!found) io.print(xi);
    }
  }

  public static void main(String[] args){
    Kattio io = new Kattio(System.in, System.out);
    solve(io);
    io.close();
  }
} 
