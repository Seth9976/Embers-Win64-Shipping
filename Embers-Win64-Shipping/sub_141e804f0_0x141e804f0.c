// 函数: sub_141e804f0
// 地址: 0x141e804f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

double zmm5 = *(arg3 + 8)
double zmm2 = *(arg2 + 8)
double zmm1 = zmm5 - zmm2
float zmm3[0x4] = 0x3f800000
uint128_t zmm6 = zx.o(data_143dbb3b8)
uint128_t zmm0

if (not(zmm1 <= 0.0))
    zmm0.q = zmm6.q f- zmm2
    zmm0.q = zmm0.q f/ zmm1
    zmm3 = _mm_cvtpd_ps(zmm0)

if (not(zmm3[0] < 1f))
    *(arg1 + 8) = zmm5
    *(arg1 + 0x10) = *(arg3 + 0x10)
    *(arg1 + 0x14) = *(arg3 + 0x14)
    *(arg1 + 0x18) = *(arg3 + 0x18)
    *(arg1 + 0x1c) = *(arg3 + 0x1c)
    *(arg1 + 0x20) = *(arg3 + 0x20)
    *(arg1 + 0x24) = *(arg3 + 0x24)
    *(arg1 + 0x28) = *(arg3 + 0x28)
    *(arg1 + 0x2c) = *(arg3 + 0x2c)
    *(arg1 + 0x30) = *(arg3 + 0x30)
    *(arg1 + 0x34) = *(arg3 + 0x34)
    *(arg1 + 0x38) = *(arg3 + 0x38)
    *(arg1 + 0x3c) = *(arg3 + 0x3c)
    *(arg1 + 0x40) = *(arg3 + 0x40)
    int32_t rax_13
    rax_13.b = 1
    return rax_13

if (not(zmm3[0] > 0f))
    *(arg1 + 8) = zmm2
    *(arg1 + 0x10) = *(arg2 + 0x10)
    *(arg1 + 0x14) = *(arg2 + 0x14)
    *(arg1 + 0x18) = *(arg2 + 0x18)
    *(arg1 + 0x1c) = *(arg2 + 0x1c)
    *(arg1 + 0x20) = *(arg2 + 0x20)
    *(arg1 + 0x24) = *(arg2 + 0x24)
    *(arg1 + 0x28) = *(arg2 + 0x28)
    *(arg1 + 0x2c) = *(arg2 + 0x2c)
    *(arg1 + 0x30) = *(arg2 + 0x30)
    *(arg1 + 0x34) = *(arg2 + 0x34)
    *(arg1 + 0x38) = *(arg2 + 0x38)
    *(arg1 + 0x3c) = *(arg2 + 0x3c)
    *(arg1 + 0x40) = *(arg2 + 0x40)
    int32_t rax_26
    rax_26.b = 0
    return rax_26

*(arg1 + 8) = zmm6.q
uint128_t zmm4
zmm4.d = 1f - zmm3[0]
zmm1.d = zmm3[0].q.d f* *(arg3 + 0x10)
zmm2 = zmm3[0].q
int64_t rax
rax.b = 0
zmm0.d = zmm4.d f* *(arg2 + 0x10)
zmm1.d = zmm1.d f+ zmm0.d
*(arg1 + 0x10) = zmm1.d
zmm1 = zmm3[0].q
zmm0.d = zmm4.d f* *(arg2 + 0x14)
zmm2.d = zmm2.d f* *(arg3 + 0x14)
zmm2.d = zmm2.d f+ zmm0.d
*(arg1 + 0x14) = zmm2.d
zmm2 = zmm3[0].q
zmm0.d = zmm4.d f* *(arg2 + 0x18)
zmm1.d = zmm1.d f* *(arg3 + 0x18)
zmm1.d = zmm1.d f+ zmm0.d
*(arg1 + 0x18) = zmm1.d
zmm1 = zmm3[0].q
zmm0.d = zmm4.d f* *(arg2 + 0x1c)
zmm2.d = zmm2.d f* *(arg3 + 0x1c)
zmm2.d = zmm2.d f+ zmm0.d
*(arg1 + 0x1c) = zmm2.d
zmm2 = zmm3[0].q
zmm0.d = zmm4.d f* *(arg2 + 0x20)
zmm1.d = zmm1.d f* *(arg3 + 0x20)
zmm1.d = zmm1.d f+ zmm0.d
*(arg1 + 0x20) = zmm1.d
zmm1 = zmm3[0].q
zmm0.d = zmm4.d f* *(arg2 + 0x24)
zmm2.d = zmm2.d f* *(arg3 + 0x24)
zmm2.d = zmm2.d f+ zmm0.d
*(arg1 + 0x24) = zmm2.d
zmm2 = zmm3[0].q
zmm0.d = zmm4.d f* *(arg2 + 0x28)
zmm1.d = zmm1.d f* *(arg3 + 0x28)
zmm1.d = zmm1.d f+ zmm0.d
*(arg1 + 0x28) = zmm1.d
zmm0.d = zmm4.d f* *(arg2 + 0x2c)
zmm2.d = zmm2.d f* *(arg3 + 0x2c)
zmm2.d = zmm2.d f+ zmm0.d
*(arg1 + 0x2c) = zmm2.d
zmm0.d = zmm3.d f* *(arg3 + 0x30)
zmm1.d = zmm4.q.d f* *(arg2 + 0x30)
zmm1.d = zmm1.d f+ zmm0.d
*(arg1 + 0x30) = zmm1.d
zmm0.d = zmm3.d f* *(arg3 + 0x34)
zmm2.d = zmm4.q.d f* *(arg2 + 0x34)
zmm2.d = zmm2.d f+ zmm0.d
*(arg1 + 0x34) = zmm2.d
zmm0.d = zmm3.d f* *(arg3 + 0x38)
zmm1.d = zmm4.q.d f* *(arg2 + 0x38)
zmm1.d = zmm1.d f+ zmm0.d
*(arg1 + 0x38) = zmm1.d
zmm2.d = zmm4.q.d f* *(arg2 + 0x3c)
zmm0.d = zmm3.d f* *(arg3 + 0x3c)
zmm2.d = zmm2.d f+ zmm0.d
*(arg1 + 0x3c) = zmm2.d
zmm4.d = zmm4.d f* *(arg2 + 0x40)
zmm3[0] = zmm3[0] f* *(arg3 + 0x40)
zmm4.d = zmm4.d f+ zmm3[0]
*(arg1 + 0x40) = zmm4.d
return rax
