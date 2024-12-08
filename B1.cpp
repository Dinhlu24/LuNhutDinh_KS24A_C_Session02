/*
+>Cac kieu du lieu co the luu tru gia tri la so nguyen co dau bao gom
	short {%hi}	KichThuoc:2 Byte	Gioihanluu: ~ -33 -> ~ 33
	int {%d}	KichThuoc:4 Byte	Gioihanluu: ~ -10^9 -> ~ 10^9
	long long 	KichThuoc:8 Byte	Gioihanluu: ~ -10^18 -> ~ 10^18
	!! Ngoai ra cac kieu du lieu tren con co the luu tru o duoi dang khong dau
		bang cach them " unsigned " vao truoc moi kieu du lieu tren va thay doi
		dac ta "_u" dieu nay co the giup ta co them gioi han ma kieu du lieu do
		co the luu
		Vi du : Gioihanluu cua short ~ -33 -> ~ 33 va dac ta {%hi}
				Gioi han luu cua unsigned short 0 -> ~ 66 va dac ta {%hu}
				
+>Cac kieu du lieu co the luu tru gia tri la so thuc bao gom
	float {%f}	Kichthuoc:4 Byte	Gioihanluu: 3.4E-38->3.4E+38
	double{%lf}	Kichthuoc:8 Byte	Gioihanluu: 1.7E-308->1.7E+308
	
+>Cac kieu du lieu co the luu tru cac ky tu
	char {%c}	Kichthuoc:1 Byte	Gioihanluu: -128 -> 127
	unsinged char {%c}	Kichthuoc:1 Byte	Gioihanluu: 0->255
