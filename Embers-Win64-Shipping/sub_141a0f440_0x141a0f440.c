// 函数: sub_141a0f440
// 地址: 0x141a0f440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm4 = arg1.d
arg1 = zx.o(0)

if (not(zmm4 <= 0f))
    zmm4 - 1f
    arg1 = _mm_cvtepi32_ps(zx.o(data_1439c86b0))
    
    if (not(zmm4 < 1f))
        arg1.d = arg1.d f/ zmm4
    
    uint128_t zmm1 = _mm_cvtepi32_ps(zx.o(data_1439c86b4))
    
    if (not(zmm4 < 1f))
        zmm1.d = zmm1.d f/ zmm4
    
    int32_t rax_2 = int.d(arg1.d) s>> arg7
    
    if (rax_2 s<= 1)
        rax_2 = 1
    
    *arg2 = rax_2
    int32_t rax_4 = int.d(zmm1.d) s>> arg7
    
    if (rax_4 s<= 1)
        rax_4 = 1
    
    *arg3 = rax_4
    int32_t r8 = 0x1000
    
    if (zmm4 < 1f)
        arg1 = zx.o(arg5)
    else
        arg1 = zx.o(arg4 + 1)
    
    int32_t r9 = 0x1000
    arg1.d = _mm_cvtepi32_ps(arg1).d f* zmm4
    int32_t rax_6 = int.d(arg1.d)
    
    if (rax_6 s<= 0x1000)
        r9 = rax_6
    
    *arg6 = r9
    int32_t rax_9 = (*arg2 << arg7) * 2
    int32_t rax_11
    
    if (zmm4 < 1f)
        rax_11 = rax_9 + arg5
    else
        rax_11 = rax_9 + 1 + arg4
    
    arg1.d = _mm_cvtepi32_ps(zx.o(rax_11)).d f* zmm4
    int32_t rax_12 = int.d(arg1.d)
    
    if (rax_12 s<= 0x1000)
        r8 = rax_12
    
    if (r8 s> r9)
        int32_t rdx_1 = r9
        
        if (r9 s> 0)
            int32_t i
            
            do
                rdx_1 = *arg6
                i = not.d(neg.d(rdx_1) & rdx_1) & rdx_1
                *arg6 = i
            while (i s> 0)
        
        r9 = rdx_1 * 2
        *arg6 = r9
        
        if (r8 * r8 s<= rdx_1 * rdx_1 * 2)
            *arg6 = rdx_1
            r9 = rdx_1
    
    uint128_t zmm3
    zmm3.d = float.s(r9)
    float zmm2 = float.s(r8)
    arg1.d = zmm3.d f/ zmm2
    zmm1.d = float.s(arg4)
    zmm1.d = zmm1.d f* zmm4
    arg1.d = arg1.d f* zmm1.d
    arg1.d = float.s(int.d(arg1.d))
    arg1.d = arg1.d f/ zmm1.d
    arg1.d = arg1.d f* zmm2
    arg1.d = arg1.d f/ zmm3.d

return arg1
