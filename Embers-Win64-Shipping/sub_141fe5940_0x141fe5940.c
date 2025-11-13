// 函数: sub_141fe5940
// 地址: 0x141fe5940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r8_3 = zx.d(*(arg1 + 0x48))
int64_t zmm0

if (r8_3 == 1)
    zmm0 = *(arg1 + 0x38)
    int32_t rax_7 = *(arg1 + 0x40)
    *arg2 = zmm0.d
    *(arg2 + 4) = zmm0.d
    arg2[1].d = rax_7
    return arg2

if (r8_3 == 2)
    zmm0 = *(arg1 + 0x38)
    *(arg2 + 4) = *(arg1 + 0x3c)
    *arg2 = zmm0.d
    arg2[1].d = zmm0.d
    return arg2

if (r8_3 == 3)
    zmm0 = *(arg1 + 0x3c)
    *arg2 = *(arg1 + 0x38)
    *(arg2 + 4) = zmm0.d
    arg2[1].d = zmm0.d
    return arg2

if (r8_3 != 4)
    int32_t rax = *(arg1 + 0x40)
    *arg2 = *(arg1 + 0x38)
    arg2[1].d = rax
    return arg2

zmm0 = *(arg1 + 0x38)
*arg2 = zmm0.d
*(arg2 + 4) = zmm0.d
arg2[1].d = zmm0.d
return arg2
