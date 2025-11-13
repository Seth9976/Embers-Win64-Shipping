// 函数: sub_140cf30f0
// 地址: 0x140cf30f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

double zmm2 = 9.2233720368547758e+18
int64_t rcx = 0
double zmm0 = arg2

if (not(arg2 < zmm2))
    zmm0 = zmm0 - zmm2
    
    if (not(zmm0 >= zmm2))
        rcx = -0x8000000000000000

int64_t rax = int.q(zmm0)
zmm0 = float.d(rax + rcx)

if (rax + rcx s< 0)
    zmm0 = zmm0 + 1.8446744073709552e+19

int64_t result

if (zmm0 != arg2)
    result.b = 0
    return result

result.b = 1
return result
