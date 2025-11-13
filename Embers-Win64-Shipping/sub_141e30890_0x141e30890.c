// 函数: sub_141e30890
// 地址: 0x141e30890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)

if (arg2 != 0)
    if (rbx.d u> 3)
        uint32_t rax = (sub_140a846a0(rbx << 2, 0) u>> 2).d
        
        if (rbx.d s> rax)
            rax = 0x7fffffff
        
        rbx = zx.q(rax)
    else
        rbx = 3

if (rbx.d == *(arg1 + 0x1c))
    return 

int32_t rdx = *(arg1 + 0x18)
*(arg1 + 0x1c) = rbx.d
sub_141e306d0(arg1, rdx, rbx.d, 4)
