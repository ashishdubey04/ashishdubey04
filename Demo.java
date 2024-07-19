public class Demo {
    int a = 10;
    int b = 20;

    public Demo() {
        System.out.println("Constructor is running");
    }

    protected void show() {
        System.out.println("Show is running");
    }

    public static void main(String[] gg) {
        Demo d = new Demo();
        System.out.println(d.a);
        System.out.println(d.b);
        d.show();
    }
}
