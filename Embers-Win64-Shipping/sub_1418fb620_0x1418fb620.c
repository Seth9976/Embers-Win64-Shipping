// 函数: sub_1418fb620
// 地址: 0x1418fb620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143f0f161 != 0)
    void* rcx = arg1[3]
    void* r8_1 = rcx
    uint32_t rdi_1 = *(rcx + 0x38)
    
    if (arg2 == 0)
        int32_t i = 1
        
        if (*(rcx + 0x3c) u> 1)
            do
                int64_t rcx_1 = *(rcx + 0x48)
                uint64_t r10_1 = zx.q(rdi_1 * 2)
                int64_t rax_1 = sx.q(r10_1.d)
                int64_t* r8_4 = (rax_1 << 4) + rcx_1
                int64_t* rdx_2 = ((rax_1 + 1) << 4) + rcx_1
                
                if (rdx_2[1] u< *(*rdx_2 + 0x98) && r8_4[1] u< *(*r8_4 + 0x98))
                    void* rax_5 = *(*(arg1[3] + 0x58) + 0x10)
                    int64_t rdx_4 = zx.q(*(rax_5 + 0x24)) + *(*(rax_5 + 0x28) + 0x18)
                    int64_t r8_5 = *(rdx_4 + (r10_1 << 3))
                    int64_t rax_7 = *(rdx_4 + (zx.q((r10_1 + 1).d) << 3))
                    
                    if (rax_7 u> r8_5)
                        return rax_7 - r8_5
                
                r8_1 = arg1[3]
                i += 1
                int32_t rcx_6 = *(r8_1 + 0x40)
                rcx = r8_1
                rdi_1 = modu.dp.d(0:(rcx_6 - 1 + rdi_1), rcx_6)
            while (i u< *(r8_1 + 0x3c))
    
    int32_t rax_11 = *(r8_1 + 0x3c)
    
    if (rax_11 != 0 || arg2 != 0)
        int64_t rsi
        
        if (rax_11 == *(r8_1 + 0x40) || arg2 != 0)
            rsi.b = 1
        else
            rsi.b = 0
        
        int32_t performanceCount_1
        QueryPerformanceCounter(&performanceCount_1)
        uint64_t rbp_1 = zx.q(rdi_1 * 2)
        
        if (rsi.b != 0)
            int64_t rax_13 = arg1[3]
            int64_t rcx_8 = sx.q(rbp_1.d)
            int64_t* rsi_3 = (rcx_8 << 4) + *(rax_13 + 0x48)
            int64_t* rdi_4 = ((rcx_8 + 1) << 4) + *(rax_13 + 0x48)
            int64_t r14
            r14.b = rsi_3[1] == *(*rsi_3 + 0x98)
            int64_t rcx_10 = *(*rdi_4 + 0x98)
            int64_t temp7_1 = rdi_4[1]
            int64_t r12
            r12.b = temp7_1 == rcx_10
            
            if (temp7_1 == rcx_10 || r14.b != 0)
                sub_1418c8680(*arg1)
                
                if (r14.b != 0 && rsi_3[1] == *(*rsi_3 + 0x98))
                    sub_1418c9280(*(arg1[2] + 0x240), *rsi_3, 0x41200000)
            
            if (r12.b != 0 && rdi_4[1] == *(*rdi_4 + 0x98))
                sub_1418c9280(*(arg1[2] + 0x240), *rdi_4, 0x41200000)
        
        int64_t performanceCount
        QueryPerformanceCounter(&performanceCount)
        data_143f138d8:4.d += 1
        data_143f138cc += performanceCount.d - performanceCount_1
        void* rax_21 = *(*(arg1[3] + 0x58) + 0x10)
        int64_t rdx_9 = zx.q(*(rax_21 + 0x24)) + *(*(rax_21 + 0x28) + 0x18)
        int64_t rcx_21 = *(rdx_9 + (rbp_1 << 3))
        int64_t rax_22 = *(rdx_9 + (zx.q((rbp_1 + 1).d) << 3))
        
        if (rax_22 u> rcx_21)
            return rax_22 - rcx_21

return 0
