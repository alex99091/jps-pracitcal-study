class classA {
    int a = 10;
    int funcAdd(int x, int y) {
        return x + y + a;
    }
}

public class Q6 {
    public static void main(String[] args) {
        int x = 3, y = 6, r;
        classA cal = new classA();
        r = cal.funcAdd(x, y);
        System.out.print(r);
    }
}

/*  풀이
 *  3 +6 + 10 = 19
 *  답: 19
 */