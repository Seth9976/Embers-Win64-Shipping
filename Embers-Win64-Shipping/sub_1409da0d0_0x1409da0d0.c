// 函数: sub_1409da0d0
// 地址: 0x1409da0d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)

if (arg2 != 0)
    int64_t rax_2
    int64_t rdx_1
    rdx_1:rax_2 = mulu.dp.q(-0x5555555555555555, sub_140a846a0(rbx * 0x60, 0))
    uint32_t rdx_2 = (rdx_1 u>> 6).d
    
    if (rbx.d s> rdx_2)
        rdx_2 = 0x7fffffff
    
    rbx = zx.q(rdx_2)

if (rbx.d s<= arg3)
    *(arg1 + 0xc) = arg3
    return 

int64_t rcx_2 = *arg1

if (rcx_2 != 0 || rbx.d != 0)
    *arg1 = sub_140a84c80(rcx_2, sx.q(rbx.d) * 0x60, 0)

*(arg1 + 0xc) = rbx.d
