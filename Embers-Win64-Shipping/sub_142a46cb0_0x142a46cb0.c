// 函数: sub_142a46cb0
// 地址: 0x142a46cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg2)
uint32_t count = arg3

if (arg2 s<= 0)
    return 0

int64_t result = sub_142a7dd00(rsi)

if (result != 0)
    if (count s> 0)
        if (count s> arg1[1].d)
            count = arg1[1].d
        
        if (count s> rsi.d)
            count = rsi.d
        
        memcpy(result, *arg1, count)
    
    if (*(arg1 + 0xc) != 0)
        sub_142a7dcd0(*arg1)
    
    *arg1 = result
    arg1[1].d = rsi.d
    *(arg1 + 0xc) = 1

return result
