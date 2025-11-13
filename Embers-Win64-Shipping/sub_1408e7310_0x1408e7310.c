// 函数: sub_1408e7310
// 地址: 0x1408e7310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)

if (arg2 != 0)
    uint32_t rax = (sub_140a846a0(rbx << 5, 0) u>> 5).d
    
    if (rbx.d s> rax)
        rax = 0x7fffffff
    
    rbx = zx.q(rax)

if (rbx.d == *(arg1 + 0xc))
    return 

uint64_t rdx = zx.q(arg1[1].d)
*(arg1 + 0xc) = rbx.d
sub_140a30eb0(arg1, rdx, rbx.d, 0x20, 0)
