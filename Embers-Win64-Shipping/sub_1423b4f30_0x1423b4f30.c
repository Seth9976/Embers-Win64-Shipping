// 函数: sub_1423b4f30
// 地址: 0x1423b4f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)

if (arg2 != 0)
    if (rbx.d u> 0xe)
        uint32_t rax = (sub_140a846a0(rbx << 2, 0) u>> 2).d
        
        if (rbx.d s> rax)
            rax = 0x7fffffff
        
        rbx = zx.q(rax)
    else
        rbx = 0xe

if (rbx.d == *(arg1 + 0x44))
    return 

int32_t rdx = *(arg1 + 0x40)
*(arg1 + 0x44) = rbx.d
sub_1423b48e0(arg1, rdx, rbx.d, 4)
