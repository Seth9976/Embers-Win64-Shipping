// 函数: sub_1409dabf0
// 地址: 0x1409dabf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)

if (arg2 != 0)
    if (rbx.d u> 1)
        int64_t rax_2
        int64_t rdx
        rdx:rax_2 = mulu.dp.q(-0x5555555555555555, sub_140a846a0(rbx * 0x18, 0))
        uint32_t rdx_1 = (rdx u>> 4).d
        
        if (rbx.d s> rdx_1)
            rdx_1 = 0x7fffffff
        
        rbx = zx.q(rdx_1)
    else
        rbx = 1

if (rbx.d == *(arg1 + 0x24))
    return 

int32_t rdx_2 = *(arg1 + 0x20)
*(arg1 + 0x24) = rbx.d
sub_1409d9ee0(arg1, rdx_2, rbx.d, 0x18)
