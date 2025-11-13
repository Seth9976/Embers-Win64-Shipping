// 函数: sub_141750670
// 地址: 0x141750670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)

if (arg2 != 0)
    if (rbx.d u> 8)
        uint32_t rcx_5 = (sub_140a846a0(rbx * 0xe0, 0) u/ 0xe0).d
        
        if (rbx.d s> rcx_5)
            rcx_5 = 0x7fffffff
        
        rbx = zx.q(rcx_5)
    else
        rbx = 8

if (rbx.d == *(arg1 + 0x714))
    return 

int32_t rdx_1 = *(arg1 + 0x710)
*(arg1 + 0x714) = rbx.d
sub_14174fd20(arg1, rdx_1, rbx.d, 0xe0)
