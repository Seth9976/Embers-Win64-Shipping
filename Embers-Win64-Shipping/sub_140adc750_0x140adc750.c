// 函数: sub_140adc750
// 地址: 0x140adc750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm3 = (zx.o(0)).d
float zmm2 = 1f - arg2
zmm2 = zmm2 + zmm2

if (zmm2 >= 0f)
    zmm2 = _mm_min_ss(zmm2, 0x3f800000)
else
    zmm2 = (zx.o(0)).d

arg2 = arg2 + arg2

if (not(arg2 < 0f))
    zmm3 = _mm_min_ss(arg2, 0x3f800000)

*arg1 = 0
arg1[3] = 0xff
arg1[1] = (int.d(zmm3 f* 255f)).b
arg1[2] = (int.d(zmm2 * 255f)).b
return arg1
