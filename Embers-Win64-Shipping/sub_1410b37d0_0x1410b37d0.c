// 函数: sub_1410b37d0
// 地址: 0x1410b37d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)

if (arg2 != 0)
    if (rbx.d u> 4)
        int64_t rax_2
        int64_t rdx
        rdx:rax_2 = mulu.dp.q(-0x5555555555555555, sub_140a846a0(rbx * 0xc, 0))
        uint32_t rdx_1 = (rdx u>> 3).d
        
        if (rbx.d s> rdx_1)
            rdx_1 = 0x7fffffff
        
        rbx = zx.q(rdx_1)
    else
        rbx = 4

if (rbx.d s<= arg3)
    *(arg1 + 0x3c) = arg3
    return 

int64_t rcx_3 = *(arg1 + 0x30)

if (rbx.d u> 4)
    if (rcx_3 != 0 || rbx.d != 0)
        *(arg1 + 0x30) = sub_140a84c80(rcx_3, sx.q(rbx.d) * 0xc, 0)
else if (rcx_3 != 0)
    *(arg1 + 0x30) = sub_140a84c80(rcx_3, 0, 0)
    *(arg1 + 0x3c) = rbx.d
    return 

*(arg1 + 0x3c) = rbx.d
