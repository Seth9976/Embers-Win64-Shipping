// 函数: sub_140cad070
// 地址: 0x140cad070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].d = arg4
*arg1 = arg2 + 0x1e8

if (arg4 s> 1)
    int64_t r14_1 = sx.q(*(arg2 + 0x1f0))
    int32_t rax_1 = (r14_1 + 1).d
    *(arg2 + 0x1f0) = rax_1
    
    if (rax_1 s> *(arg2 + 0x1f4))
        sub_1405a4cf0(arg2 + 0x1e8)
    
    *(*(arg2 + 0x1e8) + (r14_1 << 2)) = arg3 << 0xd | 0x600
    int64_t rsi_3 = sx.q(*(arg2 + 0x1f0))
    int32_t rax_3 = (rsi_3 + 1).d
    *(arg2 + 0x1f0) = rax_3
    
    if (rax_3 s> *(arg2 + 0x1f4))
        sub_1405a4cf0(arg2 + 0x1e8)
    
    *(*(arg2 + 0x1e8) + (rsi_3 << 2)) = arg5
    int64_t rsi_4 = sx.q(*(arg2 + 0x1f0))
    int32_t rax_5 = (rsi_4 + 1).d
    *(arg2 + 0x1f0) = rax_5
    
    if (rax_5 s> *(arg2 + 0x1f4))
        sub_1405a4cf0(arg2 + 0x1e8)
    
    *(*(arg2 + 0x1e8) + (rsi_4 << 2)) = arg4

return arg1
