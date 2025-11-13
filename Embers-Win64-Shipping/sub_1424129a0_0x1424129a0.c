// 函数: sub_1424129a0
// 地址: 0x1424129a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = data_143f5b298
int64_t rsi = *(result + 0x3e0)

if (rsi != 0)
    int64_t rdi_1 = sx.q(arg2[1].d)
    int32_t rax = (rdi_1 + 1).d
    arg2[1].d = rax
    
    if (rax s> *(arg2 + 0xc))
        sub_1405a4d70(arg2)
    
    result = *arg2
    *(result + (rdi_1 << 3)) = rsi

return result
