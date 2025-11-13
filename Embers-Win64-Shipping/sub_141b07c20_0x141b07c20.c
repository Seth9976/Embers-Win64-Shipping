// 函数: sub_141b07c20
// 地址: 0x141b07c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = *(arg1 + 8)
int32_t arg_8 = 0

if (sub_142149f00(arg3, rdx, &arg_8) == 0)
    arg2[4].b = (arg2[4].b & 0xfe) | 2
    return arg2

int32_t zmm0 = arg_8
arg2[4].b = (arg2[4].b & 0xfe) | 3
arg2[1] = *(arg1 + 8)
*arg2 = &data_143057168
arg2[2].d = zmm0
return arg2
