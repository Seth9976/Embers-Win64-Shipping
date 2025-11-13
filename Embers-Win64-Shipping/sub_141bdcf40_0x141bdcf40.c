// 函数: sub_141bdcf40
// 地址: 0x141bdcf40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = *(arg1 + 0x178)
int64_t arg_8 = arg2
void* r8 = &result[sx.q(*(arg1 + 0x180))]

if (result != r8)
    void* rcx_1
    
    while (true)
        rcx_1 = *result
        
        if (*(rcx_1 + 0x408) == arg2)
            break
        
        result = &result[1]
        
        if (result == r8)
            return result
    
    if (result != 0 && rcx_1 != 0 && *(rcx_1 + 0x758) == 1)
        result.b = *(rcx_1 + 0x794) == 0
        *(rcx_1 + 0x794) = result.b

return result
