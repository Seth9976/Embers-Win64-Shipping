// 函数: sub_142c1ecd0
// 地址: 0x142c1ecd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 != 0xffffffff
        && (((((zx.d(*arg1) << 8) + zx.d(arg1[1])) << 8) + zx.d(arg1[2])) << 8) + zx.d(arg1[3])
        u>= 0x10001)
    uint64_t r9_8 = zx.q(arg1[0xc])
    uint64_t r8 = zx.q(arg1[0xb])
    uint64_t rdx = zx.q(arg1[0xa])
    uint64_t r11_1 = zx.q(arg1[0xd])
    int128_t* const rcx_5
    
    if ((rdx.d << 0x18) + (r9_8.d << 8) + (r8.d << 0x10) != neg.d(r11_1.d))
        rcx_5 = &arg1[((((r8 + (rdx << 8)) << 8) + r9_8) << 8) + r11_1]
    else
        rcx_5 = &data_14369a5d0
    
    void* result = sub_142c1dfd0(rcx_5, arg3, arg2)
    
    if (result != 0)
        return result

return sub_142c1eb80(arg1, arg2)
