// 函数: sub_142a365e0
// 地址: 0x142a365e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0)
    int64_t rbp_1 = sx.q(*(arg2 + 0x10))
    
    if (rbp_1.d s>= 0)
        int32_t rcx = *(arg1 + 0xa8)
        int32_t rax_1 = *(arg1 + 0xb0)
        int32_t r14_1 = *(arg1 + 0xac) + rcx
        
        if (rax_1 s< r14_1 || rbp_1.d != rcx)
            rax_1.b = 0
            return rax_1
        
        int64_t rax_3
        
        if (r14_1 s< rax_1)
        label_142a366df:
            int64_t rcx_5 = sx.q(*(arg1 + 0xac))
            
            if (rcx_5.d s<= 0)
            label_142a36769:
                *(*(arg1 + 0xa0) + (rbp_1 << 3)) = arg2
                rax_3.b = 1
                *(arg1 + 0xa8) += 1
            else
                int64_t rax_6 = sx.q(*(arg1 + 0xa8))
                int64_t r9_2 = *(arg1 + 0xa0)
                int64_t r8_2 = r9_2 + (rax_6 << 3)
                rax_3 = *(r9_2 + (rax_6 << 3))
                
                if (rax_3 != 0 && *(rax_3 + 0x10) s< 0)
                    int64_t rdx_2 = r8_2 + (rcx_5 << 3)
                    
                    if (rdx_2 u< r9_2 + (sx.q(*(arg1 + 0xb0)) << 3))
                        void* rcx_7 = *(rdx_2 - 8)
                        rax_3 = rdx_2 - 8
                        
                        while (*(rcx_7 + 0x10) s< 0)
                            *rdx_2 = rcx_7
                            rdx_2 = rax_3
                            
                            if (rax_3 == r8_2)
                                goto label_142a36769
                            
                            rcx_7 = *(rax_3 - 8)
                            rax_3 -= 8
                
                rax_3.b = 0
        else
            int32_t rsi_1 = 0x800
            
            if (rax_1 s> 0)
                rsi_1 = rax_1 * 2
            
            int64_t rcx_1 = sx.q(rsi_1)
            int64_t rax_2 = 8 * rcx_1
            
            if (mulu.dp.q(8, rcx_1) u>> 0x40 != zx.o(0))
                rax_2 = -1
            
            rax_3 = j_sub_140a82f30(rax_2)
            
            if (rax_3 != 0)
                int64_t* rdx_1 = *(arg1 + 0xa0)
                int64_t r8_1 = 0
                int64_t r9_1 = rax_3
                int64_t rax_4 = sx.q(r14_1)
                uint64_t r10_2 = ((rax_4 << 3) + 7) u>> 3
                
                if (rdx_1 u> &rdx_1[rax_4])
                    r10_2 = 0
                
                if (r10_2 != 0)
                    do
                        r8_1 += 1
                        *r9_1 = *rdx_1
                        r9_1 += 8
                        rdx_1 = &rdx_1[1]
                    while (r8_1 != r10_2)
                
                j_sub_140a74f90(*(arg1 + 0xa0))
                *(arg1 + 0xa0) = rax_3
                *(arg1 + 0xb0) = rsi_1
                goto label_142a366df
            
            rax_3.b = 0
        
        return rax_3

int64_t rax
rax.b = 0
return rax
