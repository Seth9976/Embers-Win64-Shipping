// 函数: sub_142b32a10
// 地址: 0x142b32a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0xc)

if (arg1[1].d == rax)
    *(arg1 + 0xc) = rax + 0xa
    *arg1 = sub_142a7dd30(*arg1, zx.q(rax + 0xa) << 3)

int64_t rcx_1 = *arg1

if (rcx_1 == 0)
    arg1[1] = 0
    return 0

uint64_t result = zx.q(arg1[1].d)
*(rcx_1 + (result << 3)) = arg2
arg1[1].d += 1
return result
