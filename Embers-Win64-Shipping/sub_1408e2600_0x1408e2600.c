// 函数: sub_1408e2600
// 地址: 0x1408e2600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = arg2[1].d

if (rdx u> 1)
    if (arg4 != 0)
        int32_t zmm3 = *(arg1 + 0x28)
        float zmm1[0x4] = arg3
        zmm1[0] = zmm1[0] f/ zmm3
        int32_t rcx = int.d(zmm1[0])
        
        if (rcx != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx)).d f== zmm1[0]))
            zmm1 =
                _mm_cvtepi32_ps(zx.o(rcx - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1[0].q)) & 1)))
        
        zmm1[0] = zmm1[0] f* zmm3
        arg3[0] = arg3[0] - zmm1[0]
    
    int32_t* r9_1 = *arg2
    int32_t r8_1 = 0
    int32_t rdx_1 = rdx - 1
    
    if (not(arg3[0] f< r9_1[sx.q(rdx_1)]))
        return zx.q(rdx_1)
    
    if (not(arg3[0] f<= *r9_1))
        if (rdx_1 != 0)
            while (rdx_1 u>= r8_1)
                uint64_t rax_5 = zx.q((rdx_1 + r8_1) u>> 1)
                uint128_t zmm0 = r9_1[rax_5]
                
                if (arg3[0] f<= zmm0.d)
                    rdx_1 = rax_5.d - 1
                
                int32_t rcx_3 = rax_5.d + 1
                
                if (arg3[0] f<= zmm0.d)
                    rcx_3 = r8_1
                
                r8_1 = rcx_3
                
                if (rdx_1 == 0)
                    break
        
        return zx.q(r8_1)

return 0
