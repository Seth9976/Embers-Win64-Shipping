// 函数: sub_141b306a0
// 地址: 0x141b306a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x60))
uint32_t rdx

if (rdi.d u> 2)
    int64_t rax_1 = 4
    
    if (*(arg1 + 0x64) != 0 || rdi.d u> 4)
        rax_1 = ((rdi * 3) u>> 3) + 0x10 + rdi
    
    int64_t rax_6
    int64_t rdx_1
    rdx_1:rax_6 = mulu.dp.q(0x2e8ba2e8ba2e8ba3, sub_140a846a0(rax_1 * 0x2c, 0))
    rdx = (rdx_1 u>> 3).d
    
    if (rdi.d s> rdx)
        rdx = 0x7fffffff
else
    rdx = 2

*(arg1 + 0x64) = rdx
int64_t rcx_2 = *(arg1 + 0x58)

if (rdx u> 2)
    if (rcx_2 == 0)
        if (rdx != 0)
            int64_t rax_8 = sub_140a84c80(rcx_2, sx.q(rdx) * 0x2c, 0)
            *(arg1 + 0x58) = rax_8
            rcx_2 = rax_8
        
        return memmove(rcx_2, arg1, arg2 * 0x2c) __tailcall
    
    *(arg1 + 0x58) = sub_140a84c80(rcx_2, sx.q(rdx) * 0x2c, 0)
else if (rcx_2 != 0)
    memmove(arg1, rcx_2, arg2 * 0x2c)
    rcx_2 = *(arg1 + 0x58)
    
    if (rcx_2 != 0)
        *(arg1 + 0x58) = sub_140a84c80(rcx_2, 0, 0)
