// 函数: sub_141edf1c0
// 地址: 0x141edf1c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*(arg1 + 0x8b))

if ((result.b & 2) == 0)
    result.b |= 2
    *(arg1 + 0x8b) = result.b
    
    if ((result.b & 1) != 0)
        (*(*arg1 + 0x328))(arg2, 0)
    
    if (*(arg1 + 0x8a) s< 0)
        (*(*arg1 + 0x330))(arg1)
    
    void* r14_1 = nullptr
    
    if ((arg1[0x11].b & 1) != 0)
        if ((*(arg1 + 0x8b) & 4) != 0)
            (*(*arg1 + 0x310))(arg1, 0)
            *(arg1 + 0x8b) &= 0xfb
            data_143f3ac30 = 0
        
        sub_141ee0b60(arg1)
        arg1[0x15] = 0
    
    void* r13_1 = arg1[0x14]
    
    if (r13_1 != 0)
        if (*(arg1 + 0x8c) - 1 u> 1)
            sub_141dd4750(r13_1, arg1)
        else
            int64_t rcx_3 = sx.q(*(r13_1 + 0x208))
            
            if (rcx_3.d != 0)
                int32_t r9_1 = 0
                int64_t rbx_1 = 0
                int32_t rsi_1 = 0
                int64_t r12
                r12.b = **(r13_1 + 0x200) != arg1
                int32_t arg_8 = 0
                
                do
                    int64_t r10_1 = sx.q(rsi_1)
                    rbx_1 += 1
                    rsi_1 += 1
                    
                    if (rbx_1 s< rcx_3)
                        int64_t rcx_4 = *(r13_1 + 0x200) + (rbx_1 << 3)
                        
                        do
                            int32_t rax_6
                            rax_6.b = *rcx_4 != arg1
                            
                            if (zx.d(r12.b) != rax_6)
                                break
                            
                            rsi_1 += 1
                            rbx_1 += 1
                            rcx_4 += 8
                        while (rbx_1 s< rcx_3)
                    
                    int32_t r15_2 = rsi_1 - r10_1.d
                    
                    if (r12.b != 0)
                        if (r9_1 != r10_1.d)
                            int64_t rcx_5 = *(r13_1 + 0x200)
                            memmove(rcx_5 + (sx.q(r9_1) << 3), rcx_5 + (r10_1 << 3), r15_2 << 3)
                            r9_1 = arg_8
                        
                        r9_1 += r15_2
                        arg_8 = r9_1
                    
                    r12.b ^= 1
                while (rbx_1 s< rcx_3)
                
                *(r13_1 + 0x208) = r9_1
        
        sub_141dd4a70(r13_1, arg1)
        
        if (*(r13_1 + 0x130) == arg1)
            sub_141dd9010(r13_1, nullptr)
    
    (*(*arg1 + 0x3b0))(arg1, 0)
    result = zx.q(*(arg1 + 0xc))
    
    if (result.d s< data_143e1d9b4)
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(result.d)
        uint32_t rdx_6 = zx.d(temp0_1)
        int32_t rax_10 = temp1_1 + rdx_6
        result = data_143e1d9a0
        r14_1 = *(result + (sx.q(rax_10 s>> 0x10) << 3)) + sx.q(zx.d(rax_10.w) - rdx_6) * 0x18
    
    *(r14_1 + 8) |= 0x20000000

return result
