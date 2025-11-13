// 函数: sub_142c1f630
// 地址: 0x142c1f630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r8_2 = (zx.d(arg1[4]) << 8) + zx.d(arg1[5])

if (r8_2 - 1 u<= 2)
    uint16_t r10_1 = zx.w(*arg1)
    uint32_t r11_1 = zx.d(arg1[1])
    
    if (r10_1 * 0x100 + r11_1.w u<= zx.w(arg1[2]) * 0x100 + zx.w(arg1[3]))
        return zx.q(((
            zx.q((((zx.d(arg1[2]) - zx.d(r10_1.b)) << 8) + zx.d(arg1[3]) - r11_1) u>> (4 - r8_2.b))
            << 1) + 8).d)

return 6
