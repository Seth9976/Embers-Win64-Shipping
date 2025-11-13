// 函数: sub_1408be990
// 地址: 0x1408be990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg6 + 4)
*(arg6 + 8)
*(arg6 + 0xc)

if (*(arg1 + 0x410) != 0)
    *arg6

*(arg1 + 0x411)
*(arg1 + 0x412)
*(arg1 + 0x413)
*(arg1 + 0x414)
*(arg1 + 0x415)
float var_98
float var_88
float zmm7_1
float zmm8_1
float zmm9_1
float zmm10_1
zmm7_1, zmm8_1, zmm9_1, zmm10_1 = sub_1408bebf0(arg1 + 0x208, &var_98, arg3, arg4, 
    sub_1408bebf0(arg1, &var_88, arg3, arg4, arg5.d))
*arg2 = (var_98 - var_88) * zmm7_1 + var_88
float var_94
float var_84
arg2[1] = (var_94 - var_84) * zmm8_1 + var_84
float var_90
float var_80
arg2[2] = (var_90 - var_80) * zmm9_1 + var_80
float var_8c
float var_7c
arg2[3] = (var_8c - var_7c) * zmm10_1 + var_7c
return arg2
