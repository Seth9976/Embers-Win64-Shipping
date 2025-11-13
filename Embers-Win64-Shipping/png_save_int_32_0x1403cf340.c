// 函数: png_save_int_32
// 地址: 0x1403cf340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = (arg2 u>> 0x18).b
uint8_t result = (arg2 u>> 0x10).b
arg1[1] = result
arg1[2] = arg2:1.b
arg1[3] = arg2.b
return result
