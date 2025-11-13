// 函数: sub_141df2200
// 地址: 0x141df2200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10_2 = *arg4
int32_t zmm2 = float.s((r10_2 u>> 0x15) - 0x3ff) f* 0.000977517106f f* *arg3 f+ *arg2
int32_t zmm3 = float.s((r10_2 u>> 0xa & 0x7ff) - 0x3ff) f* 0.000977517106f f* arg3[1] f+ arg2[1]
int32_t zmm4 = float.s((r10_2 & 0x3ff) - 0x1ff) f* 0.00195694715f f* arg3[2] f+ arg2[2]
float zmm1 = (zx.o(0)).d
float zmm5 = 1f - zmm2 f* zmm2 - zmm3 f* zmm3 - zmm4 f* zmm4

if (not(zmm5 <= 0f))
    zmm1 = _mm_sqrt_ss(0, zmm5)

*arg1 = zmm2
arg1[1] = zmm3
arg1[2] = zmm4
arg1[3] = zmm1
return arg1
