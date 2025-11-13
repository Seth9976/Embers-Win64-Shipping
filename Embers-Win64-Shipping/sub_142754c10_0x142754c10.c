// 函数: sub_142754c10
// 地址: 0x142754c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg1 + 0x10)
int32_t r9 = *(arg1 + 0x80)
int64_t r10 = *(arg1 + 0x70)
uint32_t rdi = zx.d(*rax)
*(arg1 + 0x10) = &rax[1]
uint32_t rsi = zx.d(rax[1])
*(arg1 + 0x10) = &rax[2]
uint64_t rbp_1 = zx.q(zx.d(rax[2]) * r9)
*(arg1 + 0x10) = &rax[3]
int32_t result = *(arg1 + 0x44)
float (* rbp_2)[0x4] = rbp_1 + r10
int128_t* rdi_2 = zx.q(rdi * r9) + r10
int128_t* rsi_2 = zx.q(rsi * r9) + r10

if (result s> 0)
    uint64_t r14_1 = zx.q(result)
    float zmm6[0x4]
    float var_18_1[0x4] = zmm6
    uint64_t i
    
    do
        *rsi_2
        float (* rbx_1)[0x4] = rbp_2
        int32_t var_28[0x4] = *rdi_2
        rsi_2 = &rsi_2[1]
        rdi_2 = &rdi_2[1]
        rbp_2 = &rbp_2[1]
        int32_t zmm0[0x4]
        zmm0, zmm6 = sub_141c46b90(&var_28)
        float zmm1_1[0x4] = data_14349b830
        float temp0_3[0x4] = __maxps_xmmps_memps(
            __minps_xmmps_memps(_mm_mul_ps(zmm0, zmm6), data_14349b810), data_14349b820)
        float temp0_5[0x4] = __addps_xmmps_memps(_mm_mul_ps(zmm1_1, temp0_3), data_14349bf30)
        float temp0_7[0x4] = _mm_cvtepi32_ps(_mm_cvttps_epi32(temp0_5))
        float temp0_10[0x4] = _mm_sub_ps(temp0_7, 
            __andps_xmmxud_memxud(_mm_cmpeq_ps(temp0_5, temp0_7, 1), data_14349bf20))
        float temp0_11[0x4] = __mulps_xmmps_memps(temp0_10, data_14349b850)
        zmm0 = __mulps_xmmps_memps(temp0_10, data_14349b840)
        int32_t temp0_13[0x4] = _mm_cvttps_epi32(temp0_10)
        float temp0_14[0x4] = _mm_sub_ps(temp0_3, zmm0)
        int32_t zmm3_1[0x4] = _mm_slli_epi32(__paddd_xmmdq_memdq(temp0_13, data_14349bf40), 0x17)
        float temp0_17[0x4] = _mm_sub_ps(temp0_14, temp0_11)
        float temp0_18[0x4] = _mm_mul_ps(*"giP9giP9giP9giP9", temp0_17)
        zmm0 = _mm_mul_ps(temp0_17, temp0_17)
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
                        zmm0), 
                    temp0_17), 
                data_14349bf20), 
            zmm3_1)
        *rbx_1 = temp0_32
        i = r14_1
        r14_1 -= 1
    while (i != 1)

return result
