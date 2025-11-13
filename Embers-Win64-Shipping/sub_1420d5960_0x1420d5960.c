// 函数: sub_1420d5960
// 地址: 0x1420d5960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm1 = arg5
float zmm0[0x4] = arg4
arg4 = zx.o(0)

if (not(zmm1.d f> 0f))
    *arg1 = *arg3
    arg1[1] = arg3[1]
    arg1[2] = arg3[2]
    return arg1

zmm0[0] = zmm0[0] f* zmm1.d

if (not(zmm0[0] < 0f))
    arg4 = __minss_xmmss_memss(zmm0[0], 0x3f800000)

sub_1420d59d0(arg1, arg2, arg3, arg4, 0)
return arg1
