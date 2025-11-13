// 函数: sub_14149c910
// 地址: 0x14149c910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)

if (arg2 != 0)
    if (rbx.d u> 2)
        int64_t rax_2
        int64_t rdx
        rdx:rax_2 = mulu.dp.q(-0x5555555555555555, sub_140a846a0(rbx * 0x18, 0))
        uint32_t rdx_1 = (rdx u>> 4).d
        
        if (rbx.d s> rdx_1)
            rdx_1 = 0x7fffffff
        
        rbx = zx.q(rdx_1)
    else
        rbx = 2

if (rbx.d == *(arg1 + 0x3c))
    return 

int32_t rdx_2 = *(arg1 + 0x38)
*(arg1 + 0x3c) = rbx.d
sub_14149bd10(arg1, rdx_2, rbx.d, 0x18)
