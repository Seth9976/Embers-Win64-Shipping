// 函数: sub_142754f40
// 地址: 0x142754f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg1 + 0x10)
int32_t rdx = 0
int32_t* r9 = *(arg1 + 0x20)
uint32_t r8 = zx.d(*rax)
*(arg1 + 0x10) = &rax[1]
int32_t rax_1 = *r9

if (r8 s>= rax_1)
    int64_t rcx = 0
    
    do
        r8 -= rax_1
        rcx += 1
        rax_1 = r9[rcx]
        rdx += 1
    while (r8 s>= rax_1)

int32_t r8_1 = *(arg1 + 0x80)
float zmm7[0x4] = *(sx.q(r8) + *(*(arg1 + 0x18) + (sx.q(rdx) << 3)))
int128_t* rdi_2 = zx.q(zx.d(rax[1]) * r8_1) + *(arg1 + 0x70)
*(arg1 + 0x10) = &rax[2]
uint64_t rsi_1 = zx.q(zx.d(rax[2]) * r8_1)
*(arg1 + 0x10) = &rax[3]
int32_t result = *(arg1 + 0x44)
zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0)
float (* rsi_2)[0x4] = rsi_1 + *(arg1 + 0x70)

if (result s> 0)
    uint64_t rbp_1 = zx.q(result)
    float zmm6[0x4]
    float var_18_1[0x4] = zmm6
    uint64_t i
    
    do
        *rdi_2
        float (* rbx_1)[0x4] = rsi_2
        float var_38[0x4] = zmm7
        rdi_2 = &rdi_2[1]
        rsi_2 = &rsi_2[1]
        int32_t zmm0_1[0x4]
        zmm0_1, zmm6, zmm7 = sub_141c46b90(&var_38)
        float temp0_3[0x4] = __maxps_xmmps_memps(
            __minps_xmmps_memps(_mm_mul_ps(zmm0_1, zmm6), data_14349b810), data_14349b820)
        float temp0_5[0x4] =
            __addps_xmmps_memps(__mulps_xmmps_memps(temp0_3, data_14349b830), data_14349bf30)
        float temp0_7[0x4] = _mm_cvtepi32_ps(_mm_cvttps_epi32(temp0_5))
        float temp0_10[0x4] = _mm_sub_ps(temp0_7, 
            __andps_xmmxud_memxud(_mm_cmpeq_ps(temp0_5, temp0_7, 1), data_14349bf20))
        float temp0_11[0x4] = __mulps_xmmps_memps(temp0_10, data_14349b850)
        zmm0_1 = __mulps_xmmps_memps(temp0_10, data_14349b840)
        int32_t temp0_13[0x4] = _mm_cvttps_epi32(temp0_10)
        float temp0_14[0x4] = _mm_sub_ps(temp0_3, zmm0_1)
        int32_t zmm3_1[0x4] = _mm_slli_epi32(__paddd_xmmdq_memdq(temp0_13, data_14349bf40), 0x17)
        float temp0_17[0x4] = _mm_sub_ps(temp0_14, temp0_11)
        float temp0_18[0x4] = __mulps_xmmps_memps(temp0_17, *"giP9giP9giP9giP9")
        zmm0_1 = _mm_mul_ps(temp0_17, temp0_17)
        float temp0_32[0x4] = _mm_mul_ps(
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
                                                        __addps_xmmps_memps(temp0_18, 
                                                            data_14349b870), 
                                                        temp0_17), 
                                                    data_14349b880), 
                                                temp0_17), 
                                            data_14349b890), 
                                        temp0_17), 
                                    data_14349b8a0), 
                                temp0_17), 
                            data_14349b8b0), 
                        zmm0_1), 
                    temp0_17), 
                data_14349bf20), 
            zmm3_1)
        *rbx_1 = temp0_32
        i = rbp_1
        rbp_1 -= 1
    while (i != 1)

return result
