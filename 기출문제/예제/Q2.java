public class Test {
    public static void main(String[] args) {
        String str = "agile";
        int x[] = {1,2,3,4,5};
        char y[] = new char[5];
        int i = 0;
        while (i < str.length()) {
            y[i] = str.charAt(i);
            i++;
        }
        for (int p : x) {
            i--;
            System.out.print(y[i]);
            System.out.print(p + " ");
        }
    }
}

/* 풀이
 * str.length = 5
 * while i < 5 일때
 * y[i] = str[i]
 * 즉 char y[] 에 
 * i = 0 ~ 4 일때까지
 * char y[] = {a,g,i,l,e} 이 할당됨
 * 
 * 포문에서 현재 i = 5
 * i --; 
 * e1 l2 i3 g4 a5
 * 
 */