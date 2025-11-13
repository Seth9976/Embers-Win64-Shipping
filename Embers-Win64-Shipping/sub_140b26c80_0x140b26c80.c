// 函数: sub_140b26c80
// 地址: 0x140b26c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)

if (arg2 != 0)
    if (rbx.d u> 0x1000)
        uint32_t rax = (sub_140a846a0(rbx * 2, 0) u>> 1).d
        
        if (rbx.d s> rax)
            rax = 0x7fffffff
        
        rbx = zx.q(rax)
    else
        rbx = 0x1000

if (rbx.d == *(arg1 + 0x200c))
    return 

int32_t rdx = *(arg1 + 0x2008)
*(arg1 + 0x200c) = rbx.d
sub_140b26650(arg1, rdx, rbx.d, 2)
