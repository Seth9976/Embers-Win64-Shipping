// 函数: sub_140d04d00
// 地址: 0x140d04d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

double zmm0 = *arg2
int64_t rcx = 0
double zmm1 = 9.2233720368547758e+18

if (not(zmm0 < zmm1))
    zmm0 = zmm0 - zmm1
    
    if (not(zmm0 >= zmm1))
        rcx = -0x8000000000000000

return int.q(zmm0) + rcx
