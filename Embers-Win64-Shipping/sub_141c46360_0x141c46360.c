// 函数: sub_141c46360
// 地址: 0x141c46360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm0 = 5f

if (not(arg2 f< 5f))
    zmm0 = _mm_min_ss(*(arg1 + 0x18) * 0.5f - 1f, arg2)

if (zmm0 f== *(arg1 + 0x20))
    return 

*(arg1 + 0x20) = zmm0
return sub_141c34f50(arg1) __tailcall
