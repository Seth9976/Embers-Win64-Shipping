// 函数: sub_142755860
// 地址: 0x142755860
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
float zmm6[0x4] = *(sx.q(r8) + *(rdi + (sx.q(rdx) << 3)))
uint32_t rcx_2 = zx.d(rax[1])
*(arg1 + 0x10) = &rax[2]
int32_t rax_4 = *r10
zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0)

if (rcx_2 s>= rax_4)
    int64_t rdx_1 = 0
    
    do
        rcx_2 -= rax_4
        rdx_1 += 1
        rax_4 = r10[rdx_1]
        r9 += 1
    while (rcx_2 s>= rax_4)

float zmm7[0x4] = *(sx.q(rcx_2) + *(rdi + (sx.q(r9) << 3)))
uint64_t rdi_2 = zx.q(*(arg1 + 0x80) * zx.d(rax[2]))
*(arg1 + 0x10) = &rax[3]
int32_t result = *(arg1 + 0x44)
_mm_shuffle_ps(zmm7, zmm7, 0)
uint32_t (* rdi_3)[0x4] = rdi_2 + *(arg1 + 0x70)

if (result s> 0)
    uint64_t rsi_1 = zx.q(result)
    float temp0_2[0x4] = _mm_cmpeq_ps(data_143f87750, zmm6, 1)
    uint64_t i
    
    do
        uint32_t (* rbx_2)[0x4] = rdi_3
        float var_48[0x4] = zmm6
        rdi_3 = &rdi_3[1]
        int32_t zmm0_1[0x4]
        float zmm7_1[0x4]
        zmm0_1, zmm6, zmm7_1 = sub_141c46b90(&var_48)
        float temp0_5[0x4] = __maxps_xmmps_memps(
            __minps_xmmps_memps(_mm_mul_ps(zmm0_1, zmm7_1), data_14349b810), data_14349b820)
        float temp0_7[0x4] =
            __addps_xmmps_memps(__mulps_xmmps_memps(temp0_5, data_14349b830), data_14349bf30)
        uint32_t zmm2_1[0x4] = _mm_cvtepi32_ps(_mm_cvttps_epi32(temp0_7))
        zmm2_1 = _mm_sub_ps(zmm2_1, 
            __andps_xmmxud_memxud(_mm_cmpeq_ps(temp0_7, zmm2_1, 1), data_14349bf20))
        float temp0_13[0x4] = __mulps_xmmps_memps(zmm2_1, data_14349b850)
        float temp0_16[0x4] =
            _mm_sub_ps(_mm_sub_ps(temp0_5, __mulps_xmmps_memps(zmm2_1, data_14349b840)), temp0_13)
        float zmm1_1[0x4] = _mm_cvttps_epi32(zmm2_1)
        zmm2_1 = __mulps_xmmps_memps(temp0_16, *"giP9giP9giP9giP9")
        zmm1_1 = __paddd_xmmdq_memdq(zmm1_1, data_14349bf40)
        zmm0_1 = _mm_mul_ps(temp0_16, temp0_16)
        zmm1_1 = _mm_slli_epi32(zmm1_1, 0x17)
        float temp0_34[0x4] = _mm_mul_ps(
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
                                                        temp0_16), 
                                                    data_14349b880), 
                                                temp0_16), 
                                            data_14349b890), 
                                        temp0_16), 
                                    data_14349b8a0), 
                                temp0_16), 
                            data_14349b8b0), 
                        zmm0_1), 
                    temp0_16), 
                data_14349bf20), 
            zmm1_1)
        *rbx_2 = _mm_and_ps(temp0_34 ^ data_143f87690, temp0_2) ^ data_143f87690
        i = rsi_1
        rsi_1 -= 1
    while (i != 1)

return result
