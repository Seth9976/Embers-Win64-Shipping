// 函数: sub_1409d1780
// 地址: 0x1409d1780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10_1 = *(**(*(arg1 + 0x28) + 0x50) + (sx.q(*(arg1 + 0x38)) << 3))
void* result = data_143f35cc8

if (*arg4 == result)
    uint128_t zmm1 = zx.o(arg4[6])
    int32_t rbx_1 = arg4[7].d
    uint64_t var_58_1 = zmm1.q
    
    if (*(arg2 + 0x520) s<= 0)
        int64_t r8 = 0
        int32_t** rcx_2 = (sx.q(arg3) << 5) + **(arg2 + 0x28)
        int32_t* rdx = *rcx_2
        result = &rdx[rcx_2[1]]
        uint64_t r9_1 = sx.q(rcx_2[1].d) << 2 u>> 2
        
        if (rdx u> result)
            r9_1 = 0
        
        if (r9_1 != 0)
            do
                r8 += 1
                uint64_t* rcx_4 = zx.q(*(r10_1 + 0x128) * *rdx)
                rdx = &rdx[1]
                result = *(r10_1 + 0x120)
                *(rcx_4 + result) = zmm1.q
                *(rcx_4 + result + 8) = rbx_1
            while (r8 != r9_1)
    
    uint128_t zmm8
    zmm8.d = rbx_1.d f- *(arg1 + 0xc8)
    float zmm9[0x4] = *(arg1 + 0xd8)
    float zmm2[0x4] = var_58_1.d
    uint32_t zmm3[0x4] = var_58_1:4.d
    float zmm5 = *(arg1 + 0xc0)
    zmm3[0] = zmm3[0] f- *(arg1 + 0xc4)
    zmm2[0] = zmm2[0] - zmm5
    zmm1.d = zmm8.d f* zmm8.d
    float zmm0[0x4] = zmm3
    zmm0[0] = zmm0[0] f* zmm3[0]
    float zmm4 = zmm2[0] * zmm2[0] + zmm0[0]
    zmm9[0] = zmm9[0] * zmm9[0]
    zmm4 = zmm4 f+ zmm1.d
    
    if (not(zmm4 <= zmm9[0]))
        float temp0_1[0x4] = _mm_sqrt_ss(0, zmm4)
        zmm1.d = temp0_1.d f- zmm9[0]
        zmm1.d = zmm1.d f* 0.5f
        zmm9[0] = zmm9[0] f+ zmm1.d
        zmm1.d = zmm1.d f/ temp0_1[0]
        *(arg1 + 0xd8) = zmm9[0]
        zmm0 = zmm1
        zmm5 = zmm1.d * zmm2[0]
        zmm0[0] = zmm0[0] f* zmm3[0]
        zmm5 = zmm5 f+ *(arg1 + 0xc0)
        zmm1.d = zmm1.d f* zmm8.d
        zmm0[0] = zmm0[0] f+ *(arg1 + 0xc4)
        zmm1.d = zmm1.d f+ *(arg1 + 0xc8)
        *(arg1 + 0xc0) = zmm5
        *(arg1 + 0xc4) = zmm0[0]
        *(arg1 + 0xc8) = zmm1.d
    
    zmm3[0] = zmm3[0] f- *(arg1 + 0xc4)
    zmm2[0] = zmm2[0] f- *(arg1 + 0xc8)
    zmm2[0] = zmm2[0] - zmm5
    zmm3 = __maxss_xmmss_memss(_mm_and_ps(zmm3, 0x7fffffff)[0], *(arg1 + 0xd0))
    zmm0 = _mm_and_ps(zmm2, 0x7fffffff)
    zmm2 = _mm_and_ps(zmm2, 0x7fffffff)
    float temp0_6[0x4] = __maxss_xmmss_memss(zmm0[0], *(arg1 + 0xcc))
    float temp0_7[0x4] = __maxss_xmmss_memss(zmm2[0], *(arg1 + 0xd4))
    *(arg1 + 0xd0) = zmm3[0]
    *(arg1 + 0xcc) = temp0_6[0]
    *(arg1 + 0xd4) = temp0_7[0]

return result
