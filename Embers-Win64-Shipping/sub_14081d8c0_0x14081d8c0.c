// 函数: sub_14081d8c0
// 地址: 0x14081d8c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    int32_t r8_1 = *(arg1 + 0xc)
    int64_t rsi_1 = *arg2
    uint32_t count = arg2[1].d
    arg1[1].d = count
    
    if (count == 0 && r8_1 == 0)
        *(arg1 + 0xc) = count
        return arg1
    
    sub_1405da9e0(arg1, count, r8_1)
    memcpy(*arg1, rsi_1, count)

return arg1
