// 函数: sub_142234d60
// 地址: 0x142234d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x118) &= 0xfd
*(arg1 + 0x128) &= 0xfd
*(arg1 + 0x138) &= 0xfd
*(arg1 + 0x118) |= arg2 * 2
*(arg1 + 0x128) |= arg3 * 2
*(arg1 + 0x138) |= arg4 * 2
void* arg_8
void** var_10 = &arg_8
arg_8 = arg1
int64_t (* var_18)(int64_t* arg1, int64_t* arg2) = sub_14222c190
return sub_142269c80(arg1 + 8, &var_18)
