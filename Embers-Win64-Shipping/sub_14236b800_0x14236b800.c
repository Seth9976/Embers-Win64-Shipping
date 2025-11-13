// 函数: sub_14236b800
// 地址: 0x14236b800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(arg2)
int64_t result = (*(*arg1 + 0x2a8))()

if (result.d s> arg1[6].d)
    int32_t rsi_1 = arg1[6].d
    arg1[6].d = rsi_1 + 1
    
    if (rsi_1 + 1 s> *(arg1 + 0x34))
        sub_1405a4d70(&arg1[5])
    
    int64_t rbx_1 = rbp << 3
    int64_t rdx_2 = arg1[5] + rbx_1
    memmove(rdx_2 + 8, rdx_2, (rsi_1 - rbp.d) << 3)
    result = arg1[5]
    *(rbx_1 + result) = 0

return result
