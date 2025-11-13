// 函数: sub_141e7dc60
// 地址: 0x141e7dc60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm2 = *(arg3 + 0x1f0) f* *(arg1 + 0xe0)

if (zmm2 >= 0f)
    zmm2 = _mm_min_ss(zmm2, 0x43340000)
else
    zmm2 = (zx.o(0)).d

float zmm0 = *(arg3 + 0x1f4) f* *(arg1 + 0xe4)

if (zmm0 >= 0f)
    zmm0 = _mm_min_ss(zmm0, 0x43340000)
else
    zmm0 = (zx.o(0)).d

if (not(zmm2 == zmm0))
    arg2 = (arg2 - zmm2) / (zmm0 - zmm2)
    
    if (not(arg2 < 0f))
        if (arg2 >= 1f)
            return 1f
        
        return arg2
else if (not(arg2 < zmm2))
    return 1f

return (zx.o(0)).d
