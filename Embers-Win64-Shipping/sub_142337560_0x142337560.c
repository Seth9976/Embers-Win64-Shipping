// 函数: sub_142337560
// 地址: 0x142337560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 != 0)
    *arg2 = *(arg1 + 0x1e0)
    int32_t rax_1 = *(arg1 + 0x1e4)
    arg2[1] = rax_1
    return rax_1

float zmm0 = 1f f/ *(arg1 + 0x1f0)
int128_t zmm6
zmm6.d = float.s(*(arg1 + 0x1e4))
int32_t zmm5 = float.s(*(arg1 + 0x1e0)) f* zmm0
zmm6.d = zmm6.d f* zmm0
float zmm1 = zmm6.d f* *(arg1 + 0x20c)
zmm6.d = zmm6.d f* *(arg1 + 0x210)
zmm6.d = zmm6.d f+ zmm5 f* *(arg1 + 0x208)
zmm6.d = zmm6.d f+ *(arg1 + 0x218)
*arg2 = int.d(zmm1 + zmm5 f* *(arg1 + 0x204) f+ *(arg1 + 0x214))
int32_t rax_3 = int.d(zmm6.d)
arg2[1] = rax_3
return rax_3
