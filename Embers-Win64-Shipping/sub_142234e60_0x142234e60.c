// 函数: sub_142234e60
// 地址: 0x142234e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x15c) &= 0xfe
*(arg1 + 0x14c) &= 0xfe
*(arg1 + 0x14c) |= arg2
*(arg1 + 0x15c) |= arg3
void* arg_8
int64_t* var_10 = &arg_8
arg_8 = arg1
int64_t (* var_18)(int64_t* arg1, int64_t* arg2) = sub_14222c130
return sub_142269c80(arg1 + 8, &var_18)
