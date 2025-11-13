// 函数: sub_1407efff0
// 地址: 0x1407efff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int32_t i = 0
int32_t r10_1 = zx.d(*rax) & 0x7fff
*(arg2 + 0x10) = &rax[1]
int32_t var_40 = r10_1
int32_t rax_1
rax_1.b = r10_1 != 0x7fff
int32_t* r8_2
void var_38

if (r10_1 == 0x7fff)
    r8_2 = &var_38
else
    r8_2 = zx.q(*(arg2 + 0x80) * r10_1) + *(arg2 + 0x70)
int32_t* var_30 = r8_2
int32_t rcx_1 = zx.d(rax[1]) & 0x7fff
*(arg2 + 0x10) = &rax[2]
int32_t var_58 = rcx_1
int32_t rax_2
rax_2.b = rcx_1 != 0x7fff
int32_t* var_48
void var_50

if (rcx_1 == 0x7fff)
    var_48 = &var_50
else
    var_48 = zx.q(rcx_1 * *(arg2 + 0x80)) + *(arg2 + 0x70)
uint32_t rcx_4 = zx.d(rax[2])
*(arg2 + 0x10) = &rax[3]
int32_t r10_4 = rcx_4 & 0x7fff
int32_t rax_4
rax_4.b = r10_4 != 0x7fff
int32_t* result_1
void var_20

if (r10_4 == 0x7fff)
    result_1 = &var_20
else
    result_1 = zx.q(*(arg2 + 0x80) * r10_4) + *(arg2 + 0x70)
uint32_t rax_6 = zx.d(*(arg1 + 0x39))
uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x38)))
uint64_t result = zx.q(*(arg1 + 0x3a))
uint128_t zmm1 = _mm_cvtepi32_ps(zx.o(rax_6))
uint128_t zmm2 = _mm_cvtepi32_ps(zx.o(result.d))

if (*(arg2 + 0x40) s> 0)
    do
        *r8_2 = zmm0.d
        i += 1
        *var_48 = zmm1.d
        *result_1 = zmm2.d
        r8_2 = &var_30[sx.q(rax_1)]
        var_30 = r8_2
        result = result_1
        var_48 = &var_48[sx.q(rax_2)]
        result_1 = result + (sx.q(rax_4) << 2)
    while (i s< *(arg2 + 0x40))

return result
