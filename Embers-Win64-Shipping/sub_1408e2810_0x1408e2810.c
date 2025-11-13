// 函数: sub_1408e2810
// 地址: 0x1408e2810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm6[0x4] = arg2
int64_t result

if (*(arg1 + 0x80) u<= 1)
    *arg5 = 0
    *arg6 = 0
    result = arg7
    *result = 0
else
    int32_t rax = sub_1408e26b0(arg1, arg2, arg3)
    *arg5 = rax
    int32_t rcx = *(arg1 + 0x80)
    int32_t result_1
    
    if (arg3 == 0)
        result_1 = rcx - 1
        
        if (rax + 1 s<= result_1)
            result_1 = rax + 1
    else
        result_1 = mods.dp.d(sx.q(rax + 1), rcx)
    
    *arg6 = result_1
    int64_t r10_1 = *(arg1 + 0x78)
    result = sx.q(result_1)
    int32_t zmm4 = *(r10_1 + sx.q(*arg5) * 0x28)
    uint32_t zmm3_1[0x4] = *(r10_1 + result * 0x28)
    zmm3_1[0] = zmm3_1[0] f- zmm4
    
    if (__andps_xmmxud_memxud(zmm3_1, data_142d3f770)[0] f> 9.99999994e-09f)
        if (arg3 != 0)
            int32_t zmm2_1 = *(arg1 + 0x28)
            uint32_t zmm1[0x4] = zmm6
            zmm1[0] = zmm1[0] f/ zmm2_1
            int32_t rcx_3 = int.d(zmm1[0])
            
            if (rcx_3 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_3))[0] f== zmm1[0]))
                result = zx.q(_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1[0].q))) & 1
                zmm1 = _mm_cvtepi32_ps(zx.o(rcx_3 - result.d))
            
            zmm1[0] = zmm1[0] f* zmm2_1
            zmm6[0] = zmm6[0] f- zmm1[0]
        else if (zmm6[0] f>= 0f)
            result = sx.q(*(arg1 + 0x80))
            zmm6 = _mm_min_ss((*(r10_1 + result * 0x28 - 0x28))[0], zmm6[0])
        else
            zmm6 = zx.o(0)
        
        zmm6[0] = zmm6[0] f- zmm4
        zmm6[0] = zmm6[0] f/ zmm3_1[0]
    else
        zmm6 = zx.o(0)
    
    *arg7 = zmm6[0]
    
    if (arg4 != 0)
        int32_t rcx_6 = *arg5
        result = zx.q(*arg6)
        uint32_t zmm0_1[0x4] = 0x3f800000
        *arg5 = result.d
        *arg6 = rcx_6
        zmm0_1[0] = 1f f- *arg7
        *arg7 = zmm0_1[0]

return result
