// 函数: sub_1427552d0
// 地址: 0x1427552d0
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
    float zmm7[0x4]
    float var_28_1[0x4] = zmm7
    int32_t zmm8[0x4] = data_143f87750
    uint64_t i
    
    do
        *rsi_2
        float (* rbx_1)[0x4] = rbp_2
        float var_48[0x4] = *rdi_2
        rsi_2 = &rsi_2[1]
        rdi_2 = &rdi_2[1]
        rbp_2 = &rbp_2[1]
        int32_t zmm0_1[0x4]
        zmm0_1, zmm6, zmm7 = sub_141c46b90(&var_48)
        float temp0_3[0x4] = __maxps_xmmps_memps(
            __minps_xmmps_memps(_mm_mul_ps(zmm0_1, zmm6), data_14349b810), data_14349b820)
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
        zmm0_1 = _mm_cmpeq_ps(zmm8, zmm7, 1)
        *rbx_1 = _mm_and_ps(
            _mm_mul_ps(__addps_xmmps_memps(_mm_add_ps(temp0_29, temp0_14), data_14349bf20), zmm1_1)
                ^ data_143f87690, 
            zmm0_1) ^ data_143f87690
        i = r14_1
        r14_1 -= 1
    while (i != 1)

return result
