// 函数: sub_141ef7270
// 地址: 0x141ef7270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x210) &= 0xbf
uint64_t result
result.b = arg2 << 6
*(arg1 + 0x210) |= result.b

if ((*(arg1 + 0x8a) & 1) != 0)
    result = sub_141ee2210(arg1)
    
    if (result != 0)
        int64_t var_60_1 = *(arg1 + 0x740)
        void** const var_28_1 = &data_142e345d8
        void* (* var_48)(int64_t* arg1) = sub_141ed9b70
        int64_t var_38_1 = 0
        int128_t var_20_1 = result.o
        int64_t var_10_1 = arg2.q
        return sub_141e85cb0(&var_48, arg3)

return result
