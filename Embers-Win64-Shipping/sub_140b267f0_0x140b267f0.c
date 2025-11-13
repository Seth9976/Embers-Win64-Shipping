// 函数: sub_140b267f0
// 地址: 0x140b267f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x288))
uint32_t rdx

if (rdi.d u> 0x10)
    int64_t rax_1 = 4
    
    if (*(arg1 + 0x28c) != 0 || rdi.d u> 4)
        rax_1 = ((rdi * 3) u>> 3) + 0x10 + rdi
    
    int64_t rax_6
    int64_t rdx_1
    rdx_1:rax_6 = mulu.dp.q(-0x3333333333333333, sub_140a846a0(rax_1 * 0x28, 0))
    rdx = (rdx_1 u>> 5).d
    
    if (rdi.d s> rdx)
        rdx = 0x7fffffff
else
    rdx = 0x10

*(arg1 + 0x28c) = rdx
return sub_140b265a0(arg1, arg2, rdx, 0x28) __tailcall
