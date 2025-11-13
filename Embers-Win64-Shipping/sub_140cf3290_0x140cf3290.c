// 函数: sub_140cf3290
// 地址: 0x140cf3290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t zmm0 = float.d(arg2)

if (arg2 s< 0)
    zmm0 = zmm0 f+ 1.8446744073709552e+19

double zmm1 = 9.2233720368547758e+18
int64_t rcx = 0

if (not(zmm0 f< zmm1))
    zmm0 = zmm0 f- zmm1
    
    if (not(zmm0 f>= zmm1))
        rcx = -0x8000000000000000

int64_t result
result.b = int.q(zmm0) + rcx == arg2
return result
