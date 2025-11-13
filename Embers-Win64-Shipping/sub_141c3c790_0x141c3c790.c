// 函数: sub_141c3c790
// 地址: 0x141c3c790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = arg1[1]
int32_t result

if (rdx != 0)
    result = 0
    
    if (0 == *(rdx + 8))
        *(rdx + 8) = 0
    else
        result = *(rdx + 8)

if ((rdx == 0 || result != 1) && *arg1 == 0)
    result.b = 0
    return result

result.b = 1
return result
