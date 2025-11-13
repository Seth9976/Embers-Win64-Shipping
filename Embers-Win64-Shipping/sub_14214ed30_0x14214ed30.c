// 函数: sub_14214ed30
// 地址: 0x14214ed30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint8_t rax_1 = (*(arg1 + 0xa4) u>> 1).b

if ((rax_1 & 1) == 0)
    sub_1421478c0(arg1, 1, arg3, arg4, arg2)
    uint64_t r10_1 = zx.q(arg1[0x33f].d)
    int32_t rax_2 = *(arg1 + 0x19f4)
    arg1[0x343] += 1
    uint64_t r9_1 = zx.q(*(arg1 + 0x19fc))
    int32_t r8_1 = arg1[0x340].d
    int32_t rcx = r10_1.d + rax_2
    int32_t r8_2 = r8_1 + r9_1.d
    
    if (r8_1 == neg.d(r9_1.d) && rcx == 0)
        *(arg1 + 0x1a14) += 1
        return rax_2
    
    char rdx_1 = arg1[0x33e].b
    char rax_3 = rdx_1
    
    if ((rdx_1 & 1) == 0 && data_143a2e9a0 s> 0)
        int32_t zmm3_1 = data_143a2e9a4
        float zmm1 = (zx.o(0)).d
        
        if (not(zmm3_1 f<= 0f))
            float zmm2 = (zx.o(0)).d
            
            if (r8_2 s> 0)
                zmm2 = float.s(r9_1) f/ _mm_cvtepi32_ps(zx.o(r8_2)).d
            
            if (rcx s> 0)
                zmm1 = float.s(r10_1) f/ _mm_cvtepi32_ps(zx.o(rcx)).d
            
            if (zmm2 f>= zmm3_1 || zmm1 f>= zmm3_1)
                rcx.b = 1
            else
                rcx = 0
            
            rax_3 = (rdx_1 & 0xfe) | rcx.b
    
    if ((rax_3 & 1) != 0)
        arg1[0x342].d += 1
    
    arg1[0x33e].b = rax_3 & 0xfe
    rax_1 = 0
    *(arg1 + 0x19f4) = 0
    *(arg1 + 0x19fc) = 0

return rax_1
