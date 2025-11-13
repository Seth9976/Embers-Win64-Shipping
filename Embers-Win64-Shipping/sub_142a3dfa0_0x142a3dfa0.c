// 函数: sub_142a3dfa0
// 地址: 0x142a3dfa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0 && *(arg2 + 0x10) s< 0)
    int64_t rcx = sx.q(*(arg1 + 0xa8))
    
    if (arg3 s>= rcx)
        uint64_t rax_1 = zx.q(*(arg1 + 0xb0))
        int32_t rdi_1 = *(arg1 + 0xac) + rcx.d
        
        if (rax_1.d s< rdi_1)
            rax_1.b = 0
            return rax_1
        
        if (rdi_1 s< rax_1.d)
        label_142a3e0af:
            int64_t rcx_5 = *(arg1 + 0xa0)
            
            if (rcx_5 == 0)
            label_142a3e124:
                rax_1.b = 0
            else
                int64_t r8_1 = rcx_5 + (arg3 << 3)
                uint64_t rdx_2 = rcx_5 + (sx.q(rdi_1) << 3)
                
                if (rdx_2 u< r8_1 || rdx_2 u>= rcx_5 + (sx.q(*(arg1 + 0xb0)) << 3))
                label_142a3e124_1:
                    rax_1.b = 0
                else
                    if (rdx_2 u> r8_1)
                        do
                            void* rcx_7 = *(rdx_2 - 8)
                            rax_1 = rdx_2 - 8
                            
                            if (*(rcx_7 + 0x10) s>= 0)
                                goto label_142a3e124_2
                            
                            *rdx_2 = rcx_7
                            rdx_2 = rax_1
                        while (rax_1 u> r8_1)
                    
                    *(*(arg1 + 0xa0) + (arg3 << 3)) = arg2
                    rax_1.b = 1
                    *(arg1 + 0xac) += 1
        else
            uint32_t rsi_1 = 0x800
            
            if (rax_1.d s> 0)
                rsi_1 = (rax_1 * 2).d
            
            int64_t rcx_1 = sx.q(rsi_1)
            int64_t rax_2 = 8 * rcx_1
            
            if (mulu.dp.q(8, rcx_1) u>> 0x40 != zx.o(0))
                rax_2 = -1
            
            rax_1 = j_sub_140a82f30(rax_2)
            
            if (rax_1 != 0)
                int64_t* rdx_1 = *(arg1 + 0xa0)
                int64_t r8 = 0
                uint64_t r9_1 = rax_1
                int64_t rax_3 = sx.q(rdi_1)
                uint64_t r10_2 = ((rax_3 << 3) + 7) u>> 3
                
                if (rdx_1 u> &rdx_1[rax_3])
                    r10_2 = 0
                
                if (r10_2 != 0)
                    do
                        r8 += 1
                        *r9_1 = *rdx_1
                        r9_1 += 8
                        rdx_1 = &rdx_1[1]
                    while (r8 != r10_2)
                
                j_sub_140a74f90(*(arg1 + 0xa0))
                *(arg1 + 0xa0) = rax_1
                *(arg1 + 0xb0) = rsi_1
                goto label_142a3e0af
            
        label_142a3e124_2:
            rax_1.b = 0
        
        return rax_1

int64_t rax
rax.b = 0
return rax
