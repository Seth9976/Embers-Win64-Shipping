// 函数: sub_142755490
// 地址: 0x142755490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg1 + 0x10)
int32_t rbx = *(arg1 + 0x80)
int64_t rbp = *(arg1 + 0x70)
uint32_t rsi = zx.d(*rax)
int32_t* r10 = *(arg1 + 0x20)
*(arg1 + 0x10) = &rax[1]
uint32_t rcx = zx.d(rax[1])
int32_t r8_1 = 0
*(arg1 + 0x10) = &rax[2]
int32_t rax_1 = *r10
int128_t* rsi_2 = zx.q(rsi * rbx) + rbp

if (rcx s>= rax_1)
    int64_t rdx_1 = 0
    
    do
        rcx -= rax_1
        rdx_1 += 1
        rax_1 = r10[rdx_1]
        r8_1 += 1
    while (rcx s>= rax_1)

float (* rdi_2)[0x4] = zx.q(zx.d(rax[2]) * rbx) + rbp
float zmm7[0x4] = *(sx.q(rcx) + *(*(arg1 + 0x18) + (sx.q(r8_1) << 3)))
*(arg1 + 0x10) = &rax[3]
int32_t result = *(arg1 + 0x44)
_mm_shuffle_ps(zmm7, zmm7, 0)

if (result s> 0)
    float zmm6[0x4]
    float var_18_1[0x4] = zmm6
    uint64_t rbp_1 = zx.q(result)
    int32_t zmm8[0x4] = data_143f87750
    uint64_t i
    
    do
        float (* rbx_1)[0x4] = rdi_2
        float var_48[0x4] = *rsi_2
        rsi_2 = &rsi_2[1]
        rdi_2 = &rdi_2[1]
        int32_t zmm0_1[0x4]
        float zmm7_1[0x4]
        zmm0_1, zmm6, zmm7_1 = sub_141c46b90(&var_48)
        float temp0_3[0x4] = __maxps_xmmps_memps(
            __minps_xmmps_memps(_mm_mul_ps(zmm0_1, zmm7_1), data_14349b810), data_14349b820)
        float temp0_5[0x4] =
            __addps_xmmps_memps(__mulps_xmmps_memps(temp0_3, data_14349b830), data_14349bf30)
        float temp0_7[0x4] = _mm_cvtepi32_ps(_mm_cvttps_epi32(temp0_5))
        float temp0_10[0x4] = _mm_sub_ps(temp0_7, 
            __andps_xmmxud_memxud(_mm_cmpeq_ps(temp0_5, temp0_7, 1), data_14349bf20))
        zmm0_1 = __mulps_xmmps_memps(temp0_10, data_14349b840)
        float temp0_12[0x4] = __mulps_xmmps_memps(temp0_10, data_14349b850)
        float temp0_14[0x4] = _mm_sub_ps(_mm_sub_ps(temp0_3, zmm0_1), temp0_12)
        float zmm1_1[0x4] = _mm_cvttps_epi32(temp0_10)
        float temp0_16[0x4] = __mulps_xmmps_memps(temp0_14, *"giP9giP9giP9giP9")
        zmm1_1 = __paddd_xmmdq_memdq(zmm1_1, data_14349bf40)
        zmm0_1 = _mm_mul_ps(temp0_14, temp0_14)
        zmm1_1 = _mm_slli_epi32(zmm1_1, 0x17)
        float temp0_29[0x4] = _mm_mul_ps(
            __addps_xmmps_memps(
                _mm_mul_ps(
                    __addps_xmmps_memps(
                        _mm_mul_ps(
                            __addps_xmmps_memps(
                                _mm_mul_ps(
                                    __addps_xmmps_memps(
                                        _mm_mul_ps(__addps_xmmps_memps(temp0_16, data_14349b870), 
                                            temp0_14), 
                                        data_14349b880), 
                                    temp0_14), 
                                data_14349b890), 
                            temp0_14), 
                        data_14349b8a0), 
                    temp0_14), 
                data_14349b8b0), 
            zmm0_1)
        zmm0_1 = _mm_cmpeq_ps(zmm8, zmm6, 1)
        *rbx_1 = _mm_and_ps(
            _mm_mul_ps(__addps_xmmps_memps(_mm_add_ps(temp0_29, temp0_14), data_14349bf20), zmm1_1)
                ^ data_143f87690, 
            zmm0_1) ^ data_143f87690
        i = rbp_1
        rbp_1 -= 1
    while (i != 1)

return result
