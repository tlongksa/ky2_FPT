1.  khai bao chu�i
string str ,str1,str2; // khai b�o danh s�ch chu?i
str="h�m x? l?, x? l? chu?i c#"; //g�n gi� tr? chu?i
str1="x? l? chu?i 1";
str2="x? l? chu?i 2";
 

2. lay chieu dai chu�i
str.Length
 

3. So s�nh 2 chu�i
String.Compare(str1, str2, true)



if (String.Compare(str1, str2, true) == 0)
{
    Console.Write("");
}
else if (String.Compare(str1, str2, true) < 0)
{
    Console.Write("");
}
String.Compare(str1, str2, false)
giong nhau nhung phan biet chu hoa chu thuong

 

4. ktra ton tai 1 chuoi 1 (Str1) trong chu?i 2 (Str2): 
Str1.Contains(Str2)
 

5. tim vi tri hien thi chu�i
Str1.IndexOf("chu?i")
H�m tr? v? v? tr� xu?t hi?n �?u ti�n c?a k? t? �chu?i� trong Str1.
Tr? v? -1 n?u trong Str1 kh�ng c� k? t? �chu?i�.

 

6. tim vi tri cu�i cung cua chuoi
Str1.LastIndexOf("chu?i")
H�m tr? v? v? tr� xu?t hi?n cu?i c�ng c?a k? t? �chu?i� trong Str1.
Tr? v? -1 n?u trong Str1 kh�ng c� k? t? �chu?i�.

 

7. Ki?m tra xem chu?i 1 (Str1) c� b?t b?u b?ng k? t? trong chu?i 2 (Str2) kh�ng:
Str1.StartsWith(Str2)
 

8. Thay the chuoi
Str = Str.Replace(",",".")
Thay th? d?u �,� th�nh d?u �.� trong chu?i Str.

Str = Str.Replace("x? l?","h�m chu?i")
Thay th? chu?i �x? l?� th�nh chu?i �h�m chu?i� trong chu?i Str.

 

9. c�t chuoi con
Str1 = Str.SubString(2)
T?o chu?i con t? chu?i Str b?t �?u t? v? tr� 2 �?n h?t.

Str1 = Str.Substring(0,6)
cat chuoi vi tri dau tien den vi tri 6

 

10. T�ch chu?i:
.Split
Vd:

//t�ch trong chu?i str tr�n khi g?p k? t? �,�

string[] arrListStr = str.Split(',');
//k?t qu?

arrListStr[0] = 'h�m x? l?' v� arrListStr[1]='x? l? chu?i c#'
Ho?c:

//t�ch trong chu?i str tr�n khi g?p k? t? �,�

string[] arrListStr = str.Split(new char[] { ',' });
//k?t qu?

arrListStr[0]='h�m x? l?' v� arrListStr[1]='x? l? chu?i c#'
 

11. Chuy?n ch? hoa sang ch? th�?ng v� ng�?c l?i:
Str = Str.Trim()
C?t h?t kho?ng tr?ng ? �?u v� cu?i chu?i

Str = Str.TrimLeft()
C?t h?t kho?ng tr?ng ? �?u chu?i

Str = Str.TrimRight()
C?t h?t kho?ng tr?ng ? cu?i chu?i

 

13. X�a chu?i:
Str1.Remove(1)
xoa tu 1 den h�t

Str.Remove(1,5)
t? 1 -> 5
