// 函数: sub_1427f1780
// 地址: 0x1427f1780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg2 = arg2 * 0.0833333358f
arg3 = arg3 * arg3
float zmm4 = arg5 * arg5
arg4 = arg4 * arg4
*arg1 = (zmm4 + arg4) * arg2
float result = (arg3 + zmm4) * arg2
arg1[1] = result
arg1[2] = (arg3 + arg4) * arg2
return result
