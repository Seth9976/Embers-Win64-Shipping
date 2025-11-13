// 函数: sub_142755670
// 地址: 0x142755670
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
uint32_t (* rsi_2)[0x4] = rsi_1 + *(arg1 + 0x70)

if (result s> 0)
    uint64_t rbp_1 = zx.q(result)
    float zmm6[0x4]
    float var_18_1[0x4] = zmm6
    float temp0_1[0x4] = _mm_cmpeq_ps(data_143f87750, zmm7, 1)
    uint64_t i
    
    do
        *rdi_2
        uint32_t (* rbx_1)[0x4] = rsi_2
        float var_48[0x4] = zmm7
        rdi_2 = &rdi_2[1]
        rsi_2 = &rsi_2[1]
        int32_t zmm0_1[0x4]
        zmm0_1, zmm6, zmm7 = sub_141c46b90(&var_48)
        float temp0_4[0x4] = __maxps_xmmps_memps(
            __minps_xmmps_memps(_mm_mul_ps(zmm0_1, zmm6), data_14349b810), data_14349b820)
        float temp0_6[0x4] =
            __addps_xmmps_memps(__mulps_xmmps_memps(temp0_4, data_14349b830), data_14349bf30)
        uint32_t zmm2_1[0x4] = _mm_cvtepi32_ps(_mm_cvttps_epi32(temp0_6))
        zmm2_1 = _mm_sub_ps(zmm2_1, 
            __andps_xmmxud_memxud(_mm_cmpeq_ps(temp0_6, zmm2_1, 1), data_14349bf20))
        float temp0_12[0x4] = __mulps_xmmps_memps(zmm2_1, data_14349b850)
        float temp0_15[0x4] =
            _mm_sub_ps(_mm_sub_ps(temp0_4, __mulps_xmmps_memps(zmm2_1, data_14349b840)), temp0_12)
        float zmm1_1[0x4] = _mm_cvttps_epi32(zmm2_1)
        zmm2_1 = __mulps_xmmps_memps(temp0_15, *"giP9giP9giP9giP9")
        zmm1_1 = __paddd_xmmdq_memdq(zmm1_1, data_14349bf40)
        zmm0_1 = _mm_mul_ps(temp0_15, temp0_15)
        zmm1_1 = _mm_slli_epi32(zmm1_1, 0x17)
        float temp0_33[0x4] = _mm_mul_ps(
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
                                                        __addps_xmmps_memps(zmm2_1, 
                                                            data_14349b870), 
                                                        temp0_15), 
                                                    data_14349b880), 
                                                temp0_15), 
                                            data_14349b890), 
                                        temp0_15), 
                                    data_14349b8a0), 
                                temp0_15), 
                            data_14349b8b0), 
                        zmm0_1), 
                    temp0_15), 
                data_14349bf20), 
            zmm1_1)
        *rbx_1 = _mm_and_ps(temp0_33 ^ data_143f87690, temp0_1) ^ data_143f87690
        i = rbp_1
        rbp_1 -= 1
    while (i != 1)

return result
