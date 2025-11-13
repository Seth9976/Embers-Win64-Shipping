// 函数: sub_142c21fd0
// 地址: 0x142c21fd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((((((zx.d(*arg1) << 8) + zx.d(arg1[1])) << 8) + zx.d(arg1[2])) << 8) + zx.d(arg1[3])
        u>= 0x10002)
    uint16_t rdx = zx.w(arg1[0xc])
    uint64_t r8 = zx.q(arg1[0xd])
    int128_t* const rcx_2
    
    if (0 != rdx * 0x100 + r8.w)
        rcx_2 = &arg1[(zx.q(rdx.b) << 8) + r8]
    else
        rcx_2 = &data_14369a5d0
    
    if ((zx.d(*rcx_2) << 8) + zx.d(*(rcx_2 + 1)) == 1 && sub_142c1dab0(rcx_2, arg2, arg3) != 0)
        return 1

return 0
