// 函数: sub_1422cfa40
// 地址: 0x1422cfa40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)

if (arg2 != 0)
    uint32_t rax = (sub_140a846a0(rbx << 6, 0) u>> 6).d
    
    if (rbx.d s> rax)
        rax = 0x7fffffff
    
    rbx = zx.q(rax)

if (rbx.d == *(arg1 + 0xc))
    return 

uint64_t rdx = zx.q(arg1[1].d)
*(arg1 + 0xc) = rbx.d
sub_140a30eb0(arg1, rdx, rbx.d, 0x40, 0)
