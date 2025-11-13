// 函数: sub_141238820
// 地址: 0x141238820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0xa8))
uint32_t rdx

if (rdi.d u> 0xd)
    int64_t rax_1 = 4
    
    if (*(arg1 + 0xac) != 0 || rdi.d u> 4)
        rax_1 = ((rdi * 3) u>> 3) + 0x10 + rdi
    
    int64_t rax_6
    int64_t rdx_1
    rdx_1:rax_6 = mulu.dp.q(-0x5555555555555555, sub_140a846a0(rax_1 * 0xc, 0))
    rdx = (rdx_1 u>> 3).d
    
    if (rdi.d s> rdx)
        rdx = 0x7fffffff
else
    rdx = 0xd

*(arg1 + 0xac) = rdx
return sub_141238450(arg1, arg2, rdx, 0xc) __tailcall
