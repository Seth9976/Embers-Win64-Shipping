// 函数: sub_142ae7310
// 地址: 0x142ae7310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result

if (arg2 s< 0)
    *arg3 = 1
    result.b = 0
    return result

int32_t rsi = *(arg1 + 0xc)

if (rsi s< arg2)
    int32_t rsi_1
    
    if (rsi s<= 0x3fffffff)
        rsi_1 = rsi * 2
        
        if (rsi_1 s< arg2)
            rsi_1 = arg2
    
    if (rsi s> 0x3fffffff || rsi_1 s> 0xfffffff)
        result.b = 0
        *arg3 = 1
        return result
    
    result = sub_142a7dd30(*(arg1 + 0x10), sx.q(rsi_1) << 3)
    
    if (result == 0)
        *arg3 = 7
        return result
    
    *(arg1 + 0x10) = result
    *(arg1 + 0xc) = rsi_1

result.b = 1
return result
