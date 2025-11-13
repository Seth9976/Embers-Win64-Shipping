// 函数: sub_142c191d0
// 地址: 0x142c191d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 u< (zx.d(*arg1) << 8) + zx.d(arg1[1]))
    uint64_t rax_1 = zx.q(arg2)
    uint16_t rdx = zx.w(arg1[(rax_1 << 1) + 2])
    uint64_t r8_2 = zx.q(arg1[(rax_1 << 1) + 3])
    
    if (0 != rdx * 0x100 + r8_2.w)
        return &arg1[(zx.q(rdx.b) << 8) + r8_2]

return &data_14369a5d0
