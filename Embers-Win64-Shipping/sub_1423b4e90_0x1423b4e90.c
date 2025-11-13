// 函数: sub_1423b4e90
// 地址: 0x1423b4e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x238))
uint32_t rdx

if (rdi.d u> 0xe)
    int64_t rax_1 = 4
    
    if (*(arg1 + 0x23c) != 0 || rdi.d u> 4)
        rax_1 = ((rdi * 3) u>> 3) + 0x10 + rdi
    
    int64_t rax_6
    int64_t rdx_1
    rdx_1:rax_6 = mulu.dp.q(-0x3333333333333333, sub_140a846a0(rax_1 * 0x28, 0))
    rdx = (rdx_1 u>> 5).d
    
    if (rdi.d s> rdx)
        rdx = 0x7fffffff
else
    rdx = 0xe

*(arg1 + 0x23c) = rdx
return sub_1423b4a20(arg1, arg2, rdx, 0x28) __tailcall
