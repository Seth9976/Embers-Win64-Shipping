// 函数: sub_1407efe40
// 地址: 0x1407efe40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int32_t i = 0
int32_t rdx_1 = zx.d(*rax) & 0x7fff
*(arg2 + 0x10) = &rax[1]
int32_t var_58 = rdx_1
int32_t rax_1
rax_1.b = rdx_1 != 0x7fff
int32_t* rdx_3
void var_50

if (rdx_1 == 0x7fff)
    rdx_3 = &var_50
else
    rdx_3 = zx.q(rdx_1 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t* var_48 = rdx_3
int32_t rcx_1 = zx.d(rax[1]) & 0x7fff
*(arg2 + 0x10) = &rax[2]
int32_t var_40 = rcx_1
int32_t rax_2
rax_2.b = rcx_1 != 0x7fff
int32_t* var_30
void var_38

if (rcx_1 == 0x7fff)
    var_30 = &var_38
else
    var_30 = zx.q(rcx_1 * *(arg2 + 0x80)) + *(arg2 + 0x70)
uint32_t rcx_4 = zx.d(rax[2])
*(arg2 + 0x10) = &rax[3]
int32_t r8_2 = rcx_4 & 0x7fff
int32_t var_28 = r8_2
int64_t result
result.b = r8_2 != 0x7fff
int32_t var_24 = result.d
int32_t* result_1

if (r8_2 == 0x7fff)
    void var_20
    result = &var_20
    result_1 = &var_20
else
    result_1 = zx.q(*(arg2 + 0x80) * r8_2) + *(arg2 + 0x70)

void* rdi_1 = *(arg1 + 0x30)

if (rdi_1 == 0)
    goto label_1407eff6f

void* rax_4 = sub_1425b89f0()
void* rdx_4 = *(rdi_1 + 0x10)
result = sx.q(*(rax_4 + 0x38))
uint128_t zmm0
uint128_t zmm1
uint128_t zmm2

if (result.d s> *(rdx_4 + 0x38))
label_1407eff6b:
    rdx_3 = var_48
label_1407eff6f:
    zmm0 = 0x3f800000
    zmm1 = 0x3f800000
    zmm2 = 0x3f800000
else
    int64_t result_2 = result
    result = *(rdx_4 + 0x30)
    
    if (*(result + (result_2 << 3)) != rax_4 + 0x30)
        goto label_1407eff6b
    
    zmm1 = zx.o(*(rdi_1 + 0x4c))
    zmm2 = zx.o(*(rdi_1 + 0x50))
    rdx_3 = var_48
    zmm0 = _mm_cvtepi32_ps(zx.o(*(rdi_1 + 0x48)))
    zmm1 = _mm_cvtepi32_ps(zmm1)
    zmm2 = _mm_cvtepi32_ps(zmm2)

if (*(arg2 + 0x40) s> 0)
    do
        *rdx_3 = zmm0.d
        i += 1
        *var_30 = zmm1.d
        *result_1 = zmm2.d
        rdx_3 = &var_48[sx.q(rax_1)]
        var_48 = rdx_3
        result = result_1
        var_30 = &var_30[sx.q(rax_2)]
        result_1 = result + (sx.q(var_24) << 2)
    while (i s< *(arg2 + 0x40))

return result
