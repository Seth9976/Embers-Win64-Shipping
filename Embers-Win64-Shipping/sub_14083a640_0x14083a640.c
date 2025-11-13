// 函数: sub_14083a640
// 地址: 0x14083a640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x68))
int64_t rsi = sx.q(arg2)
uint64_t rdx = 4

if (rdi.d u> 4)
    if (*(arg1 + 0x6c) != 0 || rdi.d u> 4)
        rdx = rdi + 0x10 + ((rdi * 3) u>> 3)
    
    int64_t rax_4
    int64_t rdx_2
    rdx_2:rax_4 = mulu.dp.q(-0x5555555555555555, sub_140a846a0(rdx * 0x18, 0))
    rdx = rdx_2 u>> 4
    
    if (rdi.d s> rdx.d)
        rdx = 0x7fffffff

*(arg1 + 0x6c) = rdx.d
int64_t rcx_3 = *(arg1 + 0x60)

if (rdx.d u> 4)
    if (rcx_3 == 0)
        if (rdx.d != 0)
            int64_t rax_6 = sub_140a84c80(rcx_3, sx.q(rdx.d) * 0x18, 0)
            *(arg1 + 0x60) = rax_6
            rcx_3 = rax_6
        
        return memmove(rcx_3, arg1, (rsi * 0x18).d) __tailcall
    
    *(arg1 + 0x60) = sub_140a84c80(rcx_3, sx.q(rdx.d) * 0x18, 0)
else if (rcx_3 != 0)
    memmove(arg1, rcx_3, (rsi * 0x18).d)
    rcx_3 = *(arg1 + 0x60)
    
    if (rcx_3 != 0)
        *(arg1 + 0x60) = sub_140a84c80(rcx_3, 0, 0)
