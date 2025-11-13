// 函数: sub_1413e1860
// 地址: 0x1413e1860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 0xf0)
void* result_1 = arg1
int32_t i_1 = *(arg1 + 0xf8)

if (result != 0)
    result_1 = result

if (i_1 != 0)
    int32_t i
    
    do
        *(result_1 + 0x48) = 0
        int64_t rcx = *(result_1 + 0x40)
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        result = sub_1413c3ab0(result_1)
        result_1 += 0x50
        i = i_1
        i_1 -= 1
    while (i != 1)

*(arg1 + 0xf8) = 0

if (*(arg1 + 0xfc) == arg2)
    return result

return sub_1413f7060(arg1, arg2)
