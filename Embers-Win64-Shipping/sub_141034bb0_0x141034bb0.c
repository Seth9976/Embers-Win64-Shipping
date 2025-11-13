// 函数: sub_141034bb0
// 地址: 0x141034bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)

if (arg2 != 0)
    if (rbx.d u> 1)
        uint32_t rcx_5 = (sub_140a846a0(rbx * 0x38, 0) u/ 0x38).d
        
        if (rbx.d s> rcx_5)
            rcx_5 = 0x7fffffff
        
        rbx = zx.q(rcx_5)
    else
        rbx = 1

if (rbx.d == *(arg1 + 0x44))
    return 

int32_t rdx_1 = *(arg1 + 0x40)
*(arg1 + 0x44) = rbx.d
sub_1410342c0(arg1, rdx_1, rbx.d, 0x38)
