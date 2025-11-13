// 函数: sub_140fce140
// 地址: 0x140fce140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg1 + 0xc)

if (result == 0 || *(arg1 + 8) s< 0)
    sub_140fe6a60(arg1)
    result = *(arg1 + 0xc)

if (result != 0 && *(arg1 + 8) s>= 0)
    int32_t rcx = *(arg1 + 0xc)
    
    if (((rcx - 0x9100) & 0xfffffcff) != 0 || rcx == 0x9400)
        result.b = 1
        return result

result.b = 0
return result
