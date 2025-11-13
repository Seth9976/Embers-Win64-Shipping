// 函数: sub_141ef67e0
// 地址: 0x141ef67e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r8 = *(arg1 + 0x212)
uint64_t result
result.b = r8 u>> 1
result.b &= 1

if (result.b != arg2)
    result.b = arg2 * 2
    bool cond:0_1 = (*(arg1 + 0x8a) & 1) == 0
    *(arg1 + 0x212) = (r8 & 0xfd) | result.b
    
    if (not(cond:0_1))
        result = sub_141ee2210(arg1)
        
        if (result != 0)
            int64_t var_60_1 = *(arg1 + 0x740)
            void** const var_28_1 = &data_142e345d8
            int64_t (* var_48)(int64_t* arg1) = sub_141ed9930
            int64_t var_38_1 = 0
            int128_t var_20_1 = result.o
            int64_t var_10_1 = arg2.q
            return sub_141e85cb0(&var_48, arg3)

return result
