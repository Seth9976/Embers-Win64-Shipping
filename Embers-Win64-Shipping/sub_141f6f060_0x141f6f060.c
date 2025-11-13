// 函数: sub_141f6f060
// 地址: 0x141f6f060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* i = *(arg1 + 0x4a0)
int64_t result = sx.q(*(arg1 + 0x4a8))

for (void* rsi = &i[result * 2]; i != rsi; i = &i[2])
    result = sub_140d3c6e0(i)
    
    if (result != 0)
        sub_141f4d0f0(result, 4, 0)
        sub_141ee8470(result)
        result = sub_141ee8690(result)

return result
