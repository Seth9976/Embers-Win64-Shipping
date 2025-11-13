// 函数: sub_141fc7780
// 地址: 0x141fc7780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = sub_142154660(arg1, arg2)

if (*(arg2 + 0x2a) s< 0)
    int64_t r9_1 = *arg2
    (*(r9_1 + 8))(arg2, sx.q(*(arg1 + 0x1a38)) * 0x28, sx.q(*(arg1 + 0x1a3c)) * 0x28, r9_1)
    void* i = *(arg1 + 0x1a30)
    
    for (void* rsi_1 = i + sx.q(*(arg1 + 0x1a38)) * 0x28; i != rsi_1; i += 0x28)
        (*(*arg2 + 8))(arg2, sx.q(*(i + 8)), sx.q(*(i + 0xc)))
    
    int64_t r9_2 = *arg2
    (*(r9_2 + 8))(arg2, sx.q(*(arg1 + 0x1a48)) * 0x28, sx.q(*(arg1 + 0x1a4c)) * 0x28, r9_2)
    void* i_1 = *(arg1 + 0x1a40)
    result = sx.q(*(arg1 + 0x1a48))
    
    for (void* rsi_2 = i_1 + result * 0x28; i_1 != rsi_2; i_1 += 0x28)
        result = (*(*arg2 + 8))(arg2, sx.q(*(i_1 + 8)), sx.q(*(i_1 + 0xc)))

return result
