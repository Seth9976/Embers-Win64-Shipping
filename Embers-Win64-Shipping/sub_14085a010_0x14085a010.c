// 函数: sub_14085a010
// 地址: 0x14085a010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)

if (arg2 != 0)
    if (rbx.d u> 4)
        uint32_t rax = (sub_140a846a0(rbx << 3, 0) u>> 3).d
        
        if (rbx.d s> rax)
            rax = 0x7fffffff
        
        rbx = zx.q(rax)
    else
        rbx = 4

if (rbx.d s<= arg3)
    *(arg1 + 0x2c) = arg3
    return 

sub_140839270(arg1, 0, rbx.d, 8)
*(arg1 + 0x2c) = rbx.d
