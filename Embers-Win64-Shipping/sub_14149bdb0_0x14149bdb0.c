// 函数: sub_14149bdb0
// 地址: 0x14149bdb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)

if (arg2 != 0)
    if (rbx.d u> 2)
        uint32_t rax = (sub_140a846a0(rbx << 2, 0) u>> 2).d
        
        if (rbx.d s> rax)
            rax = 0x7fffffff
        
        rbx = zx.q(rax)
    else
        rbx = 2

if (rbx.d s<= arg3)
    *(arg1 + 0x14) = arg3
    return 

sub_140bced70(arg1, 0, rbx.d, 4)
*(arg1 + 0x14) = rbx.d
