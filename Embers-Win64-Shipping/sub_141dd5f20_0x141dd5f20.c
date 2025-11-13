// 函数: sub_141dd5f20
// 地址: 0x141dd5f20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)

if (arg2 != 0)
    if (rbx.d u> 0x18)
        uint32_t rax = (sub_140a846a0(rbx << 3, 0) u>> 3).d
        
        if (rbx.d s> rax)
            rax = 0x7fffffff
        
        rbx = zx.q(rax)
    else
        rbx = 0x18

if (rbx.d == *(arg1 + 0xcc))
    return 

int32_t rdx = *(arg1 + 0xc8)
*(arg1 + 0xcc) = rbx.d
sub_141a138f0(arg1, rdx, rbx.d, 8)
