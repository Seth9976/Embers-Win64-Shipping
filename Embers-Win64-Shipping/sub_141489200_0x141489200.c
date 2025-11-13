// 函数: sub_141489200
// 地址: 0x141489200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 0x20)
void* result_1 = arg1
int32_t i_1 = *(arg1 + 0x28)

if (result != 0)
    result_1 = result

if (i_1 != 0)
    int32_t i
    
    do
        int64_t* rcx = *result_1
        
        if (rcx != 0)
            result = (*(*rcx + 0x38))(rcx)
        
        result_1 += 8
        i = i_1
        i_1 -= 1
    while (i != 1)

*(arg1 + 0x28) = 0

if (*(arg1 + 0x2c) == arg2)
    return result

return sub_141427a80(arg1, arg2)
