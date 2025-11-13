// 函数: sub_1408e26b0
// 地址: 0x1408e26b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = *(arg1 + 0x80)

if (r8 u> 1)
    if (arg3 != 0)
        int32_t zmm3 = *(arg1 + 0x28)
        float zmm2[0x4] = arg2
        zmm2[0] = zmm2[0] f/ zmm3
        int32_t rdx_1 = int.d(zmm2[0])
        
        if (rdx_1 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rdx_1)).d f== zmm2[0]))
            zmm2 = _mm_cvtepi32_ps(zx.o(rdx_1
                - (_mm_movemask_ps(_mm_unpacklo_ps(zmm2, zmm2[0].q)) & 1)))
        
        zmm2[0] = zmm2[0] f* zmm3
        arg2[0] = arg2[0] - zmm2[0]
    
    arg2[0] = arg2[0] f+ *(arg1 + 0xc8)
    int32_t* r10_1 = *(arg1 + 0x78)
    int32_t r9_1 = 0
    int32_t r8_1 = r8 - 1
    
    if (not(arg2[0] f< r10_1[sx.q(r8_1) * 0xa]))
        return zx.q(r8_1)
    
    if (not(arg2[0] f<= *r10_1))
        if (r8_1 s> 0)
            while (r8_1 s> r9_1)
                int32_t temp0_5
                int32_t temp1_1
                temp0_5:temp1_1 = sx.q(r9_1 + 1 + r8_1)
                int64_t rdx_4 = sx.q((temp1_1 - temp0_5) s>> 1)
                uint128_t zmm0 = r10_1[rdx_4 * 0xa]
                int32_t rcx_2 = (rdx_4 - 1).d
                zmm0.d f- arg2[0]
                
                if (zmm0.d f<= arg2[0])
                    rcx_2 = r8_1
                
                if (zmm0.d f<= arg2[0])
                    r9_1 = rdx_4.d
                
                r8_1 = rcx_2
                
                if (rcx_2 s<= 0)
                    break
        
        return zx.q(r9_1)

return 0
