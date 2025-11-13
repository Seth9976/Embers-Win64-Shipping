// 函数: sub_141df63f0
// 地址: 0x141df63f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = sx.q(*(arg2 + 0x18))

if (r10.d != 0)
    int32_t* rdi_1 = *(arg2 + 0x40)
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q((r10 + 0x1f).d)
    int32_t rsi_1 = 0
    int32_t arg_10 = 0
    int32_t var_38 = 0
    uint64_t r9_1 = zx.q(*rdi_1)
    int32_t r13_1 = rdi_1[1]
    int32_t r15_2 = r10.d - r9_1.d
    uint128_t zmm4 = rdi_1[2]
    int32_t r8 = 0
    uint32_t rcx = (temp1_1 + (temp0_1 & 0x1f)) s>> 5 << 2
    void* r12_2 = sx.q(rcx + (r9_1 << 2).d) + rdi_1
    
    if (r10.d s> 0)
        int16_t* r9_3 = *(arg2 + 0x10) + 8
        int64_t r10_1 = 0
        
        do
            int32_t rax_6 = r8
            int32_t rcx_2 = r8 & 0x1f
            
            if (r8 s< 0)
                rax_6 = r8 + 0x1f
                rcx_2 -= 0x20
            
            int32_t rcx_4 = rdi_1[sx.q(rax_6 s>> 5) + 3] & 1 << rcx_2.b
            
            if (*r9_3 == arg3)
                if (rcx_4 != 0)
                    return *(sx.q(rcx) + rdi_1 + (sx.q(arg_10) << 2) + 0xc)
                
                zmm4.d = zmm4.d f* arg4
                int32_t rdx_3 = r13_1 - 1
                uint128_t zmm1
                zmm1.d = zmm4.d f+ zmm4.d
                zmm1.d = zmm1.d f- 0.5f
                int32_t rcx_6 = int.d(zmm1.d) s>> 1
                
                if (rcx_6 s>= 0)
                    rsi_1 = rdx_3
                    
                    if (rcx_6 s< rdx_3)
                        rsi_1 = rcx_6
                
                zmm4.d = zmm4.d f- _mm_cvtepi32_ps(zx.o(rsi_1)).d
                
                if (rsi_1 + 1 s<= rdx_3)
                    rdx_3 = rsi_1 + 1
                
                float zmm2 = *(r12_2 + (sx.q(rsi_1 * r15_2 + r8) << 2) + 0xc)
                return (*(r12_2 + (sx.q(r8 + rdx_3 * r15_2) << 2) + 0xc) f- zmm2) f* zmm4.d f+ zmm2
            
            int32_t* rax_9 = &arg_10
            
            if (rcx_4 == 0)
                rax_9 = &var_38
            
            r8 += 1
            r10_1 += 1
            r9_3 = &r9_3[6]
            *rax_9 += 1
        while (r10_1 s< r10)

return (zx.o(0)).d
