class gcd {
public static void main(String[] args) {
int a, b;
a = Integer.parseInt(args[0]);
b = Integer.parseInt(args[1]);
if (a == 0)
System.out.println(b);
else {
while (b > 0)
if (a > b)
a = a-b;
else
b = b-a;
System.out.println(a);
}
}
}
