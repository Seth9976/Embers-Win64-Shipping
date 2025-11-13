// 函数: sub_141e60150
// 地址: 0x141e60150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = **(arg1 + 0x10)
(*(*rcx + 0x288))(rcx)
int64_t result = *(arg1 + 0x10)
float zmm2[0x4] = 0x3f800000
zmm2[0] = 1f / arg2[0]
bool cond:0 = *(result + 0xf8) != 0
zmm2[0] = zmm2[0] f* *(arg1 + 0x34)

if (cond:0)
    return sub_140a454f0(zmm2, 0x3f800000) __tailcall

if (zmm2[0] < 0f)
    return result

_mm_min_ss(zmm2[0], 0x3f800000)
return result
