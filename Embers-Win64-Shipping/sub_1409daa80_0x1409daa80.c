// 函数: sub_1409daa80
// 地址: 0x1409daa80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)

if (arg2 != 0)
    if (rbx.d u> 6)
        int64_t rax_2
        int64_t rdx
        rdx:rax_2 = mulu.dp.q(-0x5555555555555555, sub_140a846a0(rbx * 0x30, 0))
        uint32_t rdx_1 = (rdx u>> 5).d
        
        if (rbx.d s> rdx_1)
            rdx_1 = 0x7fffffff
        
        rbx = zx.q(rdx_1)
    else
        rbx = 6

if (rbx.d == *(arg1 + 0x134))
    return 

int32_t rdx_2 = *(arg1 + 0x130)
*(arg1 + 0x134) = rbx.d
sub_1409d9e30(arg1, rdx_2, rbx.d, 0x30)
