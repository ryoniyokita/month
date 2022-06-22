#include <stdio.h>
int main(){
	
	char bulan;
	
	printf("masukkan angka 1-12 : ");
	scanf("%d", &bulan);
	switch(bulan){
		case 1: printf("bulan januari");
		break;
		case 2: printf("bulan februari");
		break;
		case 3: printf("bulan maret");
		break;
		case 4: printf("bulan april");
		break;
		case 5: printf("bulan mei");
		break;
		case 6: printf("bulan juni");
		break;
		case 7: printf("bulan juli");
		break;
		case 8: printf("bulan agustus");
		break;
		case 9: printf("bulan september");
		break;
		case 10: printf("bulan oktober");
		break;
		case 11: printf("bulan november");
		break;
		case 12: printf("bulan desember");
		break;
		default: printf("angka yang dimasukkan salah");
	}
	
	return 0;
}
