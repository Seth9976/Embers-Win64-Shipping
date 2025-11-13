// 函数: sub_142721b00
// 地址: 0x142721b00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg2 + 0x258)

if (result == 0 || *(result + 0x228) == 0)
    result.b = 0
else
    result.b = 1

char rcx = (*(arg1 + 0xc4)).b

if ((rcx & 4) != 0)
    if ((rcx & 2) == 0)
        if (result.b == 0 || data_143f71fc8 == 0)
        label_142721b40:
            
            if ((*(arg2 + 0x58) & 0x20) == 0)
                result.b = 1
                return result
    else if (result.b != 0 && data_143f71fc8 == 0)
        goto label_142721b40

result.b = 0
return result
