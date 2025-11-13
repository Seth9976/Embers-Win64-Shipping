// 函数: sub_1419ab010
// 地址: 0x1419ab010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)

if (arg2 != 0)
    if (rbx.d u> 8)
        int32_t rax = sub_140a846a0(rbx, 0)
        
        if (rbx.d s> rax)
            rax = 0x7fffffff
        
        rbx = zx.q(rax)
    else
        rbx = 8

if (rbx.d s<= arg3)
    *(arg1 + 0x14) = arg3
    return 

sub_1419aaee0(arg1, 0, rbx.d, 1)
*(arg1 + 0x14) = rbx.d
