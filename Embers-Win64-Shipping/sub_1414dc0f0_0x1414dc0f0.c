// 函数: sub_1414dc0f0
// 地址: 0x1414dc0f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)

if (arg2 != 0)
    if (rbx.d u> 0x10)
        uint32_t rax = (sub_140a846a0(rbx << 4, 0) u>> 4).d
        
        if (rbx.d s> rax)
            rax = 0x7fffffff
        
        rbx = zx.q(rax)
    else
        rbx = 0x10

if (rbx.d s<= arg3)
    *(arg1 + 0x114) = arg3
    return 

sub_1408393a0(arg1, 0, rbx.d, 0x10)
*(arg1 + 0x114) = rbx.d
