// 函数: sub_140ba2960
// 地址: 0x140ba2960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_8 = 0
char* var_10 = &arg_8
void*** (* var_18)() = sub_140884c50
sub_140d1f490(*(sub_140a756e0(&var_18, &data_14397f5f0) + 0x48))
uint64_t result

if (data_143de5480 != 0)
    result.b = GetCurrentThreadId().d == data_143de5470

if (data_143de5480 == 0 || result.b != 0)
    int32_t temp0_1 = data_143e1a570
    data_143e1a570 -= 1
    result = zx.q(data_1439a965c)
    
    if (temp0_1 == 1)
        result = 0xffffffff
    
    data_1439a965c = result.d

if (*(arg1 + 0xcb) == 0)
    result = *(arg1 + 0x58)
    *(result + 8) |= 0x80000

return result
