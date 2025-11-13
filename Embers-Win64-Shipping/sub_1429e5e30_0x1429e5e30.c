// 函数: sub_1429e5e30
// 地址: 0x1429e5e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = sub_1429e0bd0(arg2, 6)
arg1[2] = sub_1429e0bd0(arg2, 3)
*(arg1 + 0x11) = 0
int32_t result = sub_1429e0b80(arg2, arg3)
arg1[4].b = result.b

if (result.b != 0)
    result = sub_1429e0b80(arg2, arg3)
    *(arg1 + 0x11) = result.b
    
    if (result.b != 0)
        int64_t i_1 = 0
        
        for (int64_t i = 0; i s< 4; i += 1)
            if (sub_1429e0b80(arg2, arg3) != 0)
                *(i + arg1 + 0x12) = sub_1429e0c50(arg2, 6)
        
        do
            result = sub_1429e0b80(arg2, arg3)
            
            if (result != 0)
                result = sub_1429e0c50(arg2, 6)
                *(i_1 + arg1 + 0x1a) = result.b
            
            i_1 += 1
        while (i_1 s< 2)

return result
