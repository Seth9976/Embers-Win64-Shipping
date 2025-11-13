// 函数: sub_142b27270
// 地址: 0x142b27270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 u>= *(arg1 + 0x28))
    return zx.q(arg2)

int32_t* rcx = *(arg1 + 0x30)
int32_t i = *rcx

while ((arg2 | 0xffff) u>= i)
    i = rcx[1]
    rcx = &rcx[1]

return zx.q((i << 0x18) + arg2)
