// 函数: png_get_IHDR
// 地址: 0x1403ced80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || arg2 == 0 || arg3 == 0 || arg4 == 0 || arg5 == 0 || arg6 == 0)
    return 0

*arg3 = *arg2
*arg4 = arg2[1]
*arg5 = zx.d(arg2[9].b)
*arg6 = zx.d(*(arg2 + 0x25))

if (arg8 != 0)
    *arg8 = zx.d(*(arg2 + 0x26))

if (arg9 != 0)
    *arg9 = zx.d(*(arg2 + 0x27))

if (arg7 != 0)
    *arg7 = zx.d(arg2[0xa].b)

sub_1403bf1b0(arg1, *arg2, arg2[1], zx.d(arg2[9].b), zx.d(*(arg2 + 0x25)), zx.d(arg2[0xa].b), 
    zx.d(*(arg2 + 0x26)), zx.d(*(arg2 + 0x27)))
return 1
