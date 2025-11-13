// 函数: sub_141fe2b30
// 地址: 0x141fe2b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r8 = zx.d(*(arg1 + 0x54))
int64_t zmm2 = *(arg1 + 0x38)
int32_t zmm0
int32_t zmm1

if (r8 == 1)
    zmm0 = zmm2.d
    zmm1 = *(arg1 + 0x40)
else if (r8 == 2)
    zmm0 = zmm2:4.d
    zmm1 = zmm2.d
else if (r8 == 3)
    zmm0 = zmm2:4.d
    zmm1 = zmm0
else if (r8 == 4)
    zmm0 = zmm2.d
    zmm1 = zmm2.d
else
    zmm0 = zmm2:4.d
    zmm1 = *(arg1 + 0x40)

*arg2 = zmm2.d
arg2[1] = zmm0
arg2[2] = zmm1
return arg2
