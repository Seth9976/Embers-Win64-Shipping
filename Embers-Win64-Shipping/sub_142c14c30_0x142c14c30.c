// 函数: sub_142c14c30
// 地址: 0x142c14c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rdx_1 = (zx.d(*arg1) << 8) + zx.d(arg1[1])

if (rdx_1 == 1 || rdx_1 == 2)
    uint16_t rdx_8 = zx.w(arg1[2])
    uint64_t r9_1 = zx.q(arg1[3])
    
    if (0 != rdx_8 * 0x100 + r9_1.w)
        return &arg1[(zx.q(rdx_8.b) << 8) + r9_1]
else
    if (rdx_1 != 3)
        return &data_14369a5d0
    
    if (0 != zx.w(arg1[6]) * 0x100 + zx.w(arg1[7]))
        return &arg1[(zx.q(arg1[6]) << 8) + zx.q(arg1[7])]

return &data_14369a5d0
