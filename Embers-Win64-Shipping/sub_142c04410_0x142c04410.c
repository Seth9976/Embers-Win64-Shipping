// 函数: sub_142c04410
// 地址: 0x142c04410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg2

if (arg2 s< 0)
    rbx = 0

char result = sub_142bfcfc0(arg1, rbx)

if (result == 0)
    return result

uint64_t rcx = zx.q(*arg1)

if (rbx u> rcx.d)
    memset(*(arg1 + 8) + rcx * 0x28, 0, zx.q(rbx - rcx.d) * 0x28)

*arg1 = rbx
return 1
