// 函数: sub_141f229d0
// 地址: 0x141f229d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x1b0))
uint32_t rdx

if (rdi.d u> 3)
    int64_t rax_1 = 4
    
    if (*(arg1 + 0x1b4) != 0 || rdi.d u> 4)
        rax_1 = ((rdi * 3) u>> 3) + 0x10 + rdi
    
    int64_t rax_6
    int64_t rdx_1
    rdx_1:rax_6 = mulu.dp.q(-0x15f15f15f15f15f1, sub_140a846a0(rax_1 * 0x8c, 0))
    rdx = (rdx_1 u>> 7).d
    
    if (rdi.d s> rdx)
        rdx = 0x7fffffff
else
    rdx = 3

*(arg1 + 0x1b4) = rdx
return sub_141f22760(arg1, arg2, rdx, 0x8c) __tailcall
