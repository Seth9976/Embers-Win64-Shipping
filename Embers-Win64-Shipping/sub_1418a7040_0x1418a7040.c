// 函数: sub_1418a7040
// 地址: 0x1418a7040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x18)
int64_t var_18 = *(arg1 + 0xa8)
int128_t zmm0 = var_18.o
var_18.o = zmm0
int64_t result = (*(*rcx + 0x48))(zmm0, arg2, &var_18, 0xc, var_18, arg3)
*(arg1 + 0xa8) = arg3
return result
