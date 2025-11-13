// 函数: sub_142761370
// 地址: 0x142761370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg1 + 0x10)
int32_t rdx = 0
int32_t* r10 = *(arg1 + 0x20)
uint32_t r8 = zx.d(*rax)
*(arg1 + 0x10) = &rax[1]
int32_t rax_1 = *r10

if (r8 s>= rax_1)
    int64_t rcx = 0
    
    do
        r8 -= rax_1
        rcx += 1
        rax_1 = r10[rcx]
        rdx += 1
    while (r8 s>= rax_1)

float zmm6[0x4] = *(sx.q(r8) + *(*(arg1 + 0x18) + (sx.q(rdx) << 3)))
uint64_t rdx_3 = zx.q(*(arg1 + 0x80) * zx.d(rax[1]))
*(arg1 + 0x10) = &rax[2]
uint64_t result = zx.q(*(arg1 + 0x44))
float temp0[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
uint64_t result_1 = rdx_3 + *(arg1 + 0x70)

if (result.d s> 0)
    uint64_t i_1 = zx.q(result.d)
    uint64_t i
    
    do
        float zmm1[0x4] = data_14349b830
        result = result_1
        result_1 += 0x10
        float temp0_2[0x4] =
            __maxps_xmmps_memps(__minps_xmmps_memps(temp0, data_14349b810), data_14349b820)
        float temp0_4[0x4] = __addps_xmmps_memps(_mm_mul_ps(zmm1, temp0_2), data_14349bf30)
        float temp0_6[0x4] = _mm_cvtepi32_ps(_mm_cvttps_epi32(temp0_4))
        float temp0_9[0x4] = _mm_sub_ps(temp0_6, 
            __andps_xmmxud_memxud(_mm_cmpeq_ps(temp0_4, temp0_6, 1), data_14349bf20))
        float temp0_10[0x4] = __mulps_xmmps_memps(temp0_9, data_14349b850)
        int32_t zmm0[0x4] = __mulps_xmmps_memps(temp0_9, data_14349b840)
        float zmm3[0x4] = _mm_cvttps_epi32(temp0_9)
        float temp0_13[0x4] = _mm_sub_ps(temp0_2, zmm0)
        zmm3 = _mm_slli_epi32(__paddd_xmmdq_memdq(zmm3, data_14349bf40), 0x17)
        float temp0_16[0x4] = _mm_sub_ps(temp0_13, temp0_10)
        float temp0_17[0x4] = _mm_mul_ps(*"giP9giP9giP9giP9", temp0_16)
        zmm0 = _mm_mul_ps(temp0_16, temp0_16)
        float temp0_31[0x4] = _mm_mul_ps(
            __addps_xmmps_memps(
                _mm_add_ps(
                    _mm_mul_ps(
                        __addps_xmmps_memps(
                            _mm_mul_ps(
                                __addps_xmmps_memps(
                                    _mm_mul_ps(
                                        __addps_xmmps_memps(
                                            _mm_mul_ps(
                                                __addps_xmmps_memps(
                                                    _mm_mul_ps(
                                                        __addps_xmmps_memps(temp0_17, 
                                                            data_14349b870), 
                                                        temp0_16), 
                                                    data_14349b880), 
                                                temp0_16), 
                                            data_14349b890), 
                                        temp0_16), 
                                    data_14349b8a0), 
                                temp0_16), 
                            data_14349b8b0), 
                        zmm0), 
                    temp0_16), 
                data_14349bf20), 
            zmm3)
        *result = temp0_31
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
