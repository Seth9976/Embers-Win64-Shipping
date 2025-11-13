// 函数: sub_142153010
// 地址: 0x142153010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)

if (arg2 != 0)
    if (rbx.d u> 0x80)
        uint32_t rax = (sub_140a846a0(rbx << 2, 0) u>> 2).d
        
        if (rbx.d s> rax)
            rax = 0x7fffffff
        
        rbx = zx.q(rax)
    else
        rbx = 0x80

if (rbx.d == *(arg1 + 0x20c))
    return 

int32_t rdx = *(arg1 + 0x208)
*(arg1 + 0x20c) = rbx.d
sub_142152b70(arg1, rdx, rbx.d, 4)
