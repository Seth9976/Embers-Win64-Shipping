// 函数: sub_1418c5c40
// 地址: 0x1418c5c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0xa8)
uint64_t r8_2 = zx.q((*(arg1 + 0x10) + 1) u% 3)
*(arg1 + 0x10) = r8_2.d
uint64_t rsi_1 = r8_2 * 6
bool cond:0 = *(arg1 + (rsi_1 << 3) + 0x28) s<= 0
uint64_t result = *(arg1 + (rsi_1 << 3) + 0x30)
*(arg1 + (rsi_1 << 3) + 0x38) = result

if (not(cond:0))
    do
        int64_t rcx_1 = sx.q(*(arg1 + (rsi_1 << 3) + 0x28))
        int64_t rax_2 = *(arg1 + (rsi_1 << 3) + 0x20)
        int64_t* rbx_1 = *(rax_2 + (rcx_1 << 3) - 8)
        *(rax_2 + (rcx_1 << 3) - 8) = 0
        int64_t rax_3 = sx.q(*(arg1 + (rsi_1 << 3) + 0x28))
        int64_t* arg_10 = rbx_1
        int32_t r14_1 = (rax_3 - 1).d
        int64_t* rcx_2 = *(*(arg1 + (rsi_1 << 3) + 0x20) + (rax_3 << 3) - 8)
        
        if (rcx_2 != 0)
            rcx_2[1].d -= 1
            
            if (rcx_2[1].d == 1 && rcx_2 != 0)
                (**rcx_2)(rcx_2, 1)
            
            rbx_1 = arg_10
        
        int32_t rcx_5 = *(arg1 + (rsi_1 << 3) + 0x28)
        int32_t rax_8 = rcx_5 - r14_1
        
        if (rax_8 != 1)
            int64_t rcx_3 = *(arg1 + (rsi_1 << 3) + 0x20)
            memmove(rcx_3 + (sx.q(r14_1) << 3), rcx_3 + (rax_3 << 3), (rax_8 - 1) << 3)
            rcx_5 = *(arg1 + (rsi_1 << 3) + 0x28)
        
        result = zx.q(rcx_5 - 1)
        *(arg1 + (rsi_1 << 3) + 0x28) = result.d
        
        if (rbx_1 != 0)
            result = zx.q(rbx_1[1].d)
            rbx_1[1].d -= 1
            
            if (result.d == 1)
                result = (**arg_10)(arg_10, 1)
    while (*(arg1 + (rsi_1 << 3) + 0x28) s> 0)

if (arg1 == -0xa8)
    return result

return LeaveCriticalSection(arg1 + 0xa8) __tailcall
