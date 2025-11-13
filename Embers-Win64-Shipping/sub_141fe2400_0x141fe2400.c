// 函数: sub_141fe2400
// 地址: 0x141fe2400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t result

if (arg2 != 0)
    char r8_1 = *(arg1 + 0x20)
    
    if (arg2 != 1)
        if (((r8_1 - 2) & 0xfd) != 0)
            if (r8_1 != 3)
                result.o = *(arg1 + 0x18)
                return result
            
            result.o = *(arg1 + 0x14)
            return result
    else if (r8_1 != arg2.b && r8_1 != 4)
        result.o = *(arg1 + 0x14)
        return result

result.o = *(arg1 + 0x10)
return result
