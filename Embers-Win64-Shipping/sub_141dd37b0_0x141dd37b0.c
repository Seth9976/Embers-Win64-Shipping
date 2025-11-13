// 函数: sub_141dd37b0
// 地址: 0x141dd37b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    char* rax_3 = *(arg1 + 0x48)
    
    if (rax_3 != 0 && (*rax_3 & 1) != 0)
        sub_1423cb370(arg1 + 0x28)
else
    char rax = *(arg1 + 0x32)
    
    if ((rax & 2) != 0)
        *(arg1 + 0x50) = arg1
        
        if ((rax & 4) != 0 || *(arg1 + 0x33) != 0)
            arg2 = 1
        else
            arg2 = 0
        
        sub_1423c9cb0(arg1 + 0x28, arg2)
        sub_1423c6c10(arg1 + 0x28, sub_140d226f0(arg1, sub_142527690()))

char arg_10 = 0
char* var_10 = &arg_10
void*** (* var_18)() = sub_141dbb950
void* result = sub_140a756e0(&var_18, &data_143a2d218)
*(result + 0x10) = arg1
return result
