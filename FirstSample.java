/*
 * A Sample Java Program
 */
package chapter3;

/*
 * @author Fahmi Widianto
 */
public class FirstSample {

    public static void main(String[] args) {
        System.out.println("Bissmillahirahmanirrahim");
        // Test menggunakan tanda kutip
        System.out.println("Bissmillahirahmanirrahim, 'Hello world'");
        String str= "fahmi";
        System.out.println(str.substring(1));
    int angka = 2147483647;
    short angka_short = 32767;
    long angka_long = 9223372036854775807l;
    byte angka_byte = 127;
    System.out.println(angka_short);
    float tes = 3.14E10f;
     System.out.println(tes);
             char karakter= 'A';
             System.out.println("ini char" +karakter);
        boolean cek=false;
        boolean cek2=true;
        System.out.println("test : " +cek  +cek2);
    
    int a[] = new int[10];    
    for (int i = 0; i < a.length; i++){
    a[i]=i;
    System.out.println(a[i]);
    }
   }
    /* catatan
    explore tentang private class
    explore macam macam komen
    */
}
/* 
Macam-macam jenis comment dalam java

End Of Line Comment ( // )
Komentar  dengan tanda slash ganda ( // ) disebut dengan end-of-line comment,  
karena semua perintah program, komentar-komentar atau penjelasan program berada 
setelah tanda slash ganda, semua dianggap sebagai komentar dan komentar hanya satu baris saja.

Contoh : // Test
         // variabel a=b

Multiple Line Comment
Komentar  dengan tanda slash  dan asterik disebut  dengan Multiple-Line 
Comment, karena ini, perintah program, komentar-komentar  atau penjelasan program  
berada dalam apitan tanda slash dan asterik, semua dianggap sebagai komentar,  
dan komentar  bisa lebih dari satu baris.
Contoh : /*
            Comment
            Java
            Language
         */
/*
Javadoc comment
Komentar  dengan tanda slash  ganda didepan  dan asterik  disebut  dengan Javadoc Comment.  
Penggunaannya sama seperti  Multiple  Line Comment,  akan tetapi penggunaannya untuk 
dokumentasi-dokumentasi didalam program. 
Sebagai contoh :
Semua komentar program atau penjelasan program  pada saat program  java dicompile 
tidak ikut serta dicompile, karena tidak dianggap sebagai suatu baris program.
*/
