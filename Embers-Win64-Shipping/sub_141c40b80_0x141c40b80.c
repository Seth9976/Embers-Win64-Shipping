// 函数: sub_141c40b80
// 地址: 0x141c40b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg4)
sub_141c33790(*(arg1 + 8), arg2, rbx.d)
int64_t rax = sub_141c3bdb0(*(arg1 + 8), (rbx + 1).d + *arg1, 0)
uint32_t (* r10)[0x4] = *(arg1 + 0x10)
float temp0[0x4] = _mm_cvtepi32_ps(zx.o(*arg1))
float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0)

if (rbx.d s> 0)
    float (* rsi_1)[0x4] = arg3 - r10
    float (* r11_2)[0x4] = arg5 - r10
    uint128_t zmm7 = data_143f34950
    uint64_t i_1 = zx.q(((rbx - 1).d u>> 2) + 1)
    uint64_t i
    
    do
        uint128_t zmm0 = data_143f34880
        float zmm5_1[0x4] = data_143f34890
        uint32_t (* rax_1)[0x4] = *(arg1 + 0x20)
        float temp0_3[0x4] = _mm_min_ps(_mm_max_ps(*(rsi_1 + r10), zmm0), temp0_1)
        uint32_t temp0_5[0x4] = _mm_and_ps(zmm5_1 ^ zmm0, _mm_cmpeq_ps(zmm0, temp0_3, 2))
        float temp0_8[0x4] =
            _mm_sub_ps(_mm_cvtepi32_ps(_mm_cvttps_epi32(temp0_3)), temp0_5 ^ zmm5_1)
        uint32_t zmm1_1[0x4] = *r10
        float temp0_9[0x4] = _mm_sub_ps(temp0_3, temp0_8)
        zmm0 = _mm_cvttps_epi32(temp0_8)
        float temp0_11[0x4] = _mm_sub_ps(zmm5_1, temp0_9)
        zmm1_1 = _mm_sub_epi32(zmm1_1, zmm0)
        *rax_1 = zmm1_1
        **(arg1 + 0x28) = _mm_add_epi32(zmm7, zmm1_1)
        int32_t* rax_3 = *(arg1 + 0x20)
        int32_t* r9 = *(arg1 + 0x28)
        float zmm4_1[0x4] = *(rax + (sx.q(*rax_3) << 2))
        zmm0 = *(rax + (sx.q(rax_3[2]) << 2))
        int64_t r8_2 = sx.q(*r9)
        int64_t rdx_3 = sx.q(r9[1])
        int64_t rcx_3 = sx.q(r9[2])
        int64_t rax_5 = sx.q(r9[3])
        float temp0_14[0x4] =
            _mm_unpacklo_ps(*(rax + (sx.q(rax_3[1]) << 2)), (*(rax + (sx.q(rax_3[3]) << 2)))[0].q)
        *(r11_2 + r10) = _mm_add_ps(
            _mm_mul_ps(_mm_unpacklo_ps(_mm_unpacklo_ps(zmm4_1, zmm0.q), temp0_14[0].q), temp0_9), 
            _mm_mul_ps(
                _mm_unpacklo_ps(_mm_unpacklo_ps(*(rax + (r8_2 << 2)), (*(rax + (rcx_3 << 2))).q), 
                    _mm_unpacklo_ps(*(rax + (rdx_3 << 2)), (*(rax + (rax_5 << 2)))[0].q)[0].q), 
                temp0_11))
        r10 = &r10[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

void* rdx_4 = *(arg1 + 8)
int32_t temp0_23 = *(rdx_4 + 0x38)
*(rdx_4 + 0x38) -= rbx.d

if (temp0_23 - rbx.d s< 0)
    int64_t rax_6 = *(rdx_4 + 0x10)
    *(rdx_4 + 0x38) = 0
    *(rdx_4 + 0x20) = rax_6
    *(rdx_4 + 0x40) = 0
    return rax_6

int32_t rcx_4 = *(rdx_4 + 0x40)
int32_t r8_5 = *(rdx_4 + 0x30) - rcx_4 - rbx.d

if (r8_5 s<= 0)
    int64_t rax_11 = *(rdx_4 + 0x10) - (sx.q(r8_5) << 2)
    *(rdx_4 + 0x20) = rax_11
    *(rdx_4 + 0x40) = neg.d(r8_5)
    return rax_11

*(rdx_4 + 0x20) += rbx << 2
int32_t rax_9 = rcx_4 + rbx.d
*(rdx_4 + 0x40) = rax_9
return rax_9
