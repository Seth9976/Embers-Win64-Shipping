// 函数: sub_1429a2b80
// 地址: 0x1429a2b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8_1 = *arg1

if (arg2 == 1)
    return (zx.q(r8_1 u>> 8) & 0x808000) | zx.q((r8_1 & 0xffff8000) << 0x10)
        | (zx.q(r8_1) & 0x7f7f7fbf)

if (arg2 == 2)
    r8_1 &= 0xffffff3f

return zx.q(r8_1)
