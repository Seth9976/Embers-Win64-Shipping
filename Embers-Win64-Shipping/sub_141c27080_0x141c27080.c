// 函数: sub_141c27080
// 地址: 0x141c27080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x1f0) = arg2
int128_t zmm6
zmm6.d = (*(arg1 + 0x7bc)).d f* 0.5f
float result = tanf(arg2 * 0.00872664619f)
zmm6.d = zmm6.d f/ result
*(arg1 + 0x838) = zmm6.d
return result
