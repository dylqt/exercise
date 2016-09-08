#include <stdio.h>
int Add(int num1, int num2);
int main()
{
	int result = Add(9, 10);
	printf("%d\n", result);
}

int Add(int num1, int num2)
    {
		if(num1 == 0)
            return num2;
        if(num2 == 0)
            return num1;
        
        int result = 0;
        int scan_bit = 0;	// 从低位到高位扫描
        int add_up = 0;	// 进位
        do{
            int num1_bit = num1 & 1;
            int num2_bit = num2 & 1;
            int check = 0;
            if(num1_bit)
                check++;
            if(num2_bit)
                check++;
            if(add_up)
                check++;
            
            switch(check){
                case 1 :
                	result |= (1 << scan_bit);
                	add_up = 0;
                	break; 
                case 2 :
                	add_up = 1;
                	break;
                case 3 :
                	result |= (1 << scan_bit);
                	add_up = 1;
                	break;
                default :
                    add_up = 0;
                    break;
            }
            scan_bit++;
           	num1 >>= 1;
           	num2 >>= 1;
        }while(num1 || num2);
        return result;
    }
