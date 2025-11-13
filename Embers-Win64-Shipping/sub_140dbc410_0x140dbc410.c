// 函数: sub_140dbc410
// 地址: 0x140dbc410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)

if (arg2 != 0)
    if (rbx.d u> 4)
        int64_t rax_2
        int64_t rdx
        rdx:rax_2 = mulu.dp.q(-0x1c71c71c71c71c71, sub_140a846a0(rbx * 0x48, 0))
        uint32_t rdx_1 = (rdx u>> 6).d
        
        if (rbx.d s> rdx_1)
            rdx_1 = 0x7fffffff
        
        rbx = zx.q(rdx_1)
    else
        rbx = 4

if (rbx.d s<= arg3)
    *(arg1 + 0x12c) = arg3
    return 

sub_140dbc2c0(arg1, 0, rbx.d, 0x48)
*(arg1 + 0x12c) = rbx.d
