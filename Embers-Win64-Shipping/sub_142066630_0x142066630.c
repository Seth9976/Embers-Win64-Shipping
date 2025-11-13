// 函数: sub_142066630
// 地址: 0x142066630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0xa8))
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
return sub_142066400(arg1, arg2, rdx.d, 0x28) __tailcall
