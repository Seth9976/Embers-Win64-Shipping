// 函数: sub_14275d4e0
// 地址: 0x14275d4e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rax = *(arg1 + 0x10)
float zmm6[0x4]
float var_18[0x4] = zmm6
uint32_t rdx = zx.d(*rax)
*(arg1 + 0x10) = &rax[1]
uint64_t rax_1 = zx.q(rdx)
int32_t zmm0[0x4]
int32_t zmm3[0x4]

if (rdx.b == 0)
    uint32_t r11_2 = zx.d(*(rax + 1))
    int32_t r8_2 = *(arg1 + 0x80)
    *(arg1 + 0x10) = &rax[3]
    uint64_t rcx_5 = zx.q(zx.d(*(rax + 3)) * r8_2)
    *(arg1 + 0x10) = &rax[5]
    rax_1 = zx.q(*(arg1 + 0x44))
    uint64_t rcx_6 = rcx_5 + *(arg1 + 0x70)
    float (* r11_4)[0x4] = zx.q(r11_2 * r8_2) + *(arg1 + 0x70)
    
    if (rax_1.d s> 0)
        uint64_t i_3 = zx.q(rax_1.d)
        uint64_t i
        
        do
            rax_1 = rcx_6
            float temp0_33[0x4] = __minps_xmmps_memps(*r11_4, data_14349b810)
            r11_4 = &r11_4[1]
            rcx_6 += 0x10
            float zmm1[0x4] = data_14349b830
            float temp0_34[0x4] = __maxps_xmmps_memps(temp0_33, data_14349b820)
            float temp0_36[0x4] = __addps_xmmps_memps(_mm_mul_ps(zmm1, temp0_34), data_14349bf30)
            float temp0_38[0x4] = _mm_cvtepi32_ps(_mm_cvttps_epi32(temp0_36))
            zmm0 = data_14349b840
            float temp0_41[0x4] = _mm_sub_ps(temp0_38, 
                __andps_xmmxud_memxud(_mm_cmpeq_ps(temp0_36, temp0_38, 1), data_14349bf20))
            float temp0_42[0x4] = _mm_mul_ps(data_14349b850, temp0_41)
            zmm0 = _mm_mul_ps(zmm0, temp0_41)
            int32_t temp0_44[0x4] = _mm_cvttps_epi32(temp0_41)
            float temp0_45[0x4] = _mm_sub_ps(temp0_34, zmm0)
            zmm3 = _mm_slli_epi32(__paddd_xmmdq_memdq(temp0_44, data_14349bf40), 0x17)
            float temp0_48[0x4] = _mm_sub_ps(temp0_45, temp0_42)
            float temp0_49[0x4] = _mm_mul_ps(*"giP9giP9giP9giP9", temp0_48)
            zmm0 = _mm_mul_ps(temp0_48, temp0_48)
            float temp0_63[0x4] = _mm_mul_ps(
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
                                                            __addps_xmmps_memps(temp0_49, 
                                                                data_14349b870), 
                                                            temp0_48), 
                                                        data_14349b880), 
                                                    temp0_48), 
                                                data_14349b890), 
                                            temp0_48), 
                                        data_14349b8a0), 
                                    temp0_48), 
                                data_14349b8b0), 
                            zmm0), 
                        temp0_48), 
                    data_14349bf20), 
                zmm3)
            *rax_1 = temp0_63
            i = i_3
            i_3 -= 1
        while (i != 1)
else if (rax_1.d == 1)
    int32_t* r9_1 = *(arg1 + 0x20)
    uint32_t rcx_1 = zx.d(*(rax + 1))
    *(arg1 + 0x10) = &rax[3]
    int32_t r8_1 = 0
    int32_t rax_3 = *r9_1
    
    if (rcx_1 s>= rax_3)
        int64_t rdx_1 = 0
        
        do
            rcx_1 -= rax_3
            rdx_1 += 1
            rax_3 = r9_1[rdx_1]
            r8_1 += 1
        while (rcx_1 s>= rax_3)
    
    zmm6 = *(sx.q(rcx_1) + *(*(arg1 + 0x18) + (sx.q(r8_1) << 3)))
    uint64_t rdx_4 = zx.q(*(arg1 + 0x80) * zx.d(*(rax + 3)))
    *(arg1 + 0x10) = &rax[5]
    rax_1 = zx.q(*(arg1 + 0x44))
    float temp0_1[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
    float (* rdx_5)[0x4] = rdx_4 + *(arg1 + 0x70)
    
    if (rax_1.d s> 0)
        uint64_t i_2 = zx.q(rax_1.d)
        float (* rax_7)[0x4]
        uint64_t i_1
        
        do
            rax_7 = rdx_5
            rdx_5 = &rdx_5[1]
            float temp0_3[0x4] =
                __maxps_xmmps_memps(__minps_xmmps_memps(temp0_1, data_14349b810), data_14349b820)
            float temp0_5[0x4] =
                __addps_xmmps_memps(__mulps_xmmps_memps(temp0_3, data_14349b830), data_14349bf30)
            float temp0_7[0x4] = _mm_cvtepi32_ps(_mm_cvttps_epi32(temp0_5))
            float temp0_10[0x4] = _mm_sub_ps(temp0_7, 
                __andps_xmmxud_memxud(_mm_cmpeq_ps(temp0_5, temp0_7, 1), data_14349bf20))
            float temp0_11[0x4] = __mulps_xmmps_memps(temp0_10, data_14349b850)
            zmm0 = __mulps_xmmps_memps(temp0_10, data_14349b840)
            int32_t temp0_13[0x4] = _mm_cvttps_epi32(temp0_10)
            float temp0_14[0x4] = _mm_sub_ps(temp0_3, zmm0)
            zmm3 = _mm_slli_epi32(__paddd_xmmdq_memdq(temp0_13, data_14349bf40), 0x17)
            float temp0_17[0x4] = _mm_sub_ps(temp0_14, temp0_11)
            float temp0_18[0x4] = __mulps_xmmps_memps(temp0_17, *"giP9giP9giP9giP9")
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
                zmm3)
            *rax_7 = temp0_32
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
        return rax_7
return rax_1
