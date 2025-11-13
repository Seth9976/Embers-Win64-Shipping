// 函数: sub_14283c02c
// 地址: 0x14283c02c
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0)
    arg1 ^= data_142d3f780

if (not(-500f f<= arg1.d))
    return zx.o(0)

if (not(arg1.d f<= 500f))
    return 0x3f800000

arg1.d = arg1.d f+ 500f
return *(&data_14401ce60 + (sx.q(int.d(arg1.d)) << 2))
