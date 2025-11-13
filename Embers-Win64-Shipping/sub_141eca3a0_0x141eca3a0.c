// 函数: sub_141eca3a0
// 地址: 0x141eca3a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)

if (arg2 != 0)
    if (rbx.d u> 0x40)
        uint32_t rax = (sub_140a846a0(rbx << 5, 0) u>> 5).d
        
        if (rbx.d s> rax)
            rax = 0x7fffffff
        
        rbx = zx.q(rax)
    else
        rbx = 0x40

if (rbx.d == *(arg1 + 0x80c))
    return 

int32_t rdx = *(arg1 + 0x808)
*(arg1 + 0x80c) = rbx.d
sub_141ec9fc0(arg1, rdx, rbx.d, 0x20)
