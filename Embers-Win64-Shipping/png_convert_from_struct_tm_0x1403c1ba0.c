// 函数: png_convert_from_struct_tm
// 地址: 0x1403c1ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0x76c + (*(arg2 + 0x14)).w
int16_t result
result.b = arg2[0x10]
result.b += 1
arg1[1].b = result.b
result.b = arg2[0xc]
*(arg1 + 3) = result.b
result.b = arg2[8]
arg1[2].b = result.b
result.b = arg2[4]
*(arg1 + 5) = result.b
result.b = *arg2
arg1[3].b = result.b
return result
