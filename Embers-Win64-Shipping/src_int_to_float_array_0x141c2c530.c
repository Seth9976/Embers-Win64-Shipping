// 函数: src_int_to_float_array
// 地址: 0x141c2c530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int32_t* r9_1 = arg2 + (sx.q(arg3) << 2)
int32_t i

do
    uint128_t zmm0 = zx.o(*(arg1 - arg2 + r9_1 - 4))
    r9_1 = &r9_1[-1]
    zmm0.q = _mm_cvtepi32_pd(zmm0.q).q f* 0x3e00000000000000
    *r9_1 = _mm_cvtpd_ps(zmm0).d
    i = arg3
    arg3 -= 1
while (i != 1)
