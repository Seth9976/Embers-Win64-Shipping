// 函数: sub_142838550
// 地址: 0x142838550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rcx

if ((arg2[2] & 0x10) == 0)
    rcx = zx.d(arg2[1])

if ((arg2[2] & 0x10) == 0 && (rcx.b u> 0x10 || not(test_bit(0x1640d, rcx))))
    sub_142833a04(2, "Ignoring invalid controller, using non-CC source %i.", zx.q(rcx))
else if (arg3 == 1)
    int32_t rsi_1 = 0
    
    if (*(arg1 + 0xd90) s<= 0)
        goto label_1428385d3
    
    while (true)
        int64_t r14_1 = sx.q(rsi_1)
        
        if (sub_14283842c(arg1 + ((r14_1 + ((r14_1 + 0x79) << 1)) << 3), arg2).d != 0)
            int64_t rax = r14_1 * 3
            *(arg1 + (rax << 3) + 0x798) = *(arg2 + 8) f+ *(arg1 + (rax << 3) + 0x798)
            break
        
        rsi_1 += 1
        
        if (rsi_1 s>= *(arg1 + 0xd90))
            goto label_1428385d3
else if (arg3 != 0)
label_1428385d3:
    int64_t rdx_1 = sx.q(*(arg1 + 0xd90))
    
    if (rdx_1.d s< 0x40)
        *(arg1 + 0xd90) = (rdx_1 + 1).d
        sub_142837e28(arg1 + ((rdx_1 + ((rdx_1 + 0x79) << 1)) << 3), arg2)
else
    int32_t rsi_2 = 0
    
    if (*(arg1 + 0xd90) s<= 0)
        goto label_1428385d3
    
    while (true)
        int64_t r14_2 = sx.q(rsi_2)
        
        if (sub_14283842c(arg1 + ((r14_2 + ((r14_2 + 0x79) << 1)) << 3), arg2).d != 0)
            *(arg1 + r14_2 * 0x18 + 0x798) = *(arg2 + 8)
            break
        
        rsi_2 += 1
        
        if (rsi_2 s>= *(arg1 + 0xd90))
            goto label_1428385d3
