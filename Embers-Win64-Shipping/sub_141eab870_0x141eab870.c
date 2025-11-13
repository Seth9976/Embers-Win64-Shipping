// 函数: sub_141eab870
// 地址: 0x141eab870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0xc8))
uint32_t rdx

if (rdi.d u> 2)
    int64_t rax_1 = 4
    
    if (*(arg1 + 0xcc) != 0 || rdi.d u> 4)
        rax_1 = ((rdi * 3) u>> 3) + 0x10 + rdi
    
    int64_t rax_6
    int64_t rdx_1
    rdx_1:rax_6 = mulu.dp.q(-0x5555555555555555, sub_140a846a0(rax_1 * 0x60, 0))
    rdx = (rdx_1 u>> 6).d
    
    if (rdi.d s> rdx)
        rdx = 0x7fffffff
else
    rdx = 2

*(arg1 + 0xcc) = rdx
return sub_141eab690(arg1, arg2, rdx, 0x60) __tailcall
