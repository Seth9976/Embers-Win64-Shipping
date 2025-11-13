// 函数: sub_142611120
// 地址: 0x142611120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r9 = *(arg4 + 0x1f)
char r10_1

if (arg5 != 0)
    r10_1 = *(arg5 + 0x1f)

float zmm3

if (arg5 == 0 || ((r10_1 ^ r9) & 0x3f) == 0)
    zmm3 = (zx.o(0)).d
else
    zmm3 = *(arg1 + ((zx.q(r10_1) & 0x3f) << 2) + 0x108)

float zmm0 = arg3[2] - arg2[2]
float zmm2 = arg3[1] - arg2[1]
float zmm1 = *arg3 - *arg2
return _mm_sqrt_ss(0, zmm2 * zmm2 + zmm1 * zmm1 + zmm0 * zmm0) f*
    *(arg1 + ((zx.q(r9) & 0x3f) << 2) + 8) + zmm3
