// 函数: sub_140dbd3e0
// 地址: 0x140dbd3e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)

if (arg2 != 0)
    if (rbx.d u> 1)
        uint32_t rax = (sub_140a846a0(rbx << 4, 0) u>> 4).d
        
        if (rbx.d s> rax)
            rax = 0x7fffffff
        
        rbx = zx.q(rax)
    else
        rbx = 1

if (rbx.d == *(arg1 + 0x1c))
    return 

int32_t rdx = *(arg1 + 0x18)
*(arg1 + 0x1c) = rbx.d
sub_140dbc370(arg1, rdx, rbx.d, 0x10)
