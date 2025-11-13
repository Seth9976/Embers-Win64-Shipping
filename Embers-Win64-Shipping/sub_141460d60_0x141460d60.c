// 函数: sub_141460d60
// 地址: 0x141460d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x2808))
int64_t rsi = sx.q(arg2)
uint32_t rdx

if (rdi.d u> 0x100)
    int64_t rax_1 = 4
    
    if (*(arg1 + 0x280c) != 0 || rdi.d u> 4)
        rax_1 = ((rdi * 3) u>> 3) + 0x10 + rdi
    
    int64_t rax_6
    int64_t rdx_1
    rdx_1:rax_6 = mulu.dp.q(-0x3333333333333333, sub_140a846a0(rax_1 * 0x28, 0))
    rdx = (rdx_1 u>> 5).d
    
    if (rdi.d s> rdx)
        rdx = 0x7fffffff
else
    rdx = 0x100

*(arg1 + 0x280c) = rdx
int64_t rcx_3 = *(arg1 + 0x2800)

if (rdx u> 0x100)
    if (rcx_3 == 0)
        if (rdx != 0)
            int64_t rax_8 = sub_140a84c80(rcx_3, sx.q(rdx) * 0x28, 0)
            *(arg1 + 0x2800) = rax_8
            rcx_3 = rax_8
        
        return memmove(rcx_3, arg1, (rsi * 0x28).d) __tailcall
    
    *(arg1 + 0x2800) = sub_140a84c80(rcx_3, sx.q(rdx) * 0x28, 0)
else if (rcx_3 != 0)
    memmove(arg1, rcx_3, (rsi * 0x28).d)
    rcx_3 = *(arg1 + 0x2800)
    
    if (rcx_3 != 0)
        *(arg1 + 0x2800) = sub_140a84c80(rcx_3, 0, 0)
