// 函数: sub_141a39610
// 地址: 0x141a39610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *(arg1 + 8)
int64_t result = sx.q(*(arg1 + 0x10))

for (void* rsi = &i[result * 9]; i != rsi; i = &i[9])
    int64_t* i_1 = i
    
    if ((i[8].b & 2) == 0)
        i_1 = *i
    
    result = (*(*i_1 + 0x10))(i_1, zx.q(arg2))

return result
