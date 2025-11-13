// 函数: sub_141ec0180
// 地址: 0x141ec0180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result
result.b = data_143f3a448 == 0
data_143f3a448 = result.b

if (result.b != 0)
    bool cond:0_1 = *(arg1 + 0x68) != 0
    *(arg1 + 0x74) = 0
    
    if (not(cond:0_1))
        result = *(arg1 + 0x68) + 0xa
        *(arg1 + 0x68) = result
        
        if (result s> *(arg1 + 0x6c))
            return sub_141eca1b0(arg1 + 0x60) __tailcall

return result
