// 函数: sub_141cdf360
// 地址: 0x141cdf360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 s>= 0 && arg3 s< *(arg1 + 0x110))
    void* r10_1 = arg1 + 0x118
    void* rax_1 = *(r10_1 + 0x10)
    
    if (rax_1 != 0)
        r10_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(arg3)
    
    if (test_bit(*(r10_1 + (sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5) << 2)), arg3 & 0x1f))
        int64_t rcx_2 = sx.q(arg3) * 5
        int64_t rax_8 = *(arg1 + 0x108)
        int32_t* rax_9 = *(rax_8 + (rcx_2 << 3))
        void* r8 = &rax_9[sx.q(*(rax_8 + (rcx_2 << 3) + 8))]
        
        if (rax_9 == r8)
        label_141cdf3f6:
            rax_9 = nullptr
        else
            while (*(*(arg1 + 0x60) + sx.q(*rax_9) * 0x18) != arg4)
                rax_9 = &rax_9[1]
                
                if (rax_9 == r8)
                    goto label_141cdf3f6
        
        int32_t* rcx_5 = &data_143a1c6b8
        
        if (rax_9 != 0)
            rcx_5 = rax_9
        
        *arg2 = *rcx_5
        return arg2

*arg2 = data_143a1c6b8
return arg2
