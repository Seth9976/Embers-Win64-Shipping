// 函数: sub_1423f0af0
// 地址: 0x1423f0af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm2 = arg2.d
bool cond:0 = zmm2 f>= *(arg1 + 0xbc)
*(arg1 + 0xb4) = zmm2

if (cond:0)
    return 

arg2.d = arg2.d f- 9.99999975e-05f

if (zmm2 >= 9.99999975e-05f)
    return sub_1423f0030(arg1 + 0xb0, _mm_min_ss(arg2.d, zmm2), 0, 1) __tailcall

return sub_1423f0030(arg1 + 0xb0, zx.o(0), 0, 1) __tailcall
