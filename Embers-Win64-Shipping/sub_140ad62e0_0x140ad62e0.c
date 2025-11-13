// 函数: sub_140ad62e0
// 地址: 0x140ad62e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4] = arg1
float zmm5 = arg2[0] - zmm6[0]

if (not(zmm5 * zmm5 >= 9.99999994e-09f))
    return arg2

arg3[0] = arg3[0] f* arg4
arg1 = arg3 ^ data_142d3f780

if (not(zmm5 < arg1[0]))
    arg1 = _mm_min_ss(arg3[0], zmm5)

arg1[0] = arg1[0] + zmm6[0]
return arg1
