// 函数: sub_141e802a0
// 地址: 0x141e802a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

double zmm5 = *(arg3 + 8)
double zmm2 = *(arg2 + 8)
double zmm1 = zmm5 - zmm2
int32_t zmm3 = 0x3f800000
uint128_t zmm6 = zx.o(data_143dbb3b8)
uint128_t zmm0

if (not(zmm1 <= 0.0))
    zmm0.q = zmm6.q f- zmm2
    zmm0.q = zmm0.q f/ zmm1
    zmm3 = _mm_cvtpd_ps(zmm0)

if (not(zmm3 f< 1f))
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
    int32_t rax_12
    rax_12.b = 1
    return rax_12

if (not(zmm3 f> 0f))
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
    int32_t rax_24
    rax_24.b = 0
    return rax_24

*(arg1 + 8) = zmm6.q
int64_t rax
rax.b = 0
zmm1.d = (*(arg3 + 0x10)).d f- *(arg2 + 0x10)
zmm1.d = zmm1.d f* zmm3
zmm1.d = zmm1.d f+ *(arg2 + 0x10)
*(arg1 + 0x10) = zmm1.d
zmm0.d = (*(arg3 + 0x1c)).d f- *(arg2 + 0x1c)
zmm0.d = zmm0.d f* zmm3
zmm0.d = zmm0.d f+ *(arg2 + 0x1c)
*(arg1 + 0x1c) = zmm0.d
zmm2.d = (*(arg3 + 0x28)).d f- *(arg2 + 0x28)
zmm2.d = zmm2.d f* zmm3
zmm2.d = zmm2.d f+ *(arg2 + 0x28)
*(arg1 + 0x28) = zmm2.d
zmm1.d = (*(arg3 + 0x34)).d f- *(arg2 + 0x34)
zmm1.d = zmm1.d f* zmm3
zmm1.d = zmm1.d f+ *(arg2 + 0x34)
*(arg1 + 0x34) = zmm1.d
zmm0.d = (*(arg3 + 0x14)).d f- *(arg2 + 0x14)
zmm0.d = zmm0.d f* zmm3
zmm0.d = zmm0.d f+ *(arg2 + 0x14)
*(arg1 + 0x14) = zmm0.d
zmm2.d = (*(arg3 + 0x20)).d f- *(arg2 + 0x20)
zmm2.d = zmm2.d f* zmm3
zmm2.d = zmm2.d f+ *(arg2 + 0x20)
*(arg1 + 0x20) = zmm2.d
zmm1.d = (*(arg3 + 0x2c)).d f- *(arg2 + 0x2c)
zmm1.d = zmm1.d f* zmm3
zmm1.d = zmm1.d f+ *(arg2 + 0x2c)
*(arg1 + 0x2c) = zmm1.d
zmm0.d = (*(arg3 + 0x38)).d f- *(arg2 + 0x38)
zmm0.d = zmm0.d f* zmm3
zmm0.d = zmm0.d f+ *(arg2 + 0x38)
*(arg1 + 0x38) = zmm0.d
zmm2.d = (*(arg3 + 0x18)).d f- *(arg2 + 0x18)
zmm2.d = zmm2.d f* zmm3
zmm2.d = zmm2.d f+ *(arg2 + 0x18)
*(arg1 + 0x18) = zmm2.d
zmm1.d = (*(arg3 + 0x24)).d f- *(arg2 + 0x24)
zmm1.d = zmm1.d f* zmm3
zmm1.d = zmm1.d f+ *(arg2 + 0x24)
*(arg1 + 0x24) = zmm1.d
zmm0.d = (*(arg3 + 0x30)).d f- *(arg2 + 0x30)
zmm0.d = zmm0.d f* zmm3
zmm0.d = zmm0.d f+ *(arg2 + 0x30)
*(arg1 + 0x30) = zmm0.d
zmm2.d = (*(arg3 + 0x3c)).d f- *(arg2 + 0x3c)
zmm2.d = zmm2.d f* zmm3
zmm2.d = zmm2.d f+ *(arg2 + 0x3c)
*(arg1 + 0x3c) = zmm2.d
return rax
