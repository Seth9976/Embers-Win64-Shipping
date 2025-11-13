// 函数: sub_140f45890
// 地址: 0x140f45890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

double zmm3 = 0.5
int64_t zmm4 = fconvert.d(arg2.d) f* zmm3
arg1 = (arg1 * zmm3 f- zmm4) / (fconvert.d(arg3) * zmm3 f- zmm4)

if (not(arg1 >= 0.0))
    return _mm_cvtpd_ps(zx.o(0))

arg1.d = fconvert.s(__minsd_xmmsd_memsd(arg1, 0x3ff0000000000000))
return arg1
