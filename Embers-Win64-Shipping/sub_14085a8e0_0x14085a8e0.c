// 函数: sub_14085a8e0
// 地址: 0x14085a8e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)

if (arg2 != 0)
    if (rbx.d u> 0x20)
        int32_t rax = sub_140a846a0(rbx, 0)
        
        if (rbx.d s> rax)
            rax = 0x7fffffff
        
        rbx = zx.q(rax)
    else
        rbx = 0x20

if (rbx.d == *(arg1 + 0x2c))
    return 

uint32_t rdx = *(arg1 + 0x28)
*(arg1 + 0x2c) = rbx.d
sub_140859d90(arg1, rdx, rbx.d, 1)
