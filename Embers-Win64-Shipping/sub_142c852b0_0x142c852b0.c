// 函数: sub_142c852b0
// 地址: 0x142c852b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
int32_t result

if (arg1[0xd3] == 0)
    result, arg3 = sub_142c850d0(arg1, arg2)

if (arg1[0xd3] != 0 || result == 0)
    int32_t* rsi_1 = arg1[0xd3]
    
    if (rsi_1 == 0)
        return zx.q((rsi_1 + 0x47).d)
    
    *arg2 = 0
    int512_t zmm2
    result, zmm2 = sub_142c86610(rsi_1, 0, arg3)
    
    if (*rsi_1 == 3)
        if (result == 0)
            return sub_142c86690(rsi_1[2])
    else if (result == 0)
        sub_142c85420(arg1, arg2, zmm2)
        return sub_142c86690(rsi_1[2])

return result
