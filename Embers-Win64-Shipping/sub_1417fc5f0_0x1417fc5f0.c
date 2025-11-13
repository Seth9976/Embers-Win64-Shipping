// 函数: sub_1417fc5f0
// 地址: 0x1417fc5f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)

if (arg2 != 0)
    if (rbx.d u> 0x14)
        int32_t rax = sub_140a846a0(rbx, 0)
        
        if (rbx.d s> rax)
            rax = 0x7fffffff
        
        rbx = zx.q(rax)
    else
        rbx = 0x14

if (rbx.d s<= arg3)
    *(arg1 + 0x24) = arg3
    return 

sub_1417fc540(arg1, 0, rbx.d, 1)
*(arg1 + 0x24) = rbx.d
