// 函数: sub_142af5b00
// 地址: 0x142af5b00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 0

if (arg1[4].b == 0)
    return zx.q(*arg1)

uint32_t rcx = zx.d(*arg1)
return zx.q(rcx u>> 8) | zx.q(rcx << 8)
