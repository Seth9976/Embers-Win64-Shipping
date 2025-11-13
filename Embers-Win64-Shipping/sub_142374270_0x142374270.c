// 函数: sub_142374270
// 地址: 0x142374270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)

if (arg2 != 0)
    int64_t rax_2
    int64_t rdx
    rdx:rax_2 = mulu.dp.q(-0xb7672a07a44c6af, sub_140a846a0(rbx * 0x430, 0))
    uint32_t rdx_1 = (rdx u>> 0xa).d
    
    if (rbx.d s> rdx_1)
        rdx_1 = 0x7fffffff
    
    rbx = zx.q(rdx_1)

if (rbx.d == *(arg1 + 0xc))
    return 

*(arg1 + 0xc) = rbx.d
int64_t rcx_1 = *arg1

if (rcx_1 != 0 || rbx.d != 0)
    *arg1 = sub_140a84c80(rcx_1, sx.q(rbx.d) * 0x430, 0)
