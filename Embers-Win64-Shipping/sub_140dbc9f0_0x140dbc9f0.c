// 函数: sub_140dbc9f0
// 地址: 0x140dbc9f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0xa8))
int64_t rsi = sx.q(arg2)
uint64_t rdx = 4

if (rdi.d u> 4)
    if (*(arg1 + 0xac) != 0 || rdi.d u> 4)
        rdx = rdi + 0x10 + ((rdi * 3) u>> 3)
    
    int64_t rax_4
    int64_t rdx_2
    rdx_2:rax_4 = mulu.dp.q(-0x3333333333333333, sub_140a846a0(rdx * 0x28, 0))
    rdx = rdx_2 u>> 5
    
    if (rdi.d s> rdx.d)
        rdx = 0x7fffffff

*(arg1 + 0xac) = rdx.d
int64_t rcx_3 = *(arg1 + 0xa0)

if (rdx.d u> 4)
    if (rcx_3 == 0)
        if (rdx.d != 0)
            int64_t rax_6 = sub_140a84c80(rcx_3, sx.q(rdx.d) * 0x28, 0)
            *(arg1 + 0xa0) = rax_6
            rcx_3 = rax_6
        
        return memmove(rcx_3, arg1, (rsi * 0x28).d) __tailcall
    
    *(arg1 + 0xa0) = sub_140a84c80(rcx_3, sx.q(rdx.d) * 0x28, 0)
else if (rcx_3 != 0)
    memmove(arg1, rcx_3, (rsi * 0x28).d)
    rcx_3 = *(arg1 + 0xa0)
    
    if (rcx_3 != 0)
        *(arg1 + 0xa0) = sub_140a84c80(rcx_3, 0, 0)
