1.  khai bao chuôi
string str ,str1,str2; // khai báo danh sách chu?i
str="hàm x? l?, x? l? chu?i c#"; //gán giá tr? chu?i
str1="x? l? chu?i 1";
str2="x? l? chu?i 2";
 

2. lay chieu dai chuôi
str.Length
 

3. So sánh 2 chuôi
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
 

5. tim vi tri hien thi chuôi
Str1.IndexOf("chu?i")
Hàm tr? v? v? trí xu?t hi?n ð?u tiên c?a k? t? “chu?i” trong Str1.
Tr? v? -1 n?u trong Str1 không có k? t? “chu?i”.

 

6. tim vi tri cuôi cung cua chuoi
Str1.LastIndexOf("chu?i")
Hàm tr? v? v? trí xu?t hi?n cu?i cùng c?a k? t? “chu?i” trong Str1.
Tr? v? -1 n?u trong Str1 không có k? t? “chu?i”.

 

7. Ki?m tra xem chu?i 1 (Str1) có b?t b?u b?ng k? t? trong chu?i 2 (Str2) không:
Str1.StartsWith(Str2)
 

8. Thay the chuoi
Str = Str.Replace(",",".")
Thay th? d?u ‘,’ thành d?u ‘.’ trong chu?i Str.

Str = Str.Replace("x? l?","hàm chu?i")
Thay th? chu?i ‘x? l?’ thành chu?i ”hàm chu?i’ trong chu?i Str.

 

9. cãt chuoi con
Str1 = Str.SubString(2)
T?o chu?i con t? chu?i Str b?t ð?u t? v? trí 2 ð?n h?t.

Str1 = Str.Substring(0,6)
cat chuoi vi tri dau tien den vi tri 6

 

10. Tách chu?i:
.Split
Vd:

//tách trong chu?i str trên khi g?p k? t? ‘,’

string[] arrListStr = str.Split(',');
//k?t qu?

arrListStr[0] = 'hàm x? l?' và arrListStr[1]='x? l? chu?i c#'
Ho?c:

//tách trong chu?i str trên khi g?p k? t? ‘,’

string[] arrListStr = str.Split(new char[] { ',' });
//k?t qu?

arrListStr[0]='hàm x? l?' và arrListStr[1]='x? l? chu?i c#'
 

11. Chuy?n ch? hoa sang ch? thý?ng và ngý?c l?i:
Str = Str.Trim()
C?t h?t kho?ng tr?ng ? ð?u và cu?i chu?i

Str = Str.TrimLeft()
C?t h?t kho?ng tr?ng ? ð?u chu?i

Str = Str.TrimRight()
C?t h?t kho?ng tr?ng ? cu?i chu?i

 

13. Xóa chu?i:
Str1.Remove(1)
xoa tu 1 den hét

Str.Remove(1,5)
t? 1 -> 5
