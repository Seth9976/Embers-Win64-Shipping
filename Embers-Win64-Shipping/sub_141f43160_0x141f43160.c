// 函数: sub_141f43160
// 地址: 0x141f43160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = *arg1

if (result != 0)
    int32_t rax = *(result + 0xc)
    void* const rax_7
    
    if (rax s>= data_143e1d9b4)
        rax_7 = nullptr
    else
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax)
        uint32_t rdx_1 = zx.d(temp0_1)
        int32_t rax_2 = temp1_1 + rdx_1
        rax_7 = *(data_143e1d9a0 + (sx.q(rax_2 s>> 0x10) << 3)) + sx.q(zx.d(rax_2.w) - rdx_1) * 0x18
    
    result = zx.q(*(rax_7 + 8) u>> 0x1d)
    
    if ((result.b & 1) == 0)
        if ((arg2[0x6a].b & 2) == 0)
            result = sub_141f40e50(arg2)
        
        if ((arg2[0x6a].b & 2) != 0 || result.b != 0)
            arg1[0x6a].b |= 2
            int32_t rax_9 = arg2[2].d
            
            if (rax_9 != 0)
                arg1[2].d = rax_9
                int32_t rcx_5 = *(arg2 + 0x74)
                int32_t rax_10
                
                if (rcx_5 != 0xffffffff)
                    rax_10 = arg1[0x45].d + rcx_5
                else
                    rax_10 = rcx_5
                
                void* r14_1 = &arg2[0xf]
                *(arg1 + 0x74) = rax_10
                int32_t rbp_1 = *(r14_1 + 0x1b0)
                void* rsi_1 = &arg1[0xf]
                
                if (rbp_1 != 0)
                    void* r15_1 = rsi_1 + 0x1b0
                    int32_t rcx_6 = *r15_1
                    int32_t rdx_3 = rcx_6 + rbp_1
                    
                    if (rdx_3 s> *(rsi_1 + 0x1b4))
                        sub_141dd6010(rsi_1, rdx_3)
                        rcx_6 = *(rsi_1 + 0x1b0)
                    
                    void* r9_1 = *(r14_1 + 0x1a8)
                    void* r10_1 = *(rsi_1 + 0x1a8)
                    
                    if (r9_1 != 0)
                        r14_1 = r9_1
                    
                    if (r10_1 != 0)
                        rsi_1 = r10_1
                    
                    memcpy(sx.q(rcx_6) * 0x8c + rsi_1, r14_1, rbp_1 * 0x8c)
                    *r15_1 += rbp_1
            
            result = zx.q(*(arg2 + 0x14))
            
            if (result.b u> *(arg1 + 0x14))
                *(arg1 + 0x14) = result.b
        
        void* rsi_2 = &arg2[0x46]
        void* rbx_1 = &arg1[0x46]
        int32_t rdi_1 = *(rsi_2 + 0x118)
        
        if (rdi_1 != 0)
            void* r14_2 = rbx_1 + 0x118
            int32_t rcx_10 = *r14_2
            int32_t rdx_5 = rcx_10 + rdi_1
            
            if (rdx_5 s> *(rbx_1 + 0x11c))
                sub_141f46630(rbx_1, rdx_5)
                rcx_10 = *(rbx_1 + 0x118)
            
            void* r9_2 = *(rsi_2 + 0x110)
            void* r10_2 = *(rbx_1 + 0x110)
            
            if (r9_2 != 0)
                rsi_2 = r9_2
            
            if (r10_2 != 0)
                rbx_1 = r10_2
            
            result = memcpy(sx.q(rcx_10) * 0x88 + rbx_1, rsi_2, rdi_1 * 0x88)
            *r14_2 += rdi_1

return result
