// 函数: sub_142761260
// 地址: 0x142761260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax_1 = *(arg1 + 0x10)
int32_t r9 = *(arg1 + 0x80)
uint32_t r11 = zx.d(*rax_1)
*(arg1 + 0x10) = &rax_1[1]
uint64_t rdx_1 = zx.q(zx.d(rax_1[1]) * r9)
*(arg1 + 0x10) = &rax_1[2]
uint64_t result = zx.q(*(arg1 + 0x44))
uint64_t result_1 = rdx_1 + *(arg1 + 0x70)
int128_t* r11_2 = zx.q(r11 * r9) + *(arg1 + 0x70)

if (result.d s> 0)
    uint64_t i_1 = zx.q(result.d)
    uint64_t i
    
    do
        result = result_1
        float temp0_1[0x4] = __minps_xmmps_memps(*r11_2, data_14349b810)
        r11_2 = &r11_2[1]
        result_1 += 0x10
        float zmm1[0x4] = data_14349b830
        float temp0_2[0x4] = __maxps_xmmps_memps(temp0_1, data_14349b820)
        float temp0_4[0x4] = __addps_xmmps_memps(_mm_mul_ps(zmm1, temp0_2), data_14349bf30)
        float temp0_6[0x4] = _mm_cvtepi32_ps(_mm_cvttps_epi32(temp0_4))
        int32_t zmm0[0x4] = data_14349b840
        float temp0_9[0x4] = _mm_sub_ps(temp0_6, 
            __andps_xmmxud_memxud(_mm_cmpeq_ps(temp0_4, temp0_6, 1), data_14349bf20))
        float temp0_10[0x4] = _mm_mul_ps(data_14349b850, temp0_9)
        zmm0 = _mm_mul_ps(zmm0, temp0_9)
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
