// 函数: sub_141dd6010
// 地址: 0x141dd6010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)

if (arg2 != 0)
    if (rbx.d u> 3)
        int64_t rax_2
        int64_t rdx
        rdx:rax_2 = mulu.dp.q(-0x15f15f15f15f15f1, sub_140a846a0(rbx * 0x8c, 0))
        uint32_t rdx_1 = (rdx u>> 7).d
        
        if (rbx.d s> rdx_1)
            rdx_1 = 0x7fffffff
        
        rbx = zx.q(rdx_1)
    else
        rbx = 3

if (rbx.d == *(arg1 + 0x1b4))
    return 

int32_t rsi_1 = *(arg1 + 0x1b0)
*(arg1 + 0x1b4) = rbx.d
int64_t rcx_2 = *(arg1 + 0x1a8)

if (rbx.d u> 3)
    if (rcx_2 == 0)
        if (rbx.d != 0)
            int64_t rax_4 = sub_140a84c80(rcx_2, sx.q(rbx.d) * 0x8c, 0)
            *(arg1 + 0x1a8) = rax_4
            rcx_2 = rax_4
        
        return memmove(rcx_2, arg1, rsi_1 * 0x8c) __tailcall
    
    *(arg1 + 0x1a8) = sub_140a84c80(rcx_2, sx.q(rbx.d) * 0x8c, 0)
else if (rcx_2 != 0)
    memmove(arg1, rcx_2, rsi_1 * 0x8c)
    rcx_2 = *(arg1 + 0x1a8)
    
    if (rcx_2 != 0)
        *(arg1 + 0x1a8) = sub_140a84c80(rcx_2, 0, 0)
