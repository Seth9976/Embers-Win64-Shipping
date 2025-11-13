// 函数: sub_142b73ee0
// 地址: 0x142b73ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 u> 0x10ffff)
    return zx.q(*(arg1 + 0x2c))

if (arg2 s>= arg1[6].d)
    return zx.q(*(arg1 + 0x34))

int64_t rcx = sx.q(arg2 s>> 4)
int64_t rax_4 = *arg1

if (*(rcx + arg1 + 0x40) != 0)
    int32_t rcx_1 = *(rax_4 + (rcx << 2))
    rax_4 = arg1[2]
    rcx = zx.q(rcx_1 + (arg2 & 0xf))

return zx.q(*(rax_4 + (rcx << 2)))
