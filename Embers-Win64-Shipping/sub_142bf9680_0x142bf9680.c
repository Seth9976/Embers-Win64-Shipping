// 函数: sub_142bf9680
// 地址: 0x142bf9680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r11 = zx.q(arg2)
int32_t r8_2

if ((zx.d(arg1[1]) << 0x10) + (zx.d(arg1[2]) << 8) + (zx.d(*arg1) << 0x18) + zx.d(arg1[3])
        != 0x73666e74)
    r8_2 = 0
else
    r8_2 = zx.d(arg1[5]) + 1 + (zx.d(arg1[4]) << 8)

if (r11.d u< r8_2)
    return zx.q(arg1[7]) + (zx.q(arg1[6]) << 8) + arg3 + r11 * 0xc

return &data_14369a5d0
