// 函数: sub_14113b760
// 地址: 0x14113b760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x90))
uint32_t rdx

if (rdi.d u> 3)
    int64_t rax_1 = 4
    
    if (*(arg1 + 0x94) != 0 || rdi.d u> 4)
        rax_1 = ((rdi * 3) u>> 3) + 0x10 + rdi
    
    int64_t rax_6
    int64_t rdx_1
    rdx_1:rax_6 = mulu.dp.q(0x2e8ba2e8ba2e8ba3, sub_140a846a0(rax_1 * 0x2c, 0))
    rdx = (rdx_1 u>> 3).d
    
    if (rdi.d s> rdx)
        rdx = 0x7fffffff
else
    rdx = 3

*(arg1 + 0x94) = rdx
return sub_14113b670(arg1, arg2, rdx, 0x2c) __tailcall
