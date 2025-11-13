// 函数: sub_141e47d90
// 地址: 0x141e47d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)

if (arg2 != 0)
    if (rbx.d u> 4)
        uint32_t rcx_5 = (sub_140a846a0(rbx * 0x1c, 0) u/ 0x1c).d
        
        if (rbx.d s> rcx_5)
            rcx_5 = 0x7fffffff
        
        rbx = zx.q(rcx_5)
    else
        rbx = 4

if (rbx.d == *(arg1 + 0x7c))
    return 

int32_t rdx_1 = *(arg1 + 0x78)
*(arg1 + 0x7c) = rbx.d
sub_141e47c60(arg1, rdx_1, rbx.d, 0x1c)
