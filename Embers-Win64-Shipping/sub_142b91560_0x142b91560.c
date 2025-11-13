// 函数: sub_142b91560
// 地址: 0x142b91560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = arg2 - arg1

if (r8 s<= 0xff4c0000)
    r8 = r8 + 0x1680000 + (0xff4c0000 - r8) u/ 0x1680000 * 0x1680000

if (r8 s<= 0xb40000)
    return zx.q(r8)

return zx.q(0xfe980000 - (r8 - 0xb40001) u/ 0x1680000 * 0x1680000 + r8)
