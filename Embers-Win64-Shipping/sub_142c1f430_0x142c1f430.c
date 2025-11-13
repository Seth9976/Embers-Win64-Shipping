// 函数: sub_142c1f430
// 地址: 0x142c1f430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0xffff)
    int128_t* const rax_3
    
    if (arg2 u< (zx.d(arg1[2]) << 8) + zx.d(arg1[3]))
        rax_3 = &arg1[(zx.q(arg2) * 3 + 2) << 1]
    else
        rax_3 = &data_14369a5d0
    
    uint16_t rdx_6 = zx.w(*(rax_3 + 4))
    uint64_t r9_1 = zx.q(*(rax_3 + 5))
    
    if (0 != rdx_6 * 0x100 + r9_1.w)
        return &arg1[(zx.q(rdx_6.b) << 8) + r9_1]
else
    uint16_t rcx = zx.w(*arg1)
    uint64_t r9 = zx.q(arg1[1])
    
    if (0 != rcx * 0x100 + r9.w)
        return &arg1[(zx.q(rcx.b) << 8) + r9]

return &data_14369a5a0
