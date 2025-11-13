// 函数: sub_1423aecc0
// 地址: 0x1423aecc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 0x10)
void* result_1 = arg1
int32_t i_1 = *(arg1 + 0x18)

if (result != 0)
    result_1 = result

if (i_1 != 0)
    int32_t i
    
    do
        int64_t* rcx = *result_1
        
        if (rcx != 0)
            result = (**rcx)(rcx, 1)
        
        result_1 += 8
        i = i_1
        i_1 -= 1
    while (i != 1)

*(arg1 + 0x18) = 0

if (*(arg1 + 0x1c) == arg2)
    return result

return sub_1408098d0(arg1, arg2)
