// 函数: sub_141ef13d0
// 地址: 0x141ef13d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* result

if (arg2 == 0)
    result = *(arg1 + 0x50)
    
    if (result != 0 && (*result & 1) != 0)
        result = sub_1423cb370(arg1 + 0x30)
    
    data_143f3ac30 = arg1
else
    result = sub_141ef7be0(arg1, arg1 + 0x30)
    data_143f3ac30 = arg1
    
    if (result.b != 0)
        *(arg1 + 0x58) = arg1

return result
