// 函数: sub_140d10b70
// 地址: 0x140d10b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

double zmm0 = 9.2233720368547758e+18
int64_t rcx = 0

if (not(arg3 < zmm0))
    arg3 = arg3 - zmm0
    
    if (not(arg3 >= zmm0))
        rcx = -0x8000000000000000

int64_t result = int.q(arg3) + rcx
*arg2 = result
return result
