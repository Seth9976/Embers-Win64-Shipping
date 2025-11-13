// 函数: sub_141f70d70
// 地址: 0x141f70d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result_1
sub_140ae16d0(arg2, &result_1, 1)
int32_t result = sub_141ee76e0(arg1)

if (result.b != 0 || (*(arg1 + 0x88) & 1) == 0 || *(arg1 + 0x14f) != result.b)
    result = result_1
    
    if (*(arg1 + 0x208) != result)
        *(arg1 + 0x208) = result
        return sub_141f75da0(arg1)

return result
