// 函数: sub_14083a750
// 地址: 0x14083a750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x70))
uint32_t rdx

if (rdi.d u> 1)
    int64_t rax_1 = 4
    
    if (*(arg1 + 0x74) != 0 || rdi.d u> 4)
        rax_1 = ((rdi * 3) u>> 3) + 0x10 + rdi
    
    int64_t rax_6
    int64_t rdx_1
    rdx_1:rax_6 = mulu.dp.q(0x4ec4ec4ec4ec4ec5, sub_140a846a0(rax_1 * 0x68, 0))
    rdx = (rdx_1 u>> 5).d
    
    if (rdi.d s> rdx)
        rdx = 0x7fffffff
else
    rdx = 1

*(arg1 + 0x74) = rdx
return sub_140839310(arg1, arg2, rdx, 0x68) __tailcall
