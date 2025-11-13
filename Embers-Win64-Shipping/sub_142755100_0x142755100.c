// 函数: sub_142755100
// 地址: 0x142755100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg1 + 0x10)
int32_t r9 = 0
int32_t* r10 = *(arg1 + 0x20)
int32_t rdx = 0
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

int64_t rdi = *(arg1 + 0x18)
float zmm7[0x4] = *(sx.q(r8) + *(rdi + (sx.q(rdx) << 3)))
uint32_t rcx_2 = zx.d(rax[1])
*(arg1 + 0x10) = &rax[2]
int32_t rax_4 = *r10
zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0)

if (rcx_2 s>= rax_4)
    int64_t rdx_1 = 0
    
    do
        rcx_2 -= rax_4
        rdx_1 += 1
        rax_4 = r10[rdx_1]
        r9 += 1
    while (rcx_2 s>= rax_4)

float zmm6[0x4] = *(sx.q(rcx_2) + *(rdi + (sx.q(r9) << 3)))
uint64_t rdi_2 = zx.q(*(arg1 + 0x80) * zx.d(rax[2]))
*(arg1 + 0x10) = &rax[3]
int32_t result = *(arg1 + 0x44)
_mm_shuffle_ps(zmm6, zmm6, 0)
float (* rdi_3)[0x4] = rdi_2 + *(arg1 + 0x70)

if (result s> 0)
    uint64_t rsi_1 = zx.q(result)
    uint64_t i
    
    do
        float (* rbx_2)[0x4] = rdi_3
        float var_38[0x4] = zmm7
        rdi_3 = &rdi_3[1]
        int32_t zmm0_1[0x4]
        float zmm6_1[0x4]
        zmm0_1, zmm6_1, zmm7 = sub_141c46b90(&var_38)
        float temp0_4[0x4] = __maxps_xmmps_memps(
            __minps_xmmps_memps(_mm_mul_ps(zmm0_1, zmm6_1), data_14349b810), data_14349b820)
        float temp0_6[0x4] =
            __addps_xmmps_memps(__mulps_xmmps_memps(temp0_4, data_14349b830), data_14349bf30)
        float temp0_8[0x4] = _mm_cvtepi32_ps(_mm_cvttps_epi32(temp0_6))
        float temp0_11[0x4] = _mm_sub_ps(temp0_8, 
            __andps_xmmxud_memxud(_mm_cmpeq_ps(temp0_6, temp0_8, 1), data_14349bf20))
        float temp0_12[0x4] = __mulps_xmmps_memps(temp0_11, data_14349b850)
        zmm0_1 = __mulps_xmmps_memps(temp0_11, data_14349b840)
        int32_t temp0_14[0x4] = _mm_cvttps_epi32(temp0_11)
        float temp0_15[0x4] = _mm_sub_ps(temp0_4, zmm0_1)
        int32_t zmm3_1[0x4] = _mm_slli_epi32(__paddd_xmmdq_memdq(temp0_14, data_14349bf40), 0x17)
        float temp0_18[0x4] = _mm_sub_ps(temp0_15, temp0_12)
        float temp0_19[0x4] = __mulps_xmmps_memps(temp0_18, *"giP9giP9giP9giP9")
        zmm0_1 = _mm_mul_ps(temp0_18, temp0_18)
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
                                                        __addps_xmmps_memps(temp0_19, 
                                                            data_14349b870), 
                                                        temp0_18), 
                                                    data_14349b880), 
                                                temp0_18), 
                                            data_14349b890), 
                                        temp0_18), 
                                    data_14349b8a0), 
                                temp0_18), 
                            data_14349b8b0), 
                        zmm0_1), 
                    temp0_18), 
                data_14349bf20), 
            zmm3_1)
        *rbx_2 = temp0_33
        i = rsi_1
        rsi_1 -= 1
    while (i != 1)

return result
